#include "registry.hpp"
#include "faultlab/link_graph.hpp"
#include <array>
#include <charconv>
#include <iostream>
#include <string_view>

static unsigned parse(std::string_view text, unsigned fallback) {
    unsigned value = fallback;
    auto [end, error] = std::from_chars(text.data(), text.data() + text.size(), value);
    return error == std::errc{} && end == text.data() + text.size() ? value : fallback;
}

int main(int argc, char** argv) {
    const unsigned ticks = argc > 1 ? parse(argv[1], 10) : 10;
    const unsigned count = argc > 2 ? parse(argv[2], 32) : 32;
    faultlab::World world;
    faultlab::Pipeline pipeline;
    faultlab::generated::seed(world, count);
    faultlab::generated::install(pipeline);
    faultlab::LinkGraph links(world);
    std::array<faultlab::Entity, 64> nodes;
    for (unsigned i = 0; i < nodes.size(); ++i) {
        nodes[i] = world.create();
        links.track(nodes[i]);
        if (i % 8 != 0) links.connect(nodes[i - 1], nodes[i]);
    }
    unsigned connected_clusters = 0;
    for (unsigned i = 0; i < ticks; ++i) {
        pipeline.tick(world, 1.0f / 60.0f);
        for (unsigned cluster = 0; cluster < 8; ++cluster)
            connected_clusters += links.reachable(nodes[cluster * 8], nodes[cluster * 8 + 7]);
    }
    std::cout << "domains=" << faultlab::generated::domain_count
              << " systems=" << pipeline.size()
              << " entities=" << world.entity_count()
              << " graph_nodes=" << nodes.size()
              << " connected_checks=" << connected_clusters
              << " ticks=" << ticks << '\n';
}
