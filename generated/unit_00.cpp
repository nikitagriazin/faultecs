#include "faultlab/world.hpp"
#include <algorithm>
#include <cmath>

namespace faultlab::generated::domain_000 {

struct Position_000 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_000 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_000 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_000 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_000 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_000 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_000 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_000 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_000 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_000 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_000 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_000 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_000 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_000 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_000 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_000 {
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
        world.emplace<Position_000>(e, Position_000{1.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_000>(e, Velocity_000{1.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_000>(e, Acceleration_000{1.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_000>(e, Health_000{1.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_000>(e, Energy_000{1.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_000>(e, Heat_000{1.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_000>(e, Cargo_000{1.420f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_000>(e, Demand_000{1.490f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_000>(e, Supply_000{1.560f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_000>(e, Signal_000{1.630f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_000>(e, Timer_000{1.700f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_000>(e, Status_000{1.770f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_000>(e, Target_000{1.840f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_000>(e, Credit_000{1.910f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_000>(e, Command_000{1.980f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_000>(e, Metrics_000{2.050f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_000, Velocity_000, Acceleration_000, Metrics_000>([dt](Entity, Position_000& p, Velocity_000& v, Acceleration_000& a, Metrics_000& m) {
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
    world.each<Health_000, Energy_000, Heat_000, Status_000>([dt](Entity, Health_000& a, Energy_000& b, Heat_000& h, Status_000& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_000, Demand_000, Supply_000, Metrics_000>([dt](Entity, Cargo_000& c, Demand_000& d, Supply_000& s, Metrics_000& m) {
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
    world.each<Signal_000, Timer_000, Status_000, Command_000>([dt](Entity, Signal_000& g, Timer_000& t, Status_000& s, Command_000& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_000, Position_000, Velocity_000, Command_000>([dt](Entity, Target_000& t, Position_000& p, Velocity_000& v, Command_000& c) {
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
    world.each<Credit_000, Cargo_000, Energy_000, Demand_000>([dt](Entity, Credit_000& a, Cargo_000& c, Energy_000& b, Demand_000& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_000, Acceleration_000, Heat_000, Status_000>([dt](Entity, Command_000& c, Acceleration_000& a, Heat_000& h, Status_000& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_000, Health_000, Position_000, Signal_000>([dt](Entity, Metrics_000& m, Health_000& a, Position_000& p, Signal_000& g) {
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
} // namespace faultlab::generated::domain_000

namespace faultlab::generated::domain_001 {

struct Position_001 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_001 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_001 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_001 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_001 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_001 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_001 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_001 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_001 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_001 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_001 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_001 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_001 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_001 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_001 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_001 {
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
        world.emplace<Position_001>(e, Position_001{1.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_001>(e, Velocity_001{1.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_001>(e, Acceleration_001{1.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_001>(e, Health_001{1.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_001>(e, Energy_001{1.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_001>(e, Heat_001{1.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_001>(e, Cargo_001{1.450f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_001>(e, Demand_001{1.520f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_001>(e, Supply_001{1.590f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_001>(e, Signal_001{1.660f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_001>(e, Timer_001{1.730f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_001>(e, Status_001{1.800f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_001>(e, Target_001{1.870f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_001>(e, Credit_001{1.940f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_001>(e, Command_001{2.010f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_001>(e, Metrics_001{2.080f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_001, Velocity_001, Acceleration_001, Metrics_001>([dt](Entity, Position_001& p, Velocity_001& v, Acceleration_001& a, Metrics_001& m) {
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
    world.each<Health_001, Energy_001, Heat_001, Status_001>([dt](Entity, Health_001& a, Energy_001& b, Heat_001& h, Status_001& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_001, Demand_001, Supply_001, Metrics_001>([dt](Entity, Cargo_001& c, Demand_001& d, Supply_001& s, Metrics_001& m) {
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
    world.each<Signal_001, Timer_001, Status_001, Command_001>([dt](Entity, Signal_001& g, Timer_001& t, Status_001& s, Command_001& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_001, Position_001, Velocity_001, Command_001>([dt](Entity, Target_001& t, Position_001& p, Velocity_001& v, Command_001& c) {
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
    world.each<Credit_001, Cargo_001, Energy_001, Demand_001>([dt](Entity, Credit_001& a, Cargo_001& c, Energy_001& b, Demand_001& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_001, Acceleration_001, Heat_001, Status_001>([dt](Entity, Command_001& c, Acceleration_001& a, Heat_001& h, Status_001& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_001, Health_001, Position_001, Signal_001>([dt](Entity, Metrics_001& m, Health_001& a, Position_001& p, Signal_001& g) {
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
} // namespace faultlab::generated::domain_001

namespace faultlab::generated::domain_002 {

struct Position_002 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_002 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_002 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_002 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_002 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_002 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_002 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_002 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_002 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_002 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_002 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_002 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_002 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_002 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_002 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_002 {
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
        world.emplace<Position_002>(e, Position_002{1.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_002>(e, Velocity_002{1.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_002>(e, Acceleration_002{1.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_002>(e, Health_002{1.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_002>(e, Energy_002{1.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_002>(e, Heat_002{1.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_002>(e, Cargo_002{1.480f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_002>(e, Demand_002{1.550f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_002>(e, Supply_002{1.620f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_002>(e, Signal_002{1.690f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_002>(e, Timer_002{1.760f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_002>(e, Status_002{1.830f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_002>(e, Target_002{1.900f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_002>(e, Credit_002{1.970f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_002>(e, Command_002{2.040f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_002>(e, Metrics_002{2.110f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_002, Velocity_002, Acceleration_002, Metrics_002>([dt](Entity, Position_002& p, Velocity_002& v, Acceleration_002& a, Metrics_002& m) {
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
    world.each<Health_002, Energy_002, Heat_002, Status_002>([dt](Entity, Health_002& a, Energy_002& b, Heat_002& h, Status_002& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_002, Demand_002, Supply_002, Metrics_002>([dt](Entity, Cargo_002& c, Demand_002& d, Supply_002& s, Metrics_002& m) {
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
    world.each<Signal_002, Timer_002, Status_002, Command_002>([dt](Entity, Signal_002& g, Timer_002& t, Status_002& s, Command_002& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_002, Position_002, Velocity_002, Command_002>([dt](Entity, Target_002& t, Position_002& p, Velocity_002& v, Command_002& c) {
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
    world.each<Credit_002, Cargo_002, Energy_002, Demand_002>([dt](Entity, Credit_002& a, Cargo_002& c, Energy_002& b, Demand_002& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_002, Acceleration_002, Heat_002, Status_002>([dt](Entity, Command_002& c, Acceleration_002& a, Heat_002& h, Status_002& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_002, Health_002, Position_002, Signal_002>([dt](Entity, Metrics_002& m, Health_002& a, Position_002& p, Signal_002& g) {
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
} // namespace faultlab::generated::domain_002

namespace faultlab::generated::domain_003 {

struct Position_003 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_003 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_003 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_003 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_003 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_003 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_003 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_003 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_003 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_003 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_003 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_003 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_003 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_003 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_003 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_003 {
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
        world.emplace<Position_003>(e, Position_003{1.090f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_003>(e, Velocity_003{1.160f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_003>(e, Acceleration_003{1.230f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_003>(e, Health_003{1.300f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_003>(e, Energy_003{1.370f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_003>(e, Heat_003{1.440f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_003>(e, Cargo_003{1.510f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_003>(e, Demand_003{1.580f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_003>(e, Supply_003{1.650f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_003>(e, Signal_003{1.720f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_003>(e, Timer_003{1.790f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_003>(e, Status_003{1.860f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_003>(e, Target_003{1.930f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_003>(e, Credit_003{2.000f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_003>(e, Command_003{2.070f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_003>(e, Metrics_003{2.140f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_003, Velocity_003, Acceleration_003, Metrics_003>([dt](Entity, Position_003& p, Velocity_003& v, Acceleration_003& a, Metrics_003& m) {
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
    world.each<Health_003, Energy_003, Heat_003, Status_003>([dt](Entity, Health_003& a, Energy_003& b, Heat_003& h, Status_003& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_003, Demand_003, Supply_003, Metrics_003>([dt](Entity, Cargo_003& c, Demand_003& d, Supply_003& s, Metrics_003& m) {
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
    world.each<Signal_003, Timer_003, Status_003, Command_003>([dt](Entity, Signal_003& g, Timer_003& t, Status_003& s, Command_003& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_003, Position_003, Velocity_003, Command_003>([dt](Entity, Target_003& t, Position_003& p, Velocity_003& v, Command_003& c) {
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
    world.each<Credit_003, Cargo_003, Energy_003, Demand_003>([dt](Entity, Credit_003& a, Cargo_003& c, Energy_003& b, Demand_003& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_003, Acceleration_003, Heat_003, Status_003>([dt](Entity, Command_003& c, Acceleration_003& a, Heat_003& h, Status_003& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_003, Health_003, Position_003, Signal_003>([dt](Entity, Metrics_003& m, Health_003& a, Position_003& p, Signal_003& g) {
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
} // namespace faultlab::generated::domain_003

namespace faultlab::generated::domain_004 {

struct Position_004 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_004 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_004 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_004 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_004 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_004 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_004 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_004 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_004 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_004 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_004 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_004 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_004 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_004 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_004 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_004 {
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
        world.emplace<Position_004>(e, Position_004{1.120f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_004>(e, Velocity_004{1.190f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_004>(e, Acceleration_004{1.260f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_004>(e, Health_004{1.330f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_004>(e, Energy_004{1.400f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_004>(e, Heat_004{1.470f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_004>(e, Cargo_004{1.540f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_004>(e, Demand_004{1.610f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_004>(e, Supply_004{1.680f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_004>(e, Signal_004{1.750f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_004>(e, Timer_004{1.820f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_004>(e, Status_004{1.890f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_004>(e, Target_004{1.960f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_004>(e, Credit_004{2.030f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_004>(e, Command_004{2.100f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_004>(e, Metrics_004{2.170f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_004, Velocity_004, Acceleration_004, Metrics_004>([dt](Entity, Position_004& p, Velocity_004& v, Acceleration_004& a, Metrics_004& m) {
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
    world.each<Health_004, Energy_004, Heat_004, Status_004>([dt](Entity, Health_004& a, Energy_004& b, Heat_004& h, Status_004& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_004, Demand_004, Supply_004, Metrics_004>([dt](Entity, Cargo_004& c, Demand_004& d, Supply_004& s, Metrics_004& m) {
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
    world.each<Signal_004, Timer_004, Status_004, Command_004>([dt](Entity, Signal_004& g, Timer_004& t, Status_004& s, Command_004& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_004, Position_004, Velocity_004, Command_004>([dt](Entity, Target_004& t, Position_004& p, Velocity_004& v, Command_004& c) {
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
    world.each<Credit_004, Cargo_004, Energy_004, Demand_004>([dt](Entity, Credit_004& a, Cargo_004& c, Energy_004& b, Demand_004& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_004, Acceleration_004, Heat_004, Status_004>([dt](Entity, Command_004& c, Acceleration_004& a, Heat_004& h, Status_004& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_004, Health_004, Position_004, Signal_004>([dt](Entity, Metrics_004& m, Health_004& a, Position_004& p, Signal_004& g) {
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
} // namespace faultlab::generated::domain_004

namespace faultlab::generated::domain_005 {

struct Position_005 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_005 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_005 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_005 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_005 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_005 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_005 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_005 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_005 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_005 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_005 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_005 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_005 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_005 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_005 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_005 {
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
        world.emplace<Position_005>(e, Position_005{1.150f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_005>(e, Velocity_005{1.220f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_005>(e, Acceleration_005{1.290f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_005>(e, Health_005{1.360f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_005>(e, Energy_005{1.430f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_005>(e, Heat_005{1.500f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_005>(e, Cargo_005{1.570f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_005>(e, Demand_005{1.640f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_005>(e, Supply_005{1.710f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_005>(e, Signal_005{1.780f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_005>(e, Timer_005{1.850f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_005>(e, Status_005{1.920f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_005>(e, Target_005{1.990f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_005>(e, Credit_005{2.060f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_005>(e, Command_005{2.130f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_005>(e, Metrics_005{2.200f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_005, Velocity_005, Acceleration_005, Metrics_005>([dt](Entity, Position_005& p, Velocity_005& v, Acceleration_005& a, Metrics_005& m) {
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
    world.each<Health_005, Energy_005, Heat_005, Status_005>([dt](Entity, Health_005& a, Energy_005& b, Heat_005& h, Status_005& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_005, Demand_005, Supply_005, Metrics_005>([dt](Entity, Cargo_005& c, Demand_005& d, Supply_005& s, Metrics_005& m) {
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
    world.each<Signal_005, Timer_005, Status_005, Command_005>([dt](Entity, Signal_005& g, Timer_005& t, Status_005& s, Command_005& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_005, Position_005, Velocity_005, Command_005>([dt](Entity, Target_005& t, Position_005& p, Velocity_005& v, Command_005& c) {
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
    world.each<Credit_005, Cargo_005, Energy_005, Demand_005>([dt](Entity, Credit_005& a, Cargo_005& c, Energy_005& b, Demand_005& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_005, Acceleration_005, Heat_005, Status_005>([dt](Entity, Command_005& c, Acceleration_005& a, Heat_005& h, Status_005& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_005, Health_005, Position_005, Signal_005>([dt](Entity, Metrics_005& m, Health_005& a, Position_005& p, Signal_005& g) {
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
} // namespace faultlab::generated::domain_005

namespace faultlab::generated::domain_006 {

struct Position_006 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_006 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_006 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_006 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_006 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_006 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_006 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_006 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_006 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_006 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_006 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_006 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_006 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_006 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_006 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_006 {
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
        world.emplace<Position_006>(e, Position_006{1.180f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_006>(e, Velocity_006{1.250f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_006>(e, Acceleration_006{1.320f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_006>(e, Health_006{1.390f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_006>(e, Energy_006{1.460f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_006>(e, Heat_006{1.530f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_006>(e, Cargo_006{1.600f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_006>(e, Demand_006{1.670f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_006>(e, Supply_006{1.740f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_006>(e, Signal_006{1.810f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_006>(e, Timer_006{1.880f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_006>(e, Status_006{1.950f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_006>(e, Target_006{2.020f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_006>(e, Credit_006{2.090f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_006>(e, Command_006{2.160f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_006>(e, Metrics_006{2.230f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_006, Velocity_006, Acceleration_006, Metrics_006>([dt](Entity, Position_006& p, Velocity_006& v, Acceleration_006& a, Metrics_006& m) {
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
    world.each<Health_006, Energy_006, Heat_006, Status_006>([dt](Entity, Health_006& a, Energy_006& b, Heat_006& h, Status_006& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_006, Demand_006, Supply_006, Metrics_006>([dt](Entity, Cargo_006& c, Demand_006& d, Supply_006& s, Metrics_006& m) {
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
    world.each<Signal_006, Timer_006, Status_006, Command_006>([dt](Entity, Signal_006& g, Timer_006& t, Status_006& s, Command_006& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_006, Position_006, Velocity_006, Command_006>([dt](Entity, Target_006& t, Position_006& p, Velocity_006& v, Command_006& c) {
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
    world.each<Credit_006, Cargo_006, Energy_006, Demand_006>([dt](Entity, Credit_006& a, Cargo_006& c, Energy_006& b, Demand_006& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_006, Acceleration_006, Heat_006, Status_006>([dt](Entity, Command_006& c, Acceleration_006& a, Heat_006& h, Status_006& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_006, Health_006, Position_006, Signal_006>([dt](Entity, Metrics_006& m, Health_006& a, Position_006& p, Signal_006& g) {
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
} // namespace faultlab::generated::domain_006

namespace faultlab::generated::domain_007 {

struct Position_007 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_007 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_007 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_007 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_007 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_007 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_007 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_007 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_007 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_007 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_007 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_007 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_007 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_007 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_007 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_007 {
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
        world.emplace<Position_007>(e, Position_007{1.210f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_007>(e, Velocity_007{1.280f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_007>(e, Acceleration_007{1.350f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_007>(e, Health_007{1.420f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_007>(e, Energy_007{1.490f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_007>(e, Heat_007{1.560f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_007>(e, Cargo_007{1.630f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_007>(e, Demand_007{1.700f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_007>(e, Supply_007{1.770f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_007>(e, Signal_007{1.840f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_007>(e, Timer_007{1.910f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_007>(e, Status_007{1.980f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_007>(e, Target_007{2.050f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_007>(e, Credit_007{2.120f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_007>(e, Command_007{2.190f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_007>(e, Metrics_007{2.260f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_007, Velocity_007, Acceleration_007, Metrics_007>([dt](Entity, Position_007& p, Velocity_007& v, Acceleration_007& a, Metrics_007& m) {
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
    world.each<Health_007, Energy_007, Heat_007, Status_007>([dt](Entity, Health_007& a, Energy_007& b, Heat_007& h, Status_007& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_007, Demand_007, Supply_007, Metrics_007>([dt](Entity, Cargo_007& c, Demand_007& d, Supply_007& s, Metrics_007& m) {
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
    world.each<Signal_007, Timer_007, Status_007, Command_007>([dt](Entity, Signal_007& g, Timer_007& t, Status_007& s, Command_007& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_007, Position_007, Velocity_007, Command_007>([dt](Entity, Target_007& t, Position_007& p, Velocity_007& v, Command_007& c) {
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
    world.each<Credit_007, Cargo_007, Energy_007, Demand_007>([dt](Entity, Credit_007& a, Cargo_007& c, Energy_007& b, Demand_007& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_007, Acceleration_007, Heat_007, Status_007>([dt](Entity, Command_007& c, Acceleration_007& a, Heat_007& h, Status_007& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_007, Health_007, Position_007, Signal_007>([dt](Entity, Metrics_007& m, Health_007& a, Position_007& p, Signal_007& g) {
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
} // namespace faultlab::generated::domain_007

namespace faultlab::generated::domain_008 {

struct Position_008 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_008 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_008 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_008 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_008 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_008 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_008 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_008 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_008 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_008 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_008 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_008 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_008 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_008 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_008 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_008 {
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
        world.emplace<Position_008>(e, Position_008{1.240f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_008>(e, Velocity_008{1.310f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_008>(e, Acceleration_008{1.380f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_008>(e, Health_008{1.450f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_008>(e, Energy_008{1.520f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_008>(e, Heat_008{1.590f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_008>(e, Cargo_008{1.660f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_008>(e, Demand_008{1.730f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_008>(e, Supply_008{1.800f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_008>(e, Signal_008{1.870f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_008>(e, Timer_008{1.940f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_008>(e, Status_008{2.010f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_008>(e, Target_008{2.080f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_008>(e, Credit_008{2.150f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_008>(e, Command_008{2.220f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_008>(e, Metrics_008{2.290f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_008, Velocity_008, Acceleration_008, Metrics_008>([dt](Entity, Position_008& p, Velocity_008& v, Acceleration_008& a, Metrics_008& m) {
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
    world.each<Health_008, Energy_008, Heat_008, Status_008>([dt](Entity, Health_008& a, Energy_008& b, Heat_008& h, Status_008& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_008, Demand_008, Supply_008, Metrics_008>([dt](Entity, Cargo_008& c, Demand_008& d, Supply_008& s, Metrics_008& m) {
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
    world.each<Signal_008, Timer_008, Status_008, Command_008>([dt](Entity, Signal_008& g, Timer_008& t, Status_008& s, Command_008& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_008, Position_008, Velocity_008, Command_008>([dt](Entity, Target_008& t, Position_008& p, Velocity_008& v, Command_008& c) {
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
    world.each<Credit_008, Cargo_008, Energy_008, Demand_008>([dt](Entity, Credit_008& a, Cargo_008& c, Energy_008& b, Demand_008& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_008, Acceleration_008, Heat_008, Status_008>([dt](Entity, Command_008& c, Acceleration_008& a, Heat_008& h, Status_008& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_008, Health_008, Position_008, Signal_008>([dt](Entity, Metrics_008& m, Health_008& a, Position_008& p, Signal_008& g) {
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
} // namespace faultlab::generated::domain_008

namespace faultlab::generated::domain_009 {

struct Position_009 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_009 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_009 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_009 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_009 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_009 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_009 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_009 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_009 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_009 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_009 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_009 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_009 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_009 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_009 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_009 {
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
        world.emplace<Position_009>(e, Position_009{1.270f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_009>(e, Velocity_009{1.340f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_009>(e, Acceleration_009{1.410f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_009>(e, Health_009{1.480f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_009>(e, Energy_009{1.550f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_009>(e, Heat_009{1.620f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_009>(e, Cargo_009{1.690f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_009>(e, Demand_009{1.760f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_009>(e, Supply_009{1.830f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_009>(e, Signal_009{1.900f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_009>(e, Timer_009{1.970f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_009>(e, Status_009{2.040f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_009>(e, Target_009{2.110f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_009>(e, Credit_009{2.180f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_009>(e, Command_009{2.250f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_009>(e, Metrics_009{2.320f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_009, Velocity_009, Acceleration_009, Metrics_009>([dt](Entity, Position_009& p, Velocity_009& v, Acceleration_009& a, Metrics_009& m) {
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
    world.each<Health_009, Energy_009, Heat_009, Status_009>([dt](Entity, Health_009& a, Energy_009& b, Heat_009& h, Status_009& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_009, Demand_009, Supply_009, Metrics_009>([dt](Entity, Cargo_009& c, Demand_009& d, Supply_009& s, Metrics_009& m) {
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
    world.each<Signal_009, Timer_009, Status_009, Command_009>([dt](Entity, Signal_009& g, Timer_009& t, Status_009& s, Command_009& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_009, Position_009, Velocity_009, Command_009>([dt](Entity, Target_009& t, Position_009& p, Velocity_009& v, Command_009& c) {
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
    world.each<Credit_009, Cargo_009, Energy_009, Demand_009>([dt](Entity, Credit_009& a, Cargo_009& c, Energy_009& b, Demand_009& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_009, Acceleration_009, Heat_009, Status_009>([dt](Entity, Command_009& c, Acceleration_009& a, Heat_009& h, Status_009& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_009, Health_009, Position_009, Signal_009>([dt](Entity, Metrics_009& m, Health_009& a, Position_009& p, Signal_009& g) {
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
} // namespace faultlab::generated::domain_009

namespace faultlab::generated::domain_010 {

struct Position_010 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_010 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_010 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_010 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_010 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_010 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_010 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_010 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_010 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_010 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_010 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_010 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_010 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_010 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_010 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_010 {
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
        world.emplace<Position_010>(e, Position_010{1.300f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_010>(e, Velocity_010{1.370f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_010>(e, Acceleration_010{1.440f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_010>(e, Health_010{1.510f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_010>(e, Energy_010{1.580f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_010>(e, Heat_010{1.650f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_010>(e, Cargo_010{1.720f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_010>(e, Demand_010{1.790f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_010>(e, Supply_010{1.860f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_010>(e, Signal_010{1.930f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_010>(e, Timer_010{2.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_010>(e, Status_010{2.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_010>(e, Target_010{2.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_010>(e, Credit_010{2.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_010>(e, Command_010{2.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_010>(e, Metrics_010{2.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_010, Velocity_010, Acceleration_010, Metrics_010>([dt](Entity, Position_010& p, Velocity_010& v, Acceleration_010& a, Metrics_010& m) {
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
    world.each<Health_010, Energy_010, Heat_010, Status_010>([dt](Entity, Health_010& a, Energy_010& b, Heat_010& h, Status_010& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_010, Demand_010, Supply_010, Metrics_010>([dt](Entity, Cargo_010& c, Demand_010& d, Supply_010& s, Metrics_010& m) {
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
    world.each<Signal_010, Timer_010, Status_010, Command_010>([dt](Entity, Signal_010& g, Timer_010& t, Status_010& s, Command_010& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_010, Position_010, Velocity_010, Command_010>([dt](Entity, Target_010& t, Position_010& p, Velocity_010& v, Command_010& c) {
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
    world.each<Credit_010, Cargo_010, Energy_010, Demand_010>([dt](Entity, Credit_010& a, Cargo_010& c, Energy_010& b, Demand_010& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_010, Acceleration_010, Heat_010, Status_010>([dt](Entity, Command_010& c, Acceleration_010& a, Heat_010& h, Status_010& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_010, Health_010, Position_010, Signal_010>([dt](Entity, Metrics_010& m, Health_010& a, Position_010& p, Signal_010& g) {
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
} // namespace faultlab::generated::domain_010

namespace faultlab::generated::domain_011 {

struct Position_011 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_011 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_011 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_011 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_011 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_011 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_011 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_011 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_011 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_011 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_011 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_011 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_011 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_011 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_011 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_011 {
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
        world.emplace<Position_011>(e, Position_011{1.330f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_011>(e, Velocity_011{1.400f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_011>(e, Acceleration_011{1.470f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_011>(e, Health_011{1.540f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_011>(e, Energy_011{1.610f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_011>(e, Heat_011{1.680f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_011>(e, Cargo_011{1.750f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_011>(e, Demand_011{1.820f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_011>(e, Supply_011{1.890f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_011>(e, Signal_011{1.960f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_011>(e, Timer_011{2.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_011>(e, Status_011{2.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_011>(e, Target_011{2.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_011>(e, Credit_011{2.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_011>(e, Command_011{2.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_011>(e, Metrics_011{2.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_011, Velocity_011, Acceleration_011, Metrics_011>([dt](Entity, Position_011& p, Velocity_011& v, Acceleration_011& a, Metrics_011& m) {
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
    world.each<Health_011, Energy_011, Heat_011, Status_011>([dt](Entity, Health_011& a, Energy_011& b, Heat_011& h, Status_011& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_011, Demand_011, Supply_011, Metrics_011>([dt](Entity, Cargo_011& c, Demand_011& d, Supply_011& s, Metrics_011& m) {
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
    world.each<Signal_011, Timer_011, Status_011, Command_011>([dt](Entity, Signal_011& g, Timer_011& t, Status_011& s, Command_011& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_011, Position_011, Velocity_011, Command_011>([dt](Entity, Target_011& t, Position_011& p, Velocity_011& v, Command_011& c) {
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
    world.each<Credit_011, Cargo_011, Energy_011, Demand_011>([dt](Entity, Credit_011& a, Cargo_011& c, Energy_011& b, Demand_011& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_011, Acceleration_011, Heat_011, Status_011>([dt](Entity, Command_011& c, Acceleration_011& a, Heat_011& h, Status_011& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_011, Health_011, Position_011, Signal_011>([dt](Entity, Metrics_011& m, Health_011& a, Position_011& p, Signal_011& g) {
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
} // namespace faultlab::generated::domain_011

