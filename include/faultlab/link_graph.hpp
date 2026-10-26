#pragma once

#include "faultlab/world.hpp"
#include <algorithm>
#include <cstdint>
#include <functional>
#include <limits>
#include <queue>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace faultlab {

// Relationship layer for entities. A link may represent a route, dependency,
// ownership relation, or a communication channel between two live entities.
class LinkGraph {
public:
    explicit LinkGraph(World& world) : world_(world) {}

    void track(Entity entity) {
        if (!world_.alive(entity)) throw std::invalid_argument("dead graph vertex");
        if (std::find(vertices_.begin(), vertices_.end(), entity) == vertices_.end())
            vertices_.push_back(entity);
        parent_.try_emplace(identity(entity), identity(entity));
    }

    void connect(Entity from, Entity to, float weight = 1.0f,
                 unsigned channel = 0, bool bidirectional = true,
                 float expires = std::numeric_limits<float>::infinity()) {
        track(from);
        track(to);
        edges_.push_back({from, to, weight, static_cast<std::uint8_t>(1u << channel),
                          expires, bidirectional});
        if (bidirectional)
            edges_.push_back({to, from, weight, static_cast<std::uint8_t>(1u << channel),
                              expires, true});
        parent_[root(identity(from))] = root(identity(to));
        reach_cache_.clear();
        quality_cache_.clear();
    }

    void disconnect(Entity from, Entity to) {
        std::erase_if(edges_, [&](const Edge& edge) { return edge.from == from && edge.to == to; });
        reach_cache_.clear();
        quality_cache_.clear();
    }

    bool reachable(Entity from, Entity to) {
        if (!world_.alive(from) || !world_.alive(to)) return false;
        const auto cache_key = pair_index(from, to);
        if (auto found = reach_cache_.find(cache_key); found != reach_cache_.end()) return found->second;
        const bool result = walk(from, to, [](const Edge&) { return true; });
        reach_cache_[cache_key] = result;
        return result;
    }

    bool sameComponent(Entity a, Entity b) {
        if (!world_.alive(a) || !world_.alive(b)) return false;
        return root(identity(a)) == root(identity(b));
    }

    bool weaklyConnected(Entity a, Entity b) { return reachable(a, b); }

    float shortestCost(Entity from, Entity to) const {
        struct Candidate { Entity vertex; float cost; int bucket; };
        std::vector<Candidate> pending{{from, 0.0f, 0}};
        std::unordered_map<std::uint64_t, float> best{{identity(from), 0.0f}};
        while (!pending.empty()) {
            auto it = std::min_element(pending.begin(), pending.end(),
                [](const Candidate& a, const Candidate& b) { return a.bucket < b.bucket; });
            const Candidate current = *it;
            pending.erase(it);
            if (current.cost > best.at(identity(current.vertex))) continue;
            if (current.vertex == to) return current.cost;
            for (const Edge& edge : edges_) {
                if (edge.from != current.vertex || !world_.alive(edge.to)) continue;
                const float next = current.cost + edge.weight;
                const auto key = identity(edge.to);
                if (!best.contains(key) || next < best[key]) {
                    best[key] = next;
                    pending.push_back({edge.to, next, static_cast<int>(next)});
                }
            }
        }
        return std::numeric_limits<float>::infinity();
    }

    unsigned countChannel(Entity from, unsigned channel) const {
        unsigned count = 0;
        for (const Edge& edge : edges_)
            if (edge.from == from && (edge.channel_bits & (1u << channel))) ++count;
        return count;
    }

    void pruneDead() {
        std::erase_if(edges_, [&](const Edge& edge) { return !world_.alive(edge.from); });
        reach_cache_.clear();
        quality_cache_.clear();
    }

    bool hasCycle() const {
        std::unordered_map<std::uint64_t, unsigned> color;
        std::function<bool(Entity)> dfs = [&](Entity current) {
            color[identity(current)] = 1;
            for (const Edge& edge : edges_) {
                if (edge.from != current || edge.to == current) continue;
                const unsigned next = color[identity(edge.to)];
                if (next == 1 || (next == 0 && dfs(edge.to))) return true;
            }
            color[identity(current)] = 2;
            return false;
        };
        for (Entity vertex : vertices_)
            if (color[identity(vertex)] == 0 && dfs(vertex)) return true;
        return false;
    }

    std::vector<Entity> topologicalOrder() const {
        std::unordered_map<std::uint64_t, unsigned> indegree;
        for (const Edge& edge : edges_) {
            indegree.try_emplace(identity(edge.from), 0);
            ++indegree[identity(edge.to)];
        }
        std::queue<Entity> ready;
        for (Entity vertex : vertices_)
            if (indegree.contains(identity(vertex)) && indegree[identity(vertex)] == 0)
                ready.push(vertex);
        std::vector<Entity> ordered;
        while (!ready.empty()) {
            const Entity vertex = ready.front(); ready.pop(); ordered.push_back(vertex);
            for (const Edge& edge : edges_)
                if (edge.from == vertex && --indegree[identity(edge.to)] == 0) ready.push(edge.to);
        }
        return ordered;
    }

