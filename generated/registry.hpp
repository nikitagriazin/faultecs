#pragma once
#include "faultlab/world.hpp"
namespace faultlab::generated {
void seed(World& world, unsigned entities_per_domain);
void install(Pipeline& pipeline);
constexpr unsigned domain_count = 180;
}
