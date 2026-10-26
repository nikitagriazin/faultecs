#include "faultlab/link_graph.hpp"
#include <cassert>

int main() {
    faultlab::World world;
    faultlab::LinkGraph links(world);
    const auto a = world.create();
    const auto b = world.create();
    const auto c = world.create();
    links.connect(a, b, 1.0f, 0, false);
    links.connect(b, c, 2.0f, 0, false);
    assert(links.reachable(a, c));
    assert(!links.reachable(c, a));
    assert(links.sameComponent(a, c));
    assert(links.shortestCost(a, c) == 3.0f);
    assert(links.topologicalOrder().size() == 3);
    assert(!links.hasCycle());
}
