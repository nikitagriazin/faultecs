#include "faultlab/world.hpp"
#include "faultlab/link_graph.hpp"
#include <array>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <mutex>
#include <span>
#include <string>
#include <string_view>
#include <thread>
#include <vector>

namespace {
volatile int observed = 0;
struct Position { int x = 0; };
struct Velocity { int x = 0; };

void f01() { auto p = std::make_unique<int[]>(4); observed = p[4]; }
void f02() { auto p = std::make_unique<int[]>(4); p[4] = 19; observed = p[0]; }
void f03() { auto p = std::make_unique<int[]>(4); p[-1] = 19; observed = p[0]; }
void f04() { int data[4] = {}; data[4] = 9; observed = data[0]; }
void f05() { int* p = new int(42); delete p; observed = *p; }
void f06() { int* p = new int(42); delete p; delete p; }
void f07() { int* p = new int[4]; delete p; }
void f08() { std::vector<int> v(1, 4); int* p = v.data(); v.reserve(1000); observed = *p; }
void f09() { std::string_view view; { std::string value(100, 'x'); view = value; } observed = view[0]; }
void f10() { std::span<int> view; { std::vector<int> value(2, 9); view = value; } observed = view[0]; }
void f11() {
    faultlab::World world;
    auto e = world.create();
    Position* p = &world.emplace<Position>(e, 4);
    for (int i = 0; i < 1000; ++i) world.emplace<Position>(world.create(), i);
    observed = p->x;
}
void f12() {
    faultlab::World world;
    auto e = world.create();
    world.emplace<Position>(e, 4);
    world.each<Position>([&](faultlab::Entity entity, Position& p) {
        world.destroy(entity);
        observed = p.x;
    });
}
void f13() { int* p = static_cast<int*>(std::malloc(sizeof(int))); observed = *p; std::free(p); }
void f14() { volatile int a = std::numeric_limits<int>::max(); observed = a + 1; }
void f15() { volatile int zero = 0; observed = 4 / zero; }
void f16() { volatile int count = 32; observed = 1 << count; }
void f17() {
    alignas(8) char bytes[sizeof(std::uint64_t) + 1] = {};
    auto* p = reinterpret_cast<std::uint64_t*>(bytes + 1);
    *p = 7;
    observed = static_cast<int>(*p);
}
void f18() { volatile int* p = nullptr; observed = *p; }
void f19() { char value[16] = "abcdefgh"; std::memcpy(value + 1, value, 8); observed = value[1]; }
void f20() {
    struct A { int x = 1; virtual ~A() = default; };
    struct B : A { int y = 2; };
    A a;
    observed = static_cast<B&>(a).y;
}
void f21() {
    std::vector<int> data{1, 2, 3};
    auto it = data.begin();
    data.erase(it);
    observed = *it;
}
void f22() {
    std::map<int, int> data{{1, 5}};
    int& ref = data.begin()->second;
    data.erase(1);
    observed = ref;
}
void f23() { int* p = new int[128]; p[0] = 2; observed = p[0]; }
void f24() { int* p = new int(21); observed = *p; }
void f25() { void* p = std::malloc(1024); std::memset(p, 7, 1024); observed = static_cast<char*>(p)[0]; }
void f26() {
    struct Node { std::shared_ptr<Node> next; int value = 1; };
    auto a = std::make_shared<Node>(); auto b = std::make_shared<Node>();
    a->next = b; b->next = a; observed = b->value;
}
void f27() { FILE* file = std::tmpfile(); if (file) { std::fputs("lost handle", file); observed = 1; } }
void f28() { FILE* file = std::tmpfile(); if (file) { std::fclose(file); std::fclose(file); } }
void f29() {
    int counter = 0;
    std::thread a([&] { for (int i = 0; i < 10000; ++i) ++counter; });
    std::thread b([&] { for (int i = 0; i < 10000; ++i) ++counter; });
    a.join(); b.join(); observed = counter;
}
void f30() {
    std::vector<int> data;
    std::thread a([&] { for (int i = 0; i < 1000; ++i) data.push_back(i); });
    std::thread b([&] { for (int i = 0; i < 1000; ++i) data.push_back(i); });
    a.join(); b.join(); observed = static_cast<int>(data.size());
}
void f31() {
    faultlab::World world;
    auto e = world.create(); world.emplace<Position>(e, 0);
    std::thread a([&] { for (int i = 0; i < 10000; ++i) ++world.get<Position>(e)->x; });
    std::thread b([&] { for (int i = 0; i < 10000; ++i) ++world.get<Position>(e)->x; });
    a.join(); b.join(); observed = world.get<Position>(e)->x;
}
void f32() {
    unsigned capacity = 4;
    unsigned used = 7;
    unsigned available = capacity - used;
    observed = available > 100 ? 1 : 0;
}
void f33() {
    faultlab::World world;
    auto old = world.create(); world.emplace<Position>(old, 10); world.destroy(old);
    auto current = world.create(); world.emplace<Position>(current, 20);
    auto forged = faultlab::Entity{old.index, current.generation};
    observed = world.get<Position>(forged)->x;
}
void increment(faultlab::World& world, float) {
    world.each<Position>([](faultlab::Entity, Position& p) { ++p.x; });
}
void f34() {
    faultlab::World world; auto e = world.create(); world.emplace<Position>(e, 0);
    faultlab::Pipeline pipeline; pipeline.add(increment); pipeline.add(increment);
    pipeline.tick(world, 1.0f); observed = world.get<Position>(e)->x;
}
void f35() {
    float energy = 0.0f;
    float normalized = 4.0f / energy;
    observed = normalized > 1.0f ? 1 : 0;
}
void f36() {
    faultlab::World world; auto e = world.create();
    world.emplace<Position>(e, 5); world.emplace<Velocity>(e, 9);
    world.each<Position, Velocity>([](faultlab::Entity, Position& p, Velocity& v) { p.x = v.x; });
    observed = world.get<Position>(e)->x;
}
void f37() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b); links.disconnect(a, b);
    observed = links.reachable(b, a);
}
void f38() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 0, false);
    links.reachable(a, b); world.destroy(a);
    auto replacement = world.create();
    observed = links.reachable(replacement, b);
}
void f39() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 0, false);
    links.disconnect(a, b);
    observed = links.sameComponent(a, b);
}
void f40() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(b, a, 1.0f, 0, false);
    observed = links.weaklyConnected(a, b);
}
void f41() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create(), target = world.create();
    links.connect(a, target, 1.9f, 0, false);
    links.connect(a, b, 1.1f, 0, false);
    links.connect(b, target, 0.1f, 0, false);
    observed = static_cast<int>(links.shortestCost(a, target) * 10.0f + 0.5f);
}
void f42() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 8, false);
    observed = links.countChannel(a, 8);
}
void f43() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 0, false);
    world.destroy(b); links.pruneDead();
    observed = static_cast<int>(links.edgeCount());
}
void f44() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(); links.connect(a, a, 1.0f, 0, false);
    observed = links.hasCycle();
}
void f45() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create(), isolated = world.create();
    links.connect(a, b, 1.0f, 0, false); links.track(isolated);
    observed = static_cast<int>(links.topologicalOrder().size());
}
void f46() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 2.0f, 0, false); links.connect(a, b, 3.0f, 0, false);
    observed = static_cast<int>(links.parallelCapacity(a, b));
}
void f47() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 0, false, 10.0f);
    observed = links.activeAt(a, 10.0f);
}
void f48() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 0.7f, 0, false);
    links.reachableAboveQuality(a, b, 0.5f);
    observed = links.reachableAboveQuality(a, b, 0.9f);
}
void f49() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b, 1.0f, 0, false);
    links.queueDisconnect(a, b); links.queueConnect(a, b);
    links.flush(); observed = links.reachable(a, b);
}
void f50() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create();
    links.connect(a, b); links.connect(a, b);
    observed = links.bridgeCount();
}
void f51() {
    faultlab::World world; faultlab::LinkGraph links(world);
    auto a = world.create(), b = world.create(), target = world.create();
    links.connect(a, b, 1.0f, 0, false);
    links.connect(a, b, 1.0f, 0, false);
    links.connect(b, target, 1.0f, 0, false);
    observed = links.reachableWithinBudget(a, target, 3);
}

