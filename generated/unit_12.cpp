#include "faultlab/world.hpp"
#include <algorithm>
#include <cmath>

namespace faultlab::generated::domain_144 {

struct Position_144 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_144 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_144 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_144 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_144 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_144 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_144 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_144 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_144 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_144 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_144 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_144 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_144 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_144 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_144 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_144 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_144>(e, Position_144{1.240f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_144>(e, Velocity_144{1.310f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_144>(e, Acceleration_144{1.380f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_144>(e, Health_144{1.450f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_144>(e, Energy_144{1.520f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_144>(e, Heat_144{1.590f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_144>(e, Cargo_144{1.660f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_144>(e, Demand_144{1.730f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_144>(e, Supply_144{1.800f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_144>(e, Signal_144{1.870f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_144>(e, Timer_144{1.940f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_144>(e, Status_144{2.010f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_144>(e, Target_144{2.080f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_144>(e, Credit_144{2.150f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_144>(e, Command_144{2.220f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_144>(e, Metrics_144{2.290f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_144, Velocity_144, Acceleration_144, Metrics_144>([dt](Entity, Position_144& p, Velocity_144& v, Acceleration_144& a, Metrics_144& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_144, Energy_144, Heat_144, Status_144>([dt](Entity, Health_144& a, Energy_144& b, Heat_144& h, Status_144& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_144, Demand_144, Supply_144, Metrics_144>([dt](Entity, Cargo_144& c, Demand_144& d, Supply_144& s, Metrics_144& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_144, Timer_144, Status_144, Command_144>([dt](Entity, Signal_144& g, Timer_144& t, Status_144& s, Command_144& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_144, Position_144, Velocity_144, Command_144>([dt](Entity, Target_144& t, Position_144& p, Velocity_144& v, Command_144& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_144, Cargo_144, Energy_144, Demand_144>([dt](Entity, Credit_144& a, Cargo_144& c, Energy_144& b, Demand_144& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_144, Acceleration_144, Heat_144, Status_144>([dt](Entity, Command_144& c, Acceleration_144& a, Heat_144& h, Status_144& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_144, Health_144, Position_144, Signal_144>([dt](Entity, Metrics_144& m, Health_144& a, Position_144& p, Signal_144& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_144

namespace faultlab::generated::domain_145 {

struct Position_145 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_145 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_145 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_145 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_145 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_145 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_145 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_145 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_145 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_145 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_145 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_145 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_145 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_145 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_145 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_145 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_145>(e, Position_145{1.270f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_145>(e, Velocity_145{1.340f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_145>(e, Acceleration_145{1.410f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_145>(e, Health_145{1.480f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_145>(e, Energy_145{1.550f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_145>(e, Heat_145{1.620f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_145>(e, Cargo_145{1.690f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_145>(e, Demand_145{1.760f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_145>(e, Supply_145{1.830f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_145>(e, Signal_145{1.900f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_145>(e, Timer_145{1.970f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_145>(e, Status_145{2.040f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_145>(e, Target_145{2.110f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_145>(e, Credit_145{2.180f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_145>(e, Command_145{2.250f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_145>(e, Metrics_145{2.320f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_145, Velocity_145, Acceleration_145, Metrics_145>([dt](Entity, Position_145& p, Velocity_145& v, Acceleration_145& a, Metrics_145& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_145, Energy_145, Heat_145, Status_145>([dt](Entity, Health_145& a, Energy_145& b, Heat_145& h, Status_145& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_145, Demand_145, Supply_145, Metrics_145>([dt](Entity, Cargo_145& c, Demand_145& d, Supply_145& s, Metrics_145& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_145, Timer_145, Status_145, Command_145>([dt](Entity, Signal_145& g, Timer_145& t, Status_145& s, Command_145& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_145, Position_145, Velocity_145, Command_145>([dt](Entity, Target_145& t, Position_145& p, Velocity_145& v, Command_145& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_145, Cargo_145, Energy_145, Demand_145>([dt](Entity, Credit_145& a, Cargo_145& c, Energy_145& b, Demand_145& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_145, Acceleration_145, Heat_145, Status_145>([dt](Entity, Command_145& c, Acceleration_145& a, Heat_145& h, Status_145& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_145, Health_145, Position_145, Signal_145>([dt](Entity, Metrics_145& m, Health_145& a, Position_145& p, Signal_145& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_145

namespace faultlab::generated::domain_146 {

struct Position_146 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_146 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_146 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_146 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_146 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_146 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_146 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_146 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_146 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_146 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_146 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_146 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_146 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_146 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_146 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_146 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_146>(e, Position_146{1.300f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_146>(e, Velocity_146{1.370f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_146>(e, Acceleration_146{1.440f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_146>(e, Health_146{1.510f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_146>(e, Energy_146{1.580f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_146>(e, Heat_146{1.650f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_146>(e, Cargo_146{1.720f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_146>(e, Demand_146{1.790f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_146>(e, Supply_146{1.860f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_146>(e, Signal_146{1.930f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_146>(e, Timer_146{2.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_146>(e, Status_146{2.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_146>(e, Target_146{2.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_146>(e, Credit_146{2.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_146>(e, Command_146{2.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_146>(e, Metrics_146{2.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_146, Velocity_146, Acceleration_146, Metrics_146>([dt](Entity, Position_146& p, Velocity_146& v, Acceleration_146& a, Metrics_146& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_146, Energy_146, Heat_146, Status_146>([dt](Entity, Health_146& a, Energy_146& b, Heat_146& h, Status_146& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_146, Demand_146, Supply_146, Metrics_146>([dt](Entity, Cargo_146& c, Demand_146& d, Supply_146& s, Metrics_146& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_146, Timer_146, Status_146, Command_146>([dt](Entity, Signal_146& g, Timer_146& t, Status_146& s, Command_146& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_146, Position_146, Velocity_146, Command_146>([dt](Entity, Target_146& t, Position_146& p, Velocity_146& v, Command_146& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_146, Cargo_146, Energy_146, Demand_146>([dt](Entity, Credit_146& a, Cargo_146& c, Energy_146& b, Demand_146& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_146, Acceleration_146, Heat_146, Status_146>([dt](Entity, Command_146& c, Acceleration_146& a, Heat_146& h, Status_146& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_146, Health_146, Position_146, Signal_146>([dt](Entity, Metrics_146& m, Health_146& a, Position_146& p, Signal_146& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_146

namespace faultlab::generated::domain_147 {

struct Position_147 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_147 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_147 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_147 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_147 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_147 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_147 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_147 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_147 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_147 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_147 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_147 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_147 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_147 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_147 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_147 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_147>(e, Position_147{1.330f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_147>(e, Velocity_147{1.400f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_147>(e, Acceleration_147{1.470f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_147>(e, Health_147{1.540f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_147>(e, Energy_147{1.610f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_147>(e, Heat_147{1.680f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_147>(e, Cargo_147{1.750f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_147>(e, Demand_147{1.820f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_147>(e, Supply_147{1.890f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_147>(e, Signal_147{1.960f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_147>(e, Timer_147{2.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_147>(e, Status_147{2.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_147>(e, Target_147{2.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_147>(e, Credit_147{2.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_147>(e, Command_147{2.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_147>(e, Metrics_147{2.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_147, Velocity_147, Acceleration_147, Metrics_147>([dt](Entity, Position_147& p, Velocity_147& v, Acceleration_147& a, Metrics_147& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_147, Energy_147, Heat_147, Status_147>([dt](Entity, Health_147& a, Energy_147& b, Heat_147& h, Status_147& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_147, Demand_147, Supply_147, Metrics_147>([dt](Entity, Cargo_147& c, Demand_147& d, Supply_147& s, Metrics_147& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_147, Timer_147, Status_147, Command_147>([dt](Entity, Signal_147& g, Timer_147& t, Status_147& s, Command_147& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_147, Position_147, Velocity_147, Command_147>([dt](Entity, Target_147& t, Position_147& p, Velocity_147& v, Command_147& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_147, Cargo_147, Energy_147, Demand_147>([dt](Entity, Credit_147& a, Cargo_147& c, Energy_147& b, Demand_147& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_147, Acceleration_147, Heat_147, Status_147>([dt](Entity, Command_147& c, Acceleration_147& a, Heat_147& h, Status_147& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_147, Health_147, Position_147, Signal_147>([dt](Entity, Metrics_147& m, Health_147& a, Position_147& p, Signal_147& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_147

namespace faultlab::generated::domain_148 {

struct Position_148 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_148 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_148 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_148 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_148 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_148 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_148 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_148 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_148 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_148 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_148 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_148 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_148 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_148 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_148 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_148 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_148>(e, Position_148{1.360f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_148>(e, Velocity_148{1.430f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_148>(e, Acceleration_148{1.500f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_148>(e, Health_148{1.570f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_148>(e, Energy_148{1.640f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_148>(e, Heat_148{1.710f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_148>(e, Cargo_148{1.780f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_148>(e, Demand_148{1.850f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_148>(e, Supply_148{1.920f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_148>(e, Signal_148{1.990f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_148>(e, Timer_148{2.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_148>(e, Status_148{2.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_148>(e, Target_148{2.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_148>(e, Credit_148{2.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_148>(e, Command_148{2.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_148>(e, Metrics_148{2.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_148, Velocity_148, Acceleration_148, Metrics_148>([dt](Entity, Position_148& p, Velocity_148& v, Acceleration_148& a, Metrics_148& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_148, Energy_148, Heat_148, Status_148>([dt](Entity, Health_148& a, Energy_148& b, Heat_148& h, Status_148& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_148, Demand_148, Supply_148, Metrics_148>([dt](Entity, Cargo_148& c, Demand_148& d, Supply_148& s, Metrics_148& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_148, Timer_148, Status_148, Command_148>([dt](Entity, Signal_148& g, Timer_148& t, Status_148& s, Command_148& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_148, Position_148, Velocity_148, Command_148>([dt](Entity, Target_148& t, Position_148& p, Velocity_148& v, Command_148& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_148, Cargo_148, Energy_148, Demand_148>([dt](Entity, Credit_148& a, Cargo_148& c, Energy_148& b, Demand_148& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_148, Acceleration_148, Heat_148, Status_148>([dt](Entity, Command_148& c, Acceleration_148& a, Heat_148& h, Status_148& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_148, Health_148, Position_148, Signal_148>([dt](Entity, Metrics_148& m, Health_148& a, Position_148& p, Signal_148& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_148

namespace faultlab::generated::domain_149 {

struct Position_149 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_149 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_149 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_149 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_149 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_149 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_149 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_149 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_149 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_149 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_149 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_149 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_149 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_149 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_149 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_149 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_149>(e, Position_149{1.390f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_149>(e, Velocity_149{1.460f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_149>(e, Acceleration_149{1.530f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_149>(e, Health_149{1.600f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_149>(e, Energy_149{1.670f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_149>(e, Heat_149{1.740f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_149>(e, Cargo_149{1.810f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_149>(e, Demand_149{1.880f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_149>(e, Supply_149{1.950f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_149>(e, Signal_149{2.020f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_149>(e, Timer_149{2.090f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_149>(e, Status_149{2.160f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_149>(e, Target_149{2.230f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_149>(e, Credit_149{2.300f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_149>(e, Command_149{2.370f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_149>(e, Metrics_149{2.440f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_149, Velocity_149, Acceleration_149, Metrics_149>([dt](Entity, Position_149& p, Velocity_149& v, Acceleration_149& a, Metrics_149& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_149, Energy_149, Heat_149, Status_149>([dt](Entity, Health_149& a, Energy_149& b, Heat_149& h, Status_149& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_149, Demand_149, Supply_149, Metrics_149>([dt](Entity, Cargo_149& c, Demand_149& d, Supply_149& s, Metrics_149& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_149, Timer_149, Status_149, Command_149>([dt](Entity, Signal_149& g, Timer_149& t, Status_149& s, Command_149& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_149, Position_149, Velocity_149, Command_149>([dt](Entity, Target_149& t, Position_149& p, Velocity_149& v, Command_149& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_149, Cargo_149, Energy_149, Demand_149>([dt](Entity, Credit_149& a, Cargo_149& c, Energy_149& b, Demand_149& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_149, Acceleration_149, Heat_149, Status_149>([dt](Entity, Command_149& c, Acceleration_149& a, Heat_149& h, Status_149& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_149, Health_149, Position_149, Signal_149>([dt](Entity, Metrics_149& m, Health_149& a, Position_149& p, Signal_149& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_149

namespace faultlab::generated::domain_150 {

struct Position_150 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_150 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_150 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_150 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_150 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_150 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_150 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_150 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_150 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_150 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_150 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_150 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_150 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_150 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_150 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_150 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_150>(e, Position_150{1.420f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_150>(e, Velocity_150{1.490f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_150>(e, Acceleration_150{1.560f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_150>(e, Health_150{1.630f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_150>(e, Energy_150{1.700f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_150>(e, Heat_150{1.770f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_150>(e, Cargo_150{1.840f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_150>(e, Demand_150{1.910f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_150>(e, Supply_150{1.980f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_150>(e, Signal_150{2.050f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_150>(e, Timer_150{2.120f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_150>(e, Status_150{2.190f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_150>(e, Target_150{2.260f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_150>(e, Credit_150{2.330f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_150>(e, Command_150{2.400f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_150>(e, Metrics_150{2.470f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_150, Velocity_150, Acceleration_150, Metrics_150>([dt](Entity, Position_150& p, Velocity_150& v, Acceleration_150& a, Metrics_150& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_150, Energy_150, Heat_150, Status_150>([dt](Entity, Health_150& a, Energy_150& b, Heat_150& h, Status_150& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_150, Demand_150, Supply_150, Metrics_150>([dt](Entity, Cargo_150& c, Demand_150& d, Supply_150& s, Metrics_150& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_150, Timer_150, Status_150, Command_150>([dt](Entity, Signal_150& g, Timer_150& t, Status_150& s, Command_150& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_150, Position_150, Velocity_150, Command_150>([dt](Entity, Target_150& t, Position_150& p, Velocity_150& v, Command_150& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_150, Cargo_150, Energy_150, Demand_150>([dt](Entity, Credit_150& a, Cargo_150& c, Energy_150& b, Demand_150& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_150, Acceleration_150, Heat_150, Status_150>([dt](Entity, Command_150& c, Acceleration_150& a, Heat_150& h, Status_150& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_150, Health_150, Position_150, Signal_150>([dt](Entity, Metrics_150& m, Health_150& a, Position_150& p, Signal_150& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_150

namespace faultlab::generated::domain_151 {

struct Position_151 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_151 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_151 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_151 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_151 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_151 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_151 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_151 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_151 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_151 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_151 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_151 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_151 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_151 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_151 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_151 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_151>(e, Position_151{1.450f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_151>(e, Velocity_151{1.520f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_151>(e, Acceleration_151{1.590f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_151>(e, Health_151{1.660f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_151>(e, Energy_151{1.730f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_151>(e, Heat_151{1.800f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_151>(e, Cargo_151{1.870f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_151>(e, Demand_151{1.940f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_151>(e, Supply_151{2.010f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_151>(e, Signal_151{2.080f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_151>(e, Timer_151{2.150f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_151>(e, Status_151{2.220f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_151>(e, Target_151{2.290f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_151>(e, Credit_151{2.360f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_151>(e, Command_151{2.430f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_151>(e, Metrics_151{2.500f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_151, Velocity_151, Acceleration_151, Metrics_151>([dt](Entity, Position_151& p, Velocity_151& v, Acceleration_151& a, Metrics_151& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_151, Energy_151, Heat_151, Status_151>([dt](Entity, Health_151& a, Energy_151& b, Heat_151& h, Status_151& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_151, Demand_151, Supply_151, Metrics_151>([dt](Entity, Cargo_151& c, Demand_151& d, Supply_151& s, Metrics_151& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_151, Timer_151, Status_151, Command_151>([dt](Entity, Signal_151& g, Timer_151& t, Status_151& s, Command_151& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_151, Position_151, Velocity_151, Command_151>([dt](Entity, Target_151& t, Position_151& p, Velocity_151& v, Command_151& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_151, Cargo_151, Energy_151, Demand_151>([dt](Entity, Credit_151& a, Cargo_151& c, Energy_151& b, Demand_151& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_151, Acceleration_151, Heat_151, Status_151>([dt](Entity, Command_151& c, Acceleration_151& a, Heat_151& h, Status_151& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_151, Health_151, Position_151, Signal_151>([dt](Entity, Metrics_151& m, Health_151& a, Position_151& p, Signal_151& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_151

namespace faultlab::generated::domain_152 {

struct Position_152 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_152 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_152 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_152 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_152 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_152 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_152 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_152 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_152 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_152 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_152 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_152 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_152 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_152 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_152 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_152 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_152>(e, Position_152{1.480f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_152>(e, Velocity_152{1.550f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_152>(e, Acceleration_152{1.620f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_152>(e, Health_152{1.690f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_152>(e, Energy_152{1.760f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_152>(e, Heat_152{1.830f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_152>(e, Cargo_152{1.900f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_152>(e, Demand_152{1.970f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_152>(e, Supply_152{2.040f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_152>(e, Signal_152{2.110f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_152>(e, Timer_152{2.180f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_152>(e, Status_152{2.250f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_152>(e, Target_152{2.320f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_152>(e, Credit_152{2.390f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_152>(e, Command_152{2.460f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_152>(e, Metrics_152{2.530f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_152, Velocity_152, Acceleration_152, Metrics_152>([dt](Entity, Position_152& p, Velocity_152& v, Acceleration_152& a, Metrics_152& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_152, Energy_152, Heat_152, Status_152>([dt](Entity, Health_152& a, Energy_152& b, Heat_152& h, Status_152& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_152, Demand_152, Supply_152, Metrics_152>([dt](Entity, Cargo_152& c, Demand_152& d, Supply_152& s, Metrics_152& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_152, Timer_152, Status_152, Command_152>([dt](Entity, Signal_152& g, Timer_152& t, Status_152& s, Command_152& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_152, Position_152, Velocity_152, Command_152>([dt](Entity, Target_152& t, Position_152& p, Velocity_152& v, Command_152& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_152, Cargo_152, Energy_152, Demand_152>([dt](Entity, Credit_152& a, Cargo_152& c, Energy_152& b, Demand_152& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_152, Acceleration_152, Heat_152, Status_152>([dt](Entity, Command_152& c, Acceleration_152& a, Heat_152& h, Status_152& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_152, Health_152, Position_152, Signal_152>([dt](Entity, Metrics_152& m, Health_152& a, Position_152& p, Signal_152& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_152

namespace faultlab::generated::domain_153 {

struct Position_153 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_153 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_153 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_153 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_153 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_153 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_153 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_153 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_153 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_153 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_153 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_153 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_153 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_153 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_153 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_153 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_153>(e, Position_153{1.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_153>(e, Velocity_153{1.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_153>(e, Acceleration_153{1.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_153>(e, Health_153{1.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_153>(e, Energy_153{1.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_153>(e, Heat_153{1.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_153>(e, Cargo_153{1.420f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_153>(e, Demand_153{1.490f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_153>(e, Supply_153{1.560f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_153>(e, Signal_153{1.630f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_153>(e, Timer_153{1.700f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_153>(e, Status_153{1.770f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_153>(e, Target_153{1.840f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_153>(e, Credit_153{1.910f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_153>(e, Command_153{1.980f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_153>(e, Metrics_153{2.050f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_153, Velocity_153, Acceleration_153, Metrics_153>([dt](Entity, Position_153& p, Velocity_153& v, Acceleration_153& a, Metrics_153& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_153, Energy_153, Heat_153, Status_153>([dt](Entity, Health_153& a, Energy_153& b, Heat_153& h, Status_153& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_153, Demand_153, Supply_153, Metrics_153>([dt](Entity, Cargo_153& c, Demand_153& d, Supply_153& s, Metrics_153& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_153, Timer_153, Status_153, Command_153>([dt](Entity, Signal_153& g, Timer_153& t, Status_153& s, Command_153& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_153, Position_153, Velocity_153, Command_153>([dt](Entity, Target_153& t, Position_153& p, Velocity_153& v, Command_153& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_153, Cargo_153, Energy_153, Demand_153>([dt](Entity, Credit_153& a, Cargo_153& c, Energy_153& b, Demand_153& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_153, Acceleration_153, Heat_153, Status_153>([dt](Entity, Command_153& c, Acceleration_153& a, Heat_153& h, Status_153& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_153, Health_153, Position_153, Signal_153>([dt](Entity, Metrics_153& m, Health_153& a, Position_153& p, Signal_153& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_153

namespace faultlab::generated::domain_154 {

struct Position_154 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_154 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_154 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_154 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_154 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_154 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_154 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_154 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_154 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_154 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_154 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_154 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_154 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_154 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_154 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_154 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_154>(e, Position_154{1.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_154>(e, Velocity_154{1.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_154>(e, Acceleration_154{1.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_154>(e, Health_154{1.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_154>(e, Energy_154{1.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_154>(e, Heat_154{1.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_154>(e, Cargo_154{1.450f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_154>(e, Demand_154{1.520f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_154>(e, Supply_154{1.590f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_154>(e, Signal_154{1.660f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_154>(e, Timer_154{1.730f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_154>(e, Status_154{1.800f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_154>(e, Target_154{1.870f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_154>(e, Credit_154{1.940f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_154>(e, Command_154{2.010f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_154>(e, Metrics_154{2.080f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_154, Velocity_154, Acceleration_154, Metrics_154>([dt](Entity, Position_154& p, Velocity_154& v, Acceleration_154& a, Metrics_154& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_154, Energy_154, Heat_154, Status_154>([dt](Entity, Health_154& a, Energy_154& b, Heat_154& h, Status_154& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_154, Demand_154, Supply_154, Metrics_154>([dt](Entity, Cargo_154& c, Demand_154& d, Supply_154& s, Metrics_154& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_154, Timer_154, Status_154, Command_154>([dt](Entity, Signal_154& g, Timer_154& t, Status_154& s, Command_154& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_154, Position_154, Velocity_154, Command_154>([dt](Entity, Target_154& t, Position_154& p, Velocity_154& v, Command_154& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_154, Cargo_154, Energy_154, Demand_154>([dt](Entity, Credit_154& a, Cargo_154& c, Energy_154& b, Demand_154& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_154, Acceleration_154, Heat_154, Status_154>([dt](Entity, Command_154& c, Acceleration_154& a, Heat_154& h, Status_154& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_154, Health_154, Position_154, Signal_154>([dt](Entity, Metrics_154& m, Health_154& a, Position_154& p, Signal_154& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_154

namespace faultlab::generated::domain_155 {

struct Position_155 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_155 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_155 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_155 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_155 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_155 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_155 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_155 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_155 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_155 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_155 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_155 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_155 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_155 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_155 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_155 {
    float travel = 0.0f;
    float work = 0.0f;
    float failures = 0.0f;
    float score = 0.0f;
    float samples = 0.0f;
    float checksum = 0.0f;
};

void seed(World& world, unsigned count) {
    for (unsigned i = 0; i < count; ++i) {
        const Entity e = world.create();
        world.emplace<Position_155>(e, Position_155{1.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_155>(e, Velocity_155{1.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_155>(e, Acceleration_155{1.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_155>(e, Health_155{1.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_155>(e, Energy_155{1.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_155>(e, Heat_155{1.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_155>(e, Cargo_155{1.480f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_155>(e, Demand_155{1.550f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_155>(e, Supply_155{1.620f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_155>(e, Signal_155{1.690f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_155>(e, Timer_155{1.760f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_155>(e, Status_155{1.830f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_155>(e, Target_155{1.900f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_155>(e, Credit_155{1.970f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_155>(e, Command_155{2.040f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_155>(e, Metrics_155{2.110f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_155, Velocity_155, Acceleration_155, Metrics_155>([dt](Entity, Position_155& p, Velocity_155& v, Acceleration_155& a, Metrics_155& m) {
        p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;
        v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;
        const float damping = 1.0f / (1.0f + v.drag * dt);
        v.x *= damping; v.y *= damping; v.z *= damping;
        p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;
        m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);
        m.checksum += p.z * 0.001f;
    });
}

void survival(World& world, float dt) {
    world.each<Health_155, Energy_155, Heat_155, Status_155>([dt](Entity, Health_155& a, Energy_155& b, Heat_155& h, Status_155& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_155, Demand_155, Supply_155, Metrics_155>([dt](Entity, Cargo_155& c, Demand_155& d, Supply_155& s, Metrics_155& m) {
        const float room = std::max(0.0f, c.capacity - c.amount);
        const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);
        const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});
        c.amount += transfer; c.incoming += transfer;
        s.available -= transfer; d.fulfilled += transfer;
        d.backlog = std::max(0.0f, d.requested - d.fulfilled);
        m.work += transfer; m.samples += 1.0f;
    });
}

void signaling(World& world, float dt) {
    world.each<Signal_155, Timer_155, Status_155, Command_155>([dt](Entity, Signal_155& g, Timer_155& t, Status_155& s, Command_155& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_155, Position_155, Velocity_155, Command_155>([dt](Entity, Target_155& t, Position_155& p, Velocity_155& v, Command_155& c) {
        const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;
        t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);
        const float scale = 1.0f / std::max(1.0f, t.distance);
        c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);
        c.steer = std::clamp(dy * scale, -1.0f, 1.0f);
        c.lift = std::clamp(dz * scale, -1.0f, 1.0f);
        v.impulse += (c.throttle + c.steer + c.lift) * dt;
    });
}

void economy(World& world, float dt) {
    world.each<Credit_155, Cargo_155, Energy_155, Demand_155>([dt](Entity, Credit_155& a, Cargo_155& c, Energy_155& b, Demand_155& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_155, Acceleration_155, Heat_155, Status_155>([dt](Entity, Command_155& c, Acceleration_155& a, Heat_155& h, Status_155& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_155, Health_155, Position_155, Signal_155>([dt](Entity, Metrics_155& m, Health_155& a, Position_155& p, Signal_155& g) {
        m.score = a.current + g.value - m.failures;
        m.checksum += (p.x + p.y + p.z + g.value) * dt;
        m.samples += 1.0f;
        if (a.current <= 0.0f) m.failures += dt;
        g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);
        m.work += std::max(0.0f, g.strength - g.noise) * dt;
    });
}

void install(Pipeline& pipeline) {
    pipeline.add(&motion);
    pipeline.add(&survival);
    pipeline.add(&logistics);
    pipeline.add(&signaling);
    pipeline.add(&guidance);
    pipeline.add(&economy);
    pipeline.add(&control);
    pipeline.add(&observe);
}
} // namespace faultlab::generated::domain_155