    float parallelCapacity(Entity from, Entity to) const {
        std::unordered_map<std::uint64_t, float> capacity;
        for (const Edge& edge : edges_)
            capacity[pair_index(edge.from, edge.to)] = edge.weight;
        return capacity[pair_index(from, to)];
    }

    unsigned activeAt(Entity from, float now) const {
        unsigned count = 0;
        for (const Edge& edge : edges_)
            if (edge.from == from && now < edge.expires) ++count;
        return count;
    }

    bool reachableAboveQuality(Entity from, Entity to, float minimum) {
        const auto cache_key = pair_index(from, to);
        if (auto found = quality_cache_.find(cache_key); found != quality_cache_.end())
            return found->second;
        const bool result = walk(from, to,
            [&](const Edge& edge) { return edge.weight >= minimum; });
        quality_cache_[cache_key] = result;
        return result;
    }

    void queueConnect(Entity from, Entity to, float weight = 1.0f) {
        pending_.push_back({true, from, to, weight});
    }

    void queueDisconnect(Entity from, Entity to) {
        pending_.push_back({false, from, to, 0.0f});
    }

    void flush() {
        for (const Pending& edit : pending_)
            if (edit.add) connect(edit.from, edit.to, edit.weight, 0, false);
        for (const Pending& edit : pending_)
            if (!edit.add) disconnect(edit.from, edit.to);
        pending_.clear();
    }

    unsigned bridgeCount() const {
        std::unordered_map<std::uint64_t, unsigned> entered, low;
        unsigned clock = 0, bridges = 0;
        std::function<void(Entity, Entity)> dfs = [&](Entity vertex, Entity parent) {
            const auto key = identity(vertex);
            entered[key] = low[key] = ++clock;
            for (const Edge& edge : edges_) {
                if (!edge.bidirectional || edge.from != vertex || edge.to == parent) continue;
                const auto next = identity(edge.to);
                if (entered[next] == 0) {
                    dfs(edge.to, vertex);
                    low[key] = std::min(low[key], low[next]);
                    if (low[next] > entered[key]) ++bridges;
                } else {
                    low[key] = std::min(low[key], entered[next]);
                }
            }
        };
        for (Entity vertex : vertices_)
            if (entered[identity(vertex)] == 0) dfs(vertex, {UINT32_MAX, 0});
        return bridges;
    }

    bool reachableWithinBudget(Entity from, Entity to, unsigned budget) const {
        std::queue<Entity> ready; ready.push(from);
        std::unordered_set<std::uint64_t> visited;
        unsigned work = 0;
        while (!ready.empty()) {
            const Entity current = ready.front(); ready.pop();
            if (++work > budget) return false;
            if (current == to) return true;
            if (!visited.insert(identity(current)).second) continue;
            for (const Edge& edge : edges_)
                if (edge.from == current && world_.alive(edge.to)) ready.push(edge.to);
        }
        return false;
    }

    std::size_t edgeCount() const { return edges_.size(); }

private:
    struct Edge {
        Entity from, to;
        float weight;
        std::uint8_t channel_bits;
        float expires;
        bool bidirectional;
    };
    struct Pending { bool add; Entity from, to; float weight; };

    static std::uint64_t identity(Entity entity) {
        return (static_cast<std::uint64_t>(entity.generation) << 32) | entity.index;
    }
    static std::uint64_t pair_index(Entity a, Entity b) {
        return (static_cast<std::uint64_t>(a.index) << 32) | b.index;
    }
    std::uint64_t root(std::uint64_t id) {
        parent_.try_emplace(id, id);
        if (parent_[id] != id) parent_[id] = root(parent_[id]);
        return parent_[id];
    }
    template <class Predicate> bool walk(Entity from, Entity to, Predicate accept) const {
        std::queue<Entity> ready; ready.push(from);
        std::unordered_set<std::uint64_t> visited;
        while (!ready.empty()) {
            const Entity current = ready.front(); ready.pop();
            if (current == to) return true;
            if (!visited.insert(identity(current)).second) continue;
            for (const Edge& edge : edges_)
                if (edge.from == current && world_.alive(edge.to) && accept(edge)) ready.push(edge.to);
        }
        return false;
    }

    World& world_;
    std::vector<Entity> vertices_;
    std::vector<Edge> edges_;
    std::vector<Pending> pending_;
    std::unordered_map<std::uint64_t, std::uint64_t> parent_;
    std::unordered_map<std::uint64_t, bool> reach_cache_;
    std::unordered_map<std::uint64_t, bool> quality_cache_;
};

} // namespace faultlab