struct Fault { const char* id; const char* category; const char* description; void (*run)(); };
constexpr std::array faults = {
    Fault{"01", "probe", "scenario 01", f01},
    Fault{"02", "probe", "scenario 02", f02},
    Fault{"03", "probe", "scenario 03", f03},
    Fault{"04", "probe", "scenario 04", f04},
    Fault{"05", "probe", "scenario 05", f05},
    Fault{"06", "probe", "scenario 06", f06},
    Fault{"07", "probe", "scenario 07", f07},
    Fault{"08", "probe", "scenario 08", f08},
    Fault{"09", "probe", "scenario 09", f09},
    Fault{"10", "probe", "scenario 10", f10},
    Fault{"11", "probe", "scenario 11", f11},
    Fault{"12", "probe", "scenario 12", f12},
    Fault{"13", "probe", "scenario 13", f13},
    Fault{"14", "probe", "scenario 14", f14},
    Fault{"15", "probe", "scenario 15", f15},
    Fault{"16", "probe", "scenario 16", f16},
    Fault{"17", "probe", "scenario 17", f17},
    Fault{"18", "probe", "scenario 18", f18},
    Fault{"19", "probe", "scenario 19", f19},
    Fault{"20", "probe", "scenario 20", f20},
    Fault{"21", "probe", "scenario 21", f21},
    Fault{"22", "probe", "scenario 22", f22},
    Fault{"23", "probe", "scenario 23", f23},
    Fault{"24", "probe", "scenario 24", f24},
    Fault{"25", "probe", "scenario 25", f25},
    Fault{"26", "probe", "scenario 26", f26},
    Fault{"27", "probe", "scenario 27", f27},
    Fault{"28", "probe", "scenario 28", f28},
    Fault{"29", "probe", "scenario 29", f29},
    Fault{"30", "probe", "scenario 30", f30},
    Fault{"31", "probe", "scenario 31", f31},
    Fault{"32", "probe", "scenario 32", f32},
    Fault{"33", "probe", "scenario 33", f33},
    Fault{"34", "probe", "scenario 34", f34},
    Fault{"35", "probe", "scenario 35", f35},
    Fault{"36", "probe", "scenario 36", f36},
    Fault{"37", "probe", "scenario 37", f37},
    Fault{"38", "probe", "scenario 38", f38},
    Fault{"39", "probe", "scenario 39", f39},
    Fault{"40", "probe", "scenario 40", f40},
    Fault{"41", "probe", "scenario 41", f41},
    Fault{"42", "probe", "scenario 42", f42},
    Fault{"43", "probe", "scenario 43", f43},
    Fault{"44", "probe", "scenario 44", f44},
    Fault{"45", "probe", "scenario 45", f45},
    Fault{"46", "probe", "scenario 46", f46},
    Fault{"47", "probe", "scenario 47", f47},
    Fault{"48", "probe", "scenario 48", f48},
    Fault{"49", "probe", "scenario 49", f49},
    Fault{"50", "probe", "scenario 50", f50},
    Fault{"51", "probe", "scenario 51", f51},
};
}

int main(int argc, char** argv) {
    if (argc == 1 || std::string_view(argv[1]) == "--list") {
        for (const auto& fault : faults)
            std::cout << fault.id << "  " << fault.category << "  " << fault.description << '\n';
        return 0;
    }
    if (argc == 3 && std::string_view(argv[1]) == "--run") {
        for (const auto& fault : faults) {
            if (std::string_view(argv[2]) == fault.id) {
                fault.run();
                std::cout << "scenario=" << fault.id << " observed=" << observed << '\n';
                return 0;
            }
        }
    }
    std::cerr << "usage: ecs_faults --list | --run ID\n";
    return 2;
}
