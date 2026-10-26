#pragma once

#include <algorithm>
#include <cstdint>
#include <functional>
#include <memory>
#include <stdexcept>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <vector>

namespace faultlab {

struct Entity {
    std::uint32_t index = 0;
    std::uint32_t generation = 0;
    friend bool operator==(Entity, Entity) = default;
};

class World {
    struct StoreBase {
        virtual ~StoreBase() = default;
        virtual void erase(std::uint32_t index) = 0;
    };

    template <class T> struct Store final : StoreBase {
        std::vector<Entity> entities;
        std::vector<T> values;
        std::unordered_map<std::uint32_t, std::size_t> sparse;

        T* find(Entity e) {
            auto it = sparse.find(e.index);
            if (it == sparse.end() || entities[it->second].generation != e.generation) return nullptr;
            return &values[it->second];
        }

        template <class... Args> T& insert(Entity e, Args&&... args) {
            if (auto* old = find(e)) return *old;
            const auto offset = values.size();
            values.emplace_back(std::forward<Args>(args)...);
            try { entities.push_back(e); }
            catch (...) { values.pop_back(); throw; }
            try { sparse.emplace(e.index, offset); }
            catch (...) { entities.pop_back(); values.pop_back(); throw; }
            return values.back();
        }

        void erase(std::uint32_t index) override {
            auto it = sparse.find(index);
            if (it == sparse.end()) return;
            const auto pos = it->second;
            const auto last = values.size() - 1;
            if (pos != last) {
                values[pos] = std::move(values[last]);
                entities[pos] = entities[last];
                sparse[entities[pos].index] = pos;
            }
            values.pop_back();
            entities.pop_back();
            sparse.erase(it);
        }
    };

public:
    Entity create() {
        if (!free_.empty()) {
            auto index = free_.back();
            free_.pop_back();
            alive_[index] = true;
            return {index, generations_[index]};
        }
        auto index = static_cast<std::uint32_t>(generations_.size());
        generations_.push_back(1);
        alive_.push_back(true);
        return {index, 1};
    }

    bool alive(Entity e) const {
        return e.index < generations_.size() && alive_[e.index] && generations_[e.index] == e.generation;
    }

    bool destroy(Entity e) {
        if (!alive(e)) return false;
        for (auto& [_, store] : stores_) store->erase(e.index);
        alive_[e.index] = false;
        ++generations_[e.index];
        free_.push_back(e.index);
        return true;
    }

    template <class T, class... Args> T& emplace(Entity e, Args&&... args) {
        if (!alive(e)) throw std::invalid_argument("stale entity");
        return store<T>().insert(e, std::forward<Args>(args)...);
    }

    template <class T> T* get(Entity e) {
        if (!alive(e)) return nullptr;
        auto* s = find_store<T>();
        return s ? s->find(e) : nullptr;
    }

    template <class T> const T* get(Entity e) const {
        return const_cast<World*>(this)->get<T>(e);
    }

    template <class T> bool remove(Entity e) {
        if (!get<T>(e)) return false;
        store<T>().erase(e.index);
        return true;
    }

    template <class First, class... Rest, class Fn> void each(Fn&& fn) {
        auto* primary = find_store<First>();
        if (!primary) return;
        const auto snapshot = primary->entities;
        for (Entity e : snapshot) {
            if (!alive(e)) continue;
            auto* first = get<First>(e);
            if (!first || !((get<Rest>(e) != nullptr) && ...)) continue;
            std::invoke(fn, e, *first, *get<Rest>(e)...);
        }
    }

    std::size_t entity_count() const { return generations_.size() - free_.size(); }

private:
    template <class T> Store<T>* find_store() {
        auto it = stores_.find(std::type_index(typeid(T)));
        return it == stores_.end() ? nullptr : static_cast<Store<T>*>(it->second.get());
    }

    template <class T> Store<T>& store() {
        auto key = std::type_index(typeid(T));
        auto it = stores_.find(key);
        if (it == stores_.end()) it = stores_.emplace(key, std::make_unique<Store<T>>()).first;
        return *static_cast<Store<T>*>(it->second.get());
    }

    std::vector<std::uint32_t> generations_;
    std::vector<bool> alive_;
    std::vector<std::uint32_t> free_;
    std::unordered_map<std::type_index, std::unique_ptr<StoreBase>> stores_;
};

using System = void (*)(World&, float);

class Pipeline {
public:
    void add(System system) { systems_.push_back(system); }
    void tick(World& world, float dt) const {
        for (auto system : systems_) system(world, dt);
    }
    std::size_t size() const { return systems_.size(); }
private:
    std::vector<System> systems_;
};

} // namespace faultlab
