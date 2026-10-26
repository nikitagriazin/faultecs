#include "faultlab/world.hpp"
#include <cassert>
#include <stdexcept>

struct Position { int x = 0; };
struct Velocity { int x = 0; };

int main() {
    faultlab::World world;
    const auto a = world.create();
    const auto b = world.create();
    world.emplace<Position>(a, 4);
    world.emplace<Velocity>(a, 2);
    world.emplace<Position>(b, 9);
    int visits = 0;
    world.each<Position, Velocity>([&](faultlab::Entity e, Position& p, Velocity& v) {
        assert(e == a);
        p.x += v.x;
        ++visits;
    });
    assert(visits == 1 && world.get<Position>(a)->x == 6);
    assert(world.remove<Velocity>(a));
    assert(!world.remove<Velocity>(a));
    assert(world.destroy(a));
    assert(!world.destroy(a));
    assert(world.get<Position>(a) == nullptr);
    const auto c = world.create();
    assert(c.index == a.index && c.generation != a.generation);
    assert(world.entity_count() == 2);
    bool rejected = false;
    try { world.emplace<Position>(a, 1); }
    catch (const std::invalid_argument&) { rejected = true; }
    assert(rejected);
    world.emplace<Position>(c, 7);
    world.each<Position>([&](faultlab::Entity e, Position&) {
        if (e == b) world.destroy(b);
    });
    assert(!world.alive(b));
    assert(world.alive(c));
}
