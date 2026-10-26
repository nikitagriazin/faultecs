#include "faultlab/world.hpp"
#include <algorithm>
#include <cmath>

namespace faultlab::generated::domain_132 {

struct Position_132 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_132 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_132 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_132 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_132 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_132 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_132 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_132 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_132 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_132 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_132 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_132 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_132 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_132 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_132 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_132 {
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
        world.emplace<Position_132>(e, Position_132{1.390f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_132>(e, Velocity_132{1.460f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_132>(e, Acceleration_132{1.530f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_132>(e, Health_132{1.600f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_132>(e, Energy_132{1.670f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_132>(e, Heat_132{1.740f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_132>(e, Cargo_132{1.810f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_132>(e, Demand_132{1.880f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_132>(e, Supply_132{1.950f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_132>(e, Signal_132{2.020f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_132>(e, Timer_132{2.090f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_132>(e, Status_132{2.160f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_132>(e, Target_132{2.230f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_132>(e, Credit_132{2.300f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_132>(e, Command_132{2.370f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_132>(e, Metrics_132{2.440f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_132, Velocity_132, Acceleration_132, Metrics_132>([dt](Entity, Position_132& p, Velocity_132& v, Acceleration_132& a, Metrics_132& m) {
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
    world.each<Health_132, Energy_132, Heat_132, Status_132>([dt](Entity, Health_132& a, Energy_132& b, Heat_132& h, Status_132& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_132, Demand_132, Supply_132, Metrics_132>([dt](Entity, Cargo_132& c, Demand_132& d, Supply_132& s, Metrics_132& m) {
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
    world.each<Signal_132, Timer_132, Status_132, Command_132>([dt](Entity, Signal_132& g, Timer_132& t, Status_132& s, Command_132& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_132, Position_132, Velocity_132, Command_132>([dt](Entity, Target_132& t, Position_132& p, Velocity_132& v, Command_132& c) {
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
    world.each<Credit_132, Cargo_132, Energy_132, Demand_132>([dt](Entity, Credit_132& a, Cargo_132& c, Energy_132& b, Demand_132& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_132, Acceleration_132, Heat_132, Status_132>([dt](Entity, Command_132& c, Acceleration_132& a, Heat_132& h, Status_132& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_132, Health_132, Position_132, Signal_132>([dt](Entity, Metrics_132& m, Health_132& a, Position_132& p, Signal_132& g) {
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
} // namespace faultlab::generated::domain_132

namespace faultlab::generated::domain_133 {

struct Position_133 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_133 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_133 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_133 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_133 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_133 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_133 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_133 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_133 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_133 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_133 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_133 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_133 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_133 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_133 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_133 {
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
        world.emplace<Position_133>(e, Position_133{1.420f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_133>(e, Velocity_133{1.490f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_133>(e, Acceleration_133{1.560f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_133>(e, Health_133{1.630f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_133>(e, Energy_133{1.700f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_133>(e, Heat_133{1.770f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_133>(e, Cargo_133{1.840f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_133>(e, Demand_133{1.910f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_133>(e, Supply_133{1.980f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_133>(e, Signal_133{2.050f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_133>(e, Timer_133{2.120f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_133>(e, Status_133{2.190f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_133>(e, Target_133{2.260f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_133>(e, Credit_133{2.330f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_133>(e, Command_133{2.400f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_133>(e, Metrics_133{2.470f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_133, Velocity_133, Acceleration_133, Metrics_133>([dt](Entity, Position_133& p, Velocity_133& v, Acceleration_133& a, Metrics_133& m) {
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
    world.each<Health_133, Energy_133, Heat_133, Status_133>([dt](Entity, Health_133& a, Energy_133& b, Heat_133& h, Status_133& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_133, Demand_133, Supply_133, Metrics_133>([dt](Entity, Cargo_133& c, Demand_133& d, Supply_133& s, Metrics_133& m) {
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
    world.each<Signal_133, Timer_133, Status_133, Command_133>([dt](Entity, Signal_133& g, Timer_133& t, Status_133& s, Command_133& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_133, Position_133, Velocity_133, Command_133>([dt](Entity, Target_133& t, Position_133& p, Velocity_133& v, Command_133& c) {
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
    world.each<Credit_133, Cargo_133, Energy_133, Demand_133>([dt](Entity, Credit_133& a, Cargo_133& c, Energy_133& b, Demand_133& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_133, Acceleration_133, Heat_133, Status_133>([dt](Entity, Command_133& c, Acceleration_133& a, Heat_133& h, Status_133& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_133, Health_133, Position_133, Signal_133>([dt](Entity, Metrics_133& m, Health_133& a, Position_133& p, Signal_133& g) {
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
} // namespace faultlab::generated::domain_133

namespace faultlab::generated::domain_134 {

struct Position_134 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_134 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_134 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_134 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_134 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_134 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_134 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_134 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_134 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_134 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_134 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_134 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_134 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_134 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_134 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_134 {
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
        world.emplace<Position_134>(e, Position_134{1.450f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_134>(e, Velocity_134{1.520f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_134>(e, Acceleration_134{1.590f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_134>(e, Health_134{1.660f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_134>(e, Energy_134{1.730f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_134>(e, Heat_134{1.800f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_134>(e, Cargo_134{1.870f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_134>(e, Demand_134{1.940f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_134>(e, Supply_134{2.010f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_134>(e, Signal_134{2.080f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_134>(e, Timer_134{2.150f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_134>(e, Status_134{2.220f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_134>(e, Target_134{2.290f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_134>(e, Credit_134{2.360f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_134>(e, Command_134{2.430f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_134>(e, Metrics_134{2.500f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_134, Velocity_134, Acceleration_134, Metrics_134>([dt](Entity, Position_134& p, Velocity_134& v, Acceleration_134& a, Metrics_134& m) {
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
    world.each<Health_134, Energy_134, Heat_134, Status_134>([dt](Entity, Health_134& a, Energy_134& b, Heat_134& h, Status_134& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_134, Demand_134, Supply_134, Metrics_134>([dt](Entity, Cargo_134& c, Demand_134& d, Supply_134& s, Metrics_134& m) {
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
    world.each<Signal_134, Timer_134, Status_134, Command_134>([dt](Entity, Signal_134& g, Timer_134& t, Status_134& s, Command_134& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_134, Position_134, Velocity_134, Command_134>([dt](Entity, Target_134& t, Position_134& p, Velocity_134& v, Command_134& c) {
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
    world.each<Credit_134, Cargo_134, Energy_134, Demand_134>([dt](Entity, Credit_134& a, Cargo_134& c, Energy_134& b, Demand_134& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_134, Acceleration_134, Heat_134, Status_134>([dt](Entity, Command_134& c, Acceleration_134& a, Heat_134& h, Status_134& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_134, Health_134, Position_134, Signal_134>([dt](Entity, Metrics_134& m, Health_134& a, Position_134& p, Signal_134& g) {
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
} // namespace faultlab::generated::domain_134

namespace faultlab::generated::domain_135 {

struct Position_135 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_135 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_135 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_135 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_135 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_135 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_135 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_135 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_135 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_135 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_135 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_135 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_135 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_135 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_135 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_135 {
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
        world.emplace<Position_135>(e, Position_135{1.480f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_135>(e, Velocity_135{1.550f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_135>(e, Acceleration_135{1.620f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_135>(e, Health_135{1.690f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_135>(e, Energy_135{1.760f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_135>(e, Heat_135{1.830f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_135>(e, Cargo_135{1.900f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_135>(e, Demand_135{1.970f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_135>(e, Supply_135{2.040f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_135>(e, Signal_135{2.110f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_135>(e, Timer_135{2.180f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_135>(e, Status_135{2.250f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_135>(e, Target_135{2.320f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_135>(e, Credit_135{2.390f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_135>(e, Command_135{2.460f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_135>(e, Metrics_135{2.530f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_135, Velocity_135, Acceleration_135, Metrics_135>([dt](Entity, Position_135& p, Velocity_135& v, Acceleration_135& a, Metrics_135& m) {
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
    world.each<Health_135, Energy_135, Heat_135, Status_135>([dt](Entity, Health_135& a, Energy_135& b, Heat_135& h, Status_135& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_135, Demand_135, Supply_135, Metrics_135>([dt](Entity, Cargo_135& c, Demand_135& d, Supply_135& s, Metrics_135& m) {
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
    world.each<Signal_135, Timer_135, Status_135, Command_135>([dt](Entity, Signal_135& g, Timer_135& t, Status_135& s, Command_135& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_135, Position_135, Velocity_135, Command_135>([dt](Entity, Target_135& t, Position_135& p, Velocity_135& v, Command_135& c) {
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
    world.each<Credit_135, Cargo_135, Energy_135, Demand_135>([dt](Entity, Credit_135& a, Cargo_135& c, Energy_135& b, Demand_135& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_135, Acceleration_135, Heat_135, Status_135>([dt](Entity, Command_135& c, Acceleration_135& a, Heat_135& h, Status_135& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_135, Health_135, Position_135, Signal_135>([dt](Entity, Metrics_135& m, Health_135& a, Position_135& p, Signal_135& g) {
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
} // namespace faultlab::generated::domain_135

namespace faultlab::generated::domain_136 {

struct Position_136 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_136 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_136 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_136 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_136 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_136 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_136 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_136 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_136 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_136 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_136 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_136 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_136 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_136 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_136 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_136 {
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
        world.emplace<Position_136>(e, Position_136{1.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_136>(e, Velocity_136{1.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_136>(e, Acceleration_136{1.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_136>(e, Health_136{1.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_136>(e, Energy_136{1.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_136>(e, Heat_136{1.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_136>(e, Cargo_136{1.420f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_136>(e, Demand_136{1.490f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_136>(e, Supply_136{1.560f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_136>(e, Signal_136{1.630f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_136>(e, Timer_136{1.700f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_136>(e, Status_136{1.770f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_136>(e, Target_136{1.840f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_136>(e, Credit_136{1.910f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_136>(e, Command_136{1.980f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_136>(e, Metrics_136{2.050f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_136, Velocity_136, Acceleration_136, Metrics_136>([dt](Entity, Position_136& p, Velocity_136& v, Acceleration_136& a, Metrics_136& m) {
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
    world.each<Health_136, Energy_136, Heat_136, Status_136>([dt](Entity, Health_136& a, Energy_136& b, Heat_136& h, Status_136& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_136, Demand_136, Supply_136, Metrics_136>([dt](Entity, Cargo_136& c, Demand_136& d, Supply_136& s, Metrics_136& m) {
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
    world.each<Signal_136, Timer_136, Status_136, Command_136>([dt](Entity, Signal_136& g, Timer_136& t, Status_136& s, Command_136& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_136, Position_136, Velocity_136, Command_136>([dt](Entity, Target_136& t, Position_136& p, Velocity_136& v, Command_136& c) {
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
    world.each<Credit_136, Cargo_136, Energy_136, Demand_136>([dt](Entity, Credit_136& a, Cargo_136& c, Energy_136& b, Demand_136& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_136, Acceleration_136, Heat_136, Status_136>([dt](Entity, Command_136& c, Acceleration_136& a, Heat_136& h, Status_136& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_136, Health_136, Position_136, Signal_136>([dt](Entity, Metrics_136& m, Health_136& a, Position_136& p, Signal_136& g) {
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
} // namespace faultlab::generated::domain_136

namespace faultlab::generated::domain_137 {

struct Position_137 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_137 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_137 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_137 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_137 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_137 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_137 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_137 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_137 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_137 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_137 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_137 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_137 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_137 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_137 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_137 {
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
        world.emplace<Position_137>(e, Position_137{1.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_137>(e, Velocity_137{1.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_137>(e, Acceleration_137{1.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_137>(e, Health_137{1.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_137>(e, Energy_137{1.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_137>(e, Heat_137{1.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_137>(e, Cargo_137{1.450f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_137>(e, Demand_137{1.520f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_137>(e, Supply_137{1.590f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_137>(e, Signal_137{1.660f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_137>(e, Timer_137{1.730f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_137>(e, Status_137{1.800f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_137>(e, Target_137{1.870f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_137>(e, Credit_137{1.940f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_137>(e, Command_137{2.010f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_137>(e, Metrics_137{2.080f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_137, Velocity_137, Acceleration_137, Metrics_137>([dt](Entity, Position_137& p, Velocity_137& v, Acceleration_137& a, Metrics_137& m) {
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
    world.each<Health_137, Energy_137, Heat_137, Status_137>([dt](Entity, Health_137& a, Energy_137& b, Heat_137& h, Status_137& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_137, Demand_137, Supply_137, Metrics_137>([dt](Entity, Cargo_137& c, Demand_137& d, Supply_137& s, Metrics_137& m) {
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
    world.each<Signal_137, Timer_137, Status_137, Command_137>([dt](Entity, Signal_137& g, Timer_137& t, Status_137& s, Command_137& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_137, Position_137, Velocity_137, Command_137>([dt](Entity, Target_137& t, Position_137& p, Velocity_137& v, Command_137& c) {
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
    world.each<Credit_137, Cargo_137, Energy_137, Demand_137>([dt](Entity, Credit_137& a, Cargo_137& c, Energy_137& b, Demand_137& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_137, Acceleration_137, Heat_137, Status_137>([dt](Entity, Command_137& c, Acceleration_137& a, Heat_137& h, Status_137& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_137, Health_137, Position_137, Signal_137>([dt](Entity, Metrics_137& m, Health_137& a, Position_137& p, Signal_137& g) {
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
} // namespace faultlab::generated::domain_137

namespace faultlab::generated::domain_138 {

struct Position_138 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_138 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_138 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_138 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_138 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_138 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_138 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_138 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_138 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_138 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_138 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_138 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_138 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_138 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_138 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_138 {
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
        world.emplace<Position_138>(e, Position_138{1.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_138>(e, Velocity_138{1.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_138>(e, Acceleration_138{1.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_138>(e, Health_138{1.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_138>(e, Energy_138{1.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_138>(e, Heat_138{1.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_138>(e, Cargo_138{1.480f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_138>(e, Demand_138{1.550f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_138>(e, Supply_138{1.620f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_138>(e, Signal_138{1.690f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_138>(e, Timer_138{1.760f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_138>(e, Status_138{1.830f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_138>(e, Target_138{1.900f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_138>(e, Credit_138{1.970f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_138>(e, Command_138{2.040f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_138>(e, Metrics_138{2.110f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_138, Velocity_138, Acceleration_138, Metrics_138>([dt](Entity, Position_138& p, Velocity_138& v, Acceleration_138& a, Metrics_138& m) {
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
    world.each<Health_138, Energy_138, Heat_138, Status_138>([dt](Entity, Health_138& a, Energy_138& b, Heat_138& h, Status_138& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_138, Demand_138, Supply_138, Metrics_138>([dt](Entity, Cargo_138& c, Demand_138& d, Supply_138& s, Metrics_138& m) {
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
    world.each<Signal_138, Timer_138, Status_138, Command_138>([dt](Entity, Signal_138& g, Timer_138& t, Status_138& s, Command_138& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_138, Position_138, Velocity_138, Command_138>([dt](Entity, Target_138& t, Position_138& p, Velocity_138& v, Command_138& c) {
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
    world.each<Credit_138, Cargo_138, Energy_138, Demand_138>([dt](Entity, Credit_138& a, Cargo_138& c, Energy_138& b, Demand_138& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_138, Acceleration_138, Heat_138, Status_138>([dt](Entity, Command_138& c, Acceleration_138& a, Heat_138& h, Status_138& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_138, Health_138, Position_138, Signal_138>([dt](Entity, Metrics_138& m, Health_138& a, Position_138& p, Signal_138& g) {
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
} // namespace faultlab::generated::domain_138

namespace faultlab::generated::domain_139 {

struct Position_139 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_139 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_139 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_139 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_139 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_139 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_139 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_139 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_139 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_139 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_139 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_139 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_139 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_139 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_139 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_139 {
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
        world.emplace<Position_139>(e, Position_139{1.090f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_139>(e, Velocity_139{1.160f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_139>(e, Acceleration_139{1.230f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_139>(e, Health_139{1.300f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_139>(e, Energy_139{1.370f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_139>(e, Heat_139{1.440f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_139>(e, Cargo_139{1.510f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_139>(e, Demand_139{1.580f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_139>(e, Supply_139{1.650f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_139>(e, Signal_139{1.720f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_139>(e, Timer_139{1.790f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_139>(e, Status_139{1.860f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_139>(e, Target_139{1.930f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_139>(e, Credit_139{2.000f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_139>(e, Command_139{2.070f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_139>(e, Metrics_139{2.140f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_139, Velocity_139, Acceleration_139, Metrics_139>([dt](Entity, Position_139& p, Velocity_139& v, Acceleration_139& a, Metrics_139& m) {
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
    world.each<Health_139, Energy_139, Heat_139, Status_139>([dt](Entity, Health_139& a, Energy_139& b, Heat_139& h, Status_139& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_139, Demand_139, Supply_139, Metrics_139>([dt](Entity, Cargo_139& c, Demand_139& d, Supply_139& s, Metrics_139& m) {
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
    world.each<Signal_139, Timer_139, Status_139, Command_139>([dt](Entity, Signal_139& g, Timer_139& t, Status_139& s, Command_139& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_139, Position_139, Velocity_139, Command_139>([dt](Entity, Target_139& t, Position_139& p, Velocity_139& v, Command_139& c) {
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
    world.each<Credit_139, Cargo_139, Energy_139, Demand_139>([dt](Entity, Credit_139& a, Cargo_139& c, Energy_139& b, Demand_139& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_139, Acceleration_139, Heat_139, Status_139>([dt](Entity, Command_139& c, Acceleration_139& a, Heat_139& h, Status_139& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_139, Health_139, Position_139, Signal_139>([dt](Entity, Metrics_139& m, Health_139& a, Position_139& p, Signal_139& g) {
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
} // namespace faultlab::generated::domain_139

namespace faultlab::generated::domain_140 {

struct Position_140 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_140 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_140 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_140 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_140 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_140 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_140 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_140 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_140 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_140 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_140 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_140 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_140 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_140 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_140 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_140 {
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
        world.emplace<Position_140>(e, Position_140{1.120f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_140>(e, Velocity_140{1.190f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_140>(e, Acceleration_140{1.260f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_140>(e, Health_140{1.330f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_140>(e, Energy_140{1.400f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_140>(e, Heat_140{1.470f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_140>(e, Cargo_140{1.540f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_140>(e, Demand_140{1.610f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_140>(e, Supply_140{1.680f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_140>(e, Signal_140{1.750f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_140>(e, Timer_140{1.820f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_140>(e, Status_140{1.890f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_140>(e, Target_140{1.960f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_140>(e, Credit_140{2.030f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_140>(e, Command_140{2.100f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_140>(e, Metrics_140{2.170f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_140, Velocity_140, Acceleration_140, Metrics_140>([dt](Entity, Position_140& p, Velocity_140& v, Acceleration_140& a, Metrics_140& m) {
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
    world.each<Health_140, Energy_140, Heat_140, Status_140>([dt](Entity, Health_140& a, Energy_140& b, Heat_140& h, Status_140& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_140, Demand_140, Supply_140, Metrics_140>([dt](Entity, Cargo_140& c, Demand_140& d, Supply_140& s, Metrics_140& m) {
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
    world.each<Signal_140, Timer_140, Status_140, Command_140>([dt](Entity, Signal_140& g, Timer_140& t, Status_140& s, Command_140& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_140, Position_140, Velocity_140, Command_140>([dt](Entity, Target_140& t, Position_140& p, Velocity_140& v, Command_140& c) {
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
    world.each<Credit_140, Cargo_140, Energy_140, Demand_140>([dt](Entity, Credit_140& a, Cargo_140& c, Energy_140& b, Demand_140& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_140, Acceleration_140, Heat_140, Status_140>([dt](Entity, Command_140& c, Acceleration_140& a, Heat_140& h, Status_140& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_140, Health_140, Position_140, Signal_140>([dt](Entity, Metrics_140& m, Health_140& a, Position_140& p, Signal_140& g) {
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
} // namespace faultlab::generated::domain_140

namespace faultlab::generated::domain_141 {

struct Position_141 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_141 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_141 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_141 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_141 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_141 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_141 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_141 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_141 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_141 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_141 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_141 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_141 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_141 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_141 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_141 {
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
        world.emplace<Position_141>(e, Position_141{1.150f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_141>(e, Velocity_141{1.220f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_141>(e, Acceleration_141{1.290f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_141>(e, Health_141{1.360f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_141>(e, Energy_141{1.430f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_141>(e, Heat_141{1.500f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_141>(e, Cargo_141{1.570f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_141>(e, Demand_141{1.640f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_141>(e, Supply_141{1.710f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_141>(e, Signal_141{1.780f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_141>(e, Timer_141{1.850f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_141>(e, Status_141{1.920f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_141>(e, Target_141{1.990f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_141>(e, Credit_141{2.060f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_141>(e, Command_141{2.130f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_141>(e, Metrics_141{2.200f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_141, Velocity_141, Acceleration_141, Metrics_141>([dt](Entity, Position_141& p, Velocity_141& v, Acceleration_141& a, Metrics_141& m) {
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
    world.each<Health_141, Energy_141, Heat_141, Status_141>([dt](Entity, Health_141& a, Energy_141& b, Heat_141& h, Status_141& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_141, Demand_141, Supply_141, Metrics_141>([dt](Entity, Cargo_141& c, Demand_141& d, Supply_141& s, Metrics_141& m) {
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
    world.each<Signal_141, Timer_141, Status_141, Command_141>([dt](Entity, Signal_141& g, Timer_141& t, Status_141& s, Command_141& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_141, Position_141, Velocity_141, Command_141>([dt](Entity, Target_141& t, Position_141& p, Velocity_141& v, Command_141& c) {
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
    world.each<Credit_141, Cargo_141, Energy_141, Demand_141>([dt](Entity, Credit_141& a, Cargo_141& c, Energy_141& b, Demand_141& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_141, Acceleration_141, Heat_141, Status_141>([dt](Entity, Command_141& c, Acceleration_141& a, Heat_141& h, Status_141& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_141, Health_141, Position_141, Signal_141>([dt](Entity, Metrics_141& m, Health_141& a, Position_141& p, Signal_141& g) {
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
} // namespace faultlab::generated::domain_141

namespace faultlab::generated::domain_142 {

struct Position_142 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_142 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_142 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_142 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_142 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_142 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_142 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_142 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_142 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_142 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_142 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_142 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_142 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_142 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_142 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_142 {
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
        world.emplace<Position_142>(e, Position_142{1.180f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_142>(e, Velocity_142{1.250f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_142>(e, Acceleration_142{1.320f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_142>(e, Health_142{1.390f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_142>(e, Energy_142{1.460f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_142>(e, Heat_142{1.530f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_142>(e, Cargo_142{1.600f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_142>(e, Demand_142{1.670f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_142>(e, Supply_142{1.740f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_142>(e, Signal_142{1.810f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_142>(e, Timer_142{1.880f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_142>(e, Status_142{1.950f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_142>(e, Target_142{2.020f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_142>(e, Credit_142{2.090f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_142>(e, Command_142{2.160f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_142>(e, Metrics_142{2.230f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_142, Velocity_142, Acceleration_142, Metrics_142>([dt](Entity, Position_142& p, Velocity_142& v, Acceleration_142& a, Metrics_142& m) {
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
    world.each<Health_142, Energy_142, Heat_142, Status_142>([dt](Entity, Health_142& a, Energy_142& b, Heat_142& h, Status_142& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_142, Demand_142, Supply_142, Metrics_142>([dt](Entity, Cargo_142& c, Demand_142& d, Supply_142& s, Metrics_142& m) {
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
    world.each<Signal_142, Timer_142, Status_142, Command_142>([dt](Entity, Signal_142& g, Timer_142& t, Status_142& s, Command_142& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_142, Position_142, Velocity_142, Command_142>([dt](Entity, Target_142& t, Position_142& p, Velocity_142& v, Command_142& c) {
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
    world.each<Credit_142, Cargo_142, Energy_142, Demand_142>([dt](Entity, Credit_142& a, Cargo_142& c, Energy_142& b, Demand_142& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_142, Acceleration_142, Heat_142, Status_142>([dt](Entity, Command_142& c, Acceleration_142& a, Heat_142& h, Status_142& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_142, Health_142, Position_142, Signal_142>([dt](Entity, Metrics_142& m, Health_142& a, Position_142& p, Signal_142& g) {
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
} // namespace faultlab::generated::domain_142

namespace faultlab::generated::domain_143 {

struct Position_143 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_143 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_143 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_143 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_143 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_143 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_143 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_143 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_143 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_143 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_143 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_143 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_143 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_143 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_143 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_143 {
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
        world.emplace<Position_143>(e, Position_143{1.210f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_143>(e, Velocity_143{1.280f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_143>(e, Acceleration_143{1.350f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_143>(e, Health_143{1.420f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_143>(e, Energy_143{1.490f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_143>(e, Heat_143{1.560f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_143>(e, Cargo_143{1.630f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_143>(e, Demand_143{1.700f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_143>(e, Supply_143{1.770f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_143>(e, Signal_143{1.840f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_143>(e, Timer_143{1.910f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_143>(e, Status_143{1.980f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_143>(e, Target_143{2.050f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_143>(e, Credit_143{2.120f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_143>(e, Command_143{2.190f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_143>(e, Metrics_143{2.260f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_143, Velocity_143, Acceleration_143, Metrics_143>([dt](Entity, Position_143& p, Velocity_143& v, Acceleration_143& a, Metrics_143& m) {
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
    world.each<Health_143, Energy_143, Heat_143, Status_143>([dt](Entity, Health_143& a, Energy_143& b, Heat_143& h, Status_143& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_143, Demand_143, Supply_143, Metrics_143>([dt](Entity, Cargo_143& c, Demand_143& d, Supply_143& s, Metrics_143& m) {
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
    world.each<Signal_143, Timer_143, Status_143, Command_143>([dt](Entity, Signal_143& g, Timer_143& t, Status_143& s, Command_143& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_143, Position_143, Velocity_143, Command_143>([dt](Entity, Target_143& t, Position_143& p, Velocity_143& v, Command_143& c) {
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
    world.each<Credit_143, Cargo_143, Energy_143, Demand_143>([dt](Entity, Credit_143& a, Cargo_143& c, Energy_143& b, Demand_143& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_143, Acceleration_143, Heat_143, Status_143>([dt](Entity, Command_143& c, Acceleration_143& a, Heat_143& h, Status_143& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_143, Health_143, Position_143, Signal_143>([dt](Entity, Metrics_143& m, Health_143& a, Position_143& p, Signal_143& g) {
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
} // namespace faultlab::generated::domain_143

