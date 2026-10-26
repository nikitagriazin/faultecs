#include "faultlab/world.hpp"
#include <algorithm>
#include <cmath>

namespace faultlab::generated::domain_120 {

struct Position_120 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_120 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_120 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_120 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_120 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_120 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_120 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_120 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_120 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_120 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_120 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_120 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_120 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_120 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_120 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_120 {
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
        world.emplace<Position_120>(e, Position_120{1.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_120>(e, Velocity_120{1.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_120>(e, Acceleration_120{1.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_120>(e, Health_120{1.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_120>(e, Energy_120{1.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_120>(e, Heat_120{1.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_120>(e, Cargo_120{1.450f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_120>(e, Demand_120{1.520f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_120>(e, Supply_120{1.590f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_120>(e, Signal_120{1.660f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_120>(e, Timer_120{1.730f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_120>(e, Status_120{1.800f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_120>(e, Target_120{1.870f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_120>(e, Credit_120{1.940f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_120>(e, Command_120{2.010f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_120>(e, Metrics_120{2.080f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_120, Velocity_120, Acceleration_120, Metrics_120>([dt](Entity, Position_120& p, Velocity_120& v, Acceleration_120& a, Metrics_120& m) {
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
    world.each<Health_120, Energy_120, Heat_120, Status_120>([dt](Entity, Health_120& a, Energy_120& b, Heat_120& h, Status_120& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_120, Demand_120, Supply_120, Metrics_120>([dt](Entity, Cargo_120& c, Demand_120& d, Supply_120& s, Metrics_120& m) {
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
    world.each<Signal_120, Timer_120, Status_120, Command_120>([dt](Entity, Signal_120& g, Timer_120& t, Status_120& s, Command_120& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_120, Position_120, Velocity_120, Command_120>([dt](Entity, Target_120& t, Position_120& p, Velocity_120& v, Command_120& c) {
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
    world.each<Credit_120, Cargo_120, Energy_120, Demand_120>([dt](Entity, Credit_120& a, Cargo_120& c, Energy_120& b, Demand_120& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_120, Acceleration_120, Heat_120, Status_120>([dt](Entity, Command_120& c, Acceleration_120& a, Heat_120& h, Status_120& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_120, Health_120, Position_120, Signal_120>([dt](Entity, Metrics_120& m, Health_120& a, Position_120& p, Signal_120& g) {
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
} // namespace faultlab::generated::domain_120

namespace faultlab::generated::domain_121 {

struct Position_121 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_121 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_121 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_121 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_121 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_121 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_121 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_121 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_121 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_121 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_121 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_121 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_121 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_121 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_121 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_121 {
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
        world.emplace<Position_121>(e, Position_121{1.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_121>(e, Velocity_121{1.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_121>(e, Acceleration_121{1.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_121>(e, Health_121{1.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_121>(e, Energy_121{1.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_121>(e, Heat_121{1.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_121>(e, Cargo_121{1.480f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_121>(e, Demand_121{1.550f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_121>(e, Supply_121{1.620f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_121>(e, Signal_121{1.690f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_121>(e, Timer_121{1.760f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_121>(e, Status_121{1.830f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_121>(e, Target_121{1.900f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_121>(e, Credit_121{1.970f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_121>(e, Command_121{2.040f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_121>(e, Metrics_121{2.110f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_121, Velocity_121, Acceleration_121, Metrics_121>([dt](Entity, Position_121& p, Velocity_121& v, Acceleration_121& a, Metrics_121& m) {
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
    world.each<Health_121, Energy_121, Heat_121, Status_121>([dt](Entity, Health_121& a, Energy_121& b, Heat_121& h, Status_121& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_121, Demand_121, Supply_121, Metrics_121>([dt](Entity, Cargo_121& c, Demand_121& d, Supply_121& s, Metrics_121& m) {
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
    world.each<Signal_121, Timer_121, Status_121, Command_121>([dt](Entity, Signal_121& g, Timer_121& t, Status_121& s, Command_121& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_121, Position_121, Velocity_121, Command_121>([dt](Entity, Target_121& t, Position_121& p, Velocity_121& v, Command_121& c) {
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
    world.each<Credit_121, Cargo_121, Energy_121, Demand_121>([dt](Entity, Credit_121& a, Cargo_121& c, Energy_121& b, Demand_121& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_121, Acceleration_121, Heat_121, Status_121>([dt](Entity, Command_121& c, Acceleration_121& a, Heat_121& h, Status_121& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_121, Health_121, Position_121, Signal_121>([dt](Entity, Metrics_121& m, Health_121& a, Position_121& p, Signal_121& g) {
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
} // namespace faultlab::generated::domain_121

namespace faultlab::generated::domain_122 {

struct Position_122 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_122 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_122 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_122 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_122 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_122 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_122 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_122 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_122 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_122 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_122 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_122 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_122 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_122 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_122 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_122 {
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
        world.emplace<Position_122>(e, Position_122{1.090f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_122>(e, Velocity_122{1.160f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_122>(e, Acceleration_122{1.230f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_122>(e, Health_122{1.300f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_122>(e, Energy_122{1.370f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_122>(e, Heat_122{1.440f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_122>(e, Cargo_122{1.510f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_122>(e, Demand_122{1.580f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_122>(e, Supply_122{1.650f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_122>(e, Signal_122{1.720f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_122>(e, Timer_122{1.790f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_122>(e, Status_122{1.860f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_122>(e, Target_122{1.930f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_122>(e, Credit_122{2.000f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_122>(e, Command_122{2.070f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_122>(e, Metrics_122{2.140f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_122, Velocity_122, Acceleration_122, Metrics_122>([dt](Entity, Position_122& p, Velocity_122& v, Acceleration_122& a, Metrics_122& m) {
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
    world.each<Health_122, Energy_122, Heat_122, Status_122>([dt](Entity, Health_122& a, Energy_122& b, Heat_122& h, Status_122& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_122, Demand_122, Supply_122, Metrics_122>([dt](Entity, Cargo_122& c, Demand_122& d, Supply_122& s, Metrics_122& m) {
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
    world.each<Signal_122, Timer_122, Status_122, Command_122>([dt](Entity, Signal_122& g, Timer_122& t, Status_122& s, Command_122& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_122, Position_122, Velocity_122, Command_122>([dt](Entity, Target_122& t, Position_122& p, Velocity_122& v, Command_122& c) {
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
    world.each<Credit_122, Cargo_122, Energy_122, Demand_122>([dt](Entity, Credit_122& a, Cargo_122& c, Energy_122& b, Demand_122& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_122, Acceleration_122, Heat_122, Status_122>([dt](Entity, Command_122& c, Acceleration_122& a, Heat_122& h, Status_122& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_122, Health_122, Position_122, Signal_122>([dt](Entity, Metrics_122& m, Health_122& a, Position_122& p, Signal_122& g) {
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
} // namespace faultlab::generated::domain_122

namespace faultlab::generated::domain_123 {

struct Position_123 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_123 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_123 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_123 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_123 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_123 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_123 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_123 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_123 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_123 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_123 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_123 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_123 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_123 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_123 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_123 {
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
        world.emplace<Position_123>(e, Position_123{1.120f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_123>(e, Velocity_123{1.190f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_123>(e, Acceleration_123{1.260f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_123>(e, Health_123{1.330f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_123>(e, Energy_123{1.400f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_123>(e, Heat_123{1.470f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_123>(e, Cargo_123{1.540f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_123>(e, Demand_123{1.610f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_123>(e, Supply_123{1.680f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_123>(e, Signal_123{1.750f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_123>(e, Timer_123{1.820f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_123>(e, Status_123{1.890f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_123>(e, Target_123{1.960f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_123>(e, Credit_123{2.030f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_123>(e, Command_123{2.100f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_123>(e, Metrics_123{2.170f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_123, Velocity_123, Acceleration_123, Metrics_123>([dt](Entity, Position_123& p, Velocity_123& v, Acceleration_123& a, Metrics_123& m) {
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
    world.each<Health_123, Energy_123, Heat_123, Status_123>([dt](Entity, Health_123& a, Energy_123& b, Heat_123& h, Status_123& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_123, Demand_123, Supply_123, Metrics_123>([dt](Entity, Cargo_123& c, Demand_123& d, Supply_123& s, Metrics_123& m) {
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
    world.each<Signal_123, Timer_123, Status_123, Command_123>([dt](Entity, Signal_123& g, Timer_123& t, Status_123& s, Command_123& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_123, Position_123, Velocity_123, Command_123>([dt](Entity, Target_123& t, Position_123& p, Velocity_123& v, Command_123& c) {
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
    world.each<Credit_123, Cargo_123, Energy_123, Demand_123>([dt](Entity, Credit_123& a, Cargo_123& c, Energy_123& b, Demand_123& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_123, Acceleration_123, Heat_123, Status_123>([dt](Entity, Command_123& c, Acceleration_123& a, Heat_123& h, Status_123& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_123, Health_123, Position_123, Signal_123>([dt](Entity, Metrics_123& m, Health_123& a, Position_123& p, Signal_123& g) {
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
} // namespace faultlab::generated::domain_123

namespace faultlab::generated::domain_124 {

struct Position_124 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_124 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_124 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_124 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_124 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_124 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_124 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_124 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_124 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_124 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_124 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_124 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_124 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_124 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_124 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_124 {
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
        world.emplace<Position_124>(e, Position_124{1.150f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_124>(e, Velocity_124{1.220f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_124>(e, Acceleration_124{1.290f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_124>(e, Health_124{1.360f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_124>(e, Energy_124{1.430f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_124>(e, Heat_124{1.500f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_124>(e, Cargo_124{1.570f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_124>(e, Demand_124{1.640f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_124>(e, Supply_124{1.710f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_124>(e, Signal_124{1.780f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_124>(e, Timer_124{1.850f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_124>(e, Status_124{1.920f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_124>(e, Target_124{1.990f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_124>(e, Credit_124{2.060f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_124>(e, Command_124{2.130f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_124>(e, Metrics_124{2.200f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_124, Velocity_124, Acceleration_124, Metrics_124>([dt](Entity, Position_124& p, Velocity_124& v, Acceleration_124& a, Metrics_124& m) {
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
    world.each<Health_124, Energy_124, Heat_124, Status_124>([dt](Entity, Health_124& a, Energy_124& b, Heat_124& h, Status_124& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_124, Demand_124, Supply_124, Metrics_124>([dt](Entity, Cargo_124& c, Demand_124& d, Supply_124& s, Metrics_124& m) {
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
    world.each<Signal_124, Timer_124, Status_124, Command_124>([dt](Entity, Signal_124& g, Timer_124& t, Status_124& s, Command_124& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_124, Position_124, Velocity_124, Command_124>([dt](Entity, Target_124& t, Position_124& p, Velocity_124& v, Command_124& c) {
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
    world.each<Credit_124, Cargo_124, Energy_124, Demand_124>([dt](Entity, Credit_124& a, Cargo_124& c, Energy_124& b, Demand_124& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_124, Acceleration_124, Heat_124, Status_124>([dt](Entity, Command_124& c, Acceleration_124& a, Heat_124& h, Status_124& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_124, Health_124, Position_124, Signal_124>([dt](Entity, Metrics_124& m, Health_124& a, Position_124& p, Signal_124& g) {
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
} // namespace faultlab::generated::domain_124

namespace faultlab::generated::domain_125 {

struct Position_125 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_125 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_125 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_125 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_125 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_125 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_125 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_125 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_125 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_125 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_125 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_125 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_125 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_125 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_125 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_125 {
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
        world.emplace<Position_125>(e, Position_125{1.180f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_125>(e, Velocity_125{1.250f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_125>(e, Acceleration_125{1.320f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_125>(e, Health_125{1.390f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_125>(e, Energy_125{1.460f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_125>(e, Heat_125{1.530f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_125>(e, Cargo_125{1.600f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_125>(e, Demand_125{1.670f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_125>(e, Supply_125{1.740f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_125>(e, Signal_125{1.810f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_125>(e, Timer_125{1.880f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_125>(e, Status_125{1.950f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_125>(e, Target_125{2.020f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_125>(e, Credit_125{2.090f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_125>(e, Command_125{2.160f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_125>(e, Metrics_125{2.230f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_125, Velocity_125, Acceleration_125, Metrics_125>([dt](Entity, Position_125& p, Velocity_125& v, Acceleration_125& a, Metrics_125& m) {
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
    world.each<Health_125, Energy_125, Heat_125, Status_125>([dt](Entity, Health_125& a, Energy_125& b, Heat_125& h, Status_125& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_125, Demand_125, Supply_125, Metrics_125>([dt](Entity, Cargo_125& c, Demand_125& d, Supply_125& s, Metrics_125& m) {
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
    world.each<Signal_125, Timer_125, Status_125, Command_125>([dt](Entity, Signal_125& g, Timer_125& t, Status_125& s, Command_125& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_125, Position_125, Velocity_125, Command_125>([dt](Entity, Target_125& t, Position_125& p, Velocity_125& v, Command_125& c) {
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
    world.each<Credit_125, Cargo_125, Energy_125, Demand_125>([dt](Entity, Credit_125& a, Cargo_125& c, Energy_125& b, Demand_125& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_125, Acceleration_125, Heat_125, Status_125>([dt](Entity, Command_125& c, Acceleration_125& a, Heat_125& h, Status_125& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_125, Health_125, Position_125, Signal_125>([dt](Entity, Metrics_125& m, Health_125& a, Position_125& p, Signal_125& g) {
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
} // namespace faultlab::generated::domain_125

namespace faultlab::generated::domain_126 {

struct Position_126 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_126 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_126 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_126 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_126 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_126 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_126 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_126 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_126 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_126 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_126 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_126 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_126 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_126 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_126 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_126 {
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
        world.emplace<Position_126>(e, Position_126{1.210f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_126>(e, Velocity_126{1.280f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_126>(e, Acceleration_126{1.350f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_126>(e, Health_126{1.420f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_126>(e, Energy_126{1.490f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_126>(e, Heat_126{1.560f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_126>(e, Cargo_126{1.630f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_126>(e, Demand_126{1.700f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_126>(e, Supply_126{1.770f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_126>(e, Signal_126{1.840f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_126>(e, Timer_126{1.910f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_126>(e, Status_126{1.980f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_126>(e, Target_126{2.050f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_126>(e, Credit_126{2.120f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_126>(e, Command_126{2.190f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_126>(e, Metrics_126{2.260f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_126, Velocity_126, Acceleration_126, Metrics_126>([dt](Entity, Position_126& p, Velocity_126& v, Acceleration_126& a, Metrics_126& m) {
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
    world.each<Health_126, Energy_126, Heat_126, Status_126>([dt](Entity, Health_126& a, Energy_126& b, Heat_126& h, Status_126& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_126, Demand_126, Supply_126, Metrics_126>([dt](Entity, Cargo_126& c, Demand_126& d, Supply_126& s, Metrics_126& m) {
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
    world.each<Signal_126, Timer_126, Status_126, Command_126>([dt](Entity, Signal_126& g, Timer_126& t, Status_126& s, Command_126& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_126, Position_126, Velocity_126, Command_126>([dt](Entity, Target_126& t, Position_126& p, Velocity_126& v, Command_126& c) {
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
    world.each<Credit_126, Cargo_126, Energy_126, Demand_126>([dt](Entity, Credit_126& a, Cargo_126& c, Energy_126& b, Demand_126& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_126, Acceleration_126, Heat_126, Status_126>([dt](Entity, Command_126& c, Acceleration_126& a, Heat_126& h, Status_126& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_126, Health_126, Position_126, Signal_126>([dt](Entity, Metrics_126& m, Health_126& a, Position_126& p, Signal_126& g) {
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
} // namespace faultlab::generated::domain_126

namespace faultlab::generated::domain_127 {

struct Position_127 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_127 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_127 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_127 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_127 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_127 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_127 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_127 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_127 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_127 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_127 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_127 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_127 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_127 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_127 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_127 {
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
        world.emplace<Position_127>(e, Position_127{1.240f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_127>(e, Velocity_127{1.310f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_127>(e, Acceleration_127{1.380f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_127>(e, Health_127{1.450f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_127>(e, Energy_127{1.520f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_127>(e, Heat_127{1.590f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_127>(e, Cargo_127{1.660f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_127>(e, Demand_127{1.730f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_127>(e, Supply_127{1.800f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_127>(e, Signal_127{1.870f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_127>(e, Timer_127{1.940f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_127>(e, Status_127{2.010f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_127>(e, Target_127{2.080f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_127>(e, Credit_127{2.150f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_127>(e, Command_127{2.220f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_127>(e, Metrics_127{2.290f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_127, Velocity_127, Acceleration_127, Metrics_127>([dt](Entity, Position_127& p, Velocity_127& v, Acceleration_127& a, Metrics_127& m) {
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
    world.each<Health_127, Energy_127, Heat_127, Status_127>([dt](Entity, Health_127& a, Energy_127& b, Heat_127& h, Status_127& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_127, Demand_127, Supply_127, Metrics_127>([dt](Entity, Cargo_127& c, Demand_127& d, Supply_127& s, Metrics_127& m) {
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
    world.each<Signal_127, Timer_127, Status_127, Command_127>([dt](Entity, Signal_127& g, Timer_127& t, Status_127& s, Command_127& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_127, Position_127, Velocity_127, Command_127>([dt](Entity, Target_127& t, Position_127& p, Velocity_127& v, Command_127& c) {
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
    world.each<Credit_127, Cargo_127, Energy_127, Demand_127>([dt](Entity, Credit_127& a, Cargo_127& c, Energy_127& b, Demand_127& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_127, Acceleration_127, Heat_127, Status_127>([dt](Entity, Command_127& c, Acceleration_127& a, Heat_127& h, Status_127& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_127, Health_127, Position_127, Signal_127>([dt](Entity, Metrics_127& m, Health_127& a, Position_127& p, Signal_127& g) {
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
} // namespace faultlab::generated::domain_127

namespace faultlab::generated::domain_128 {

struct Position_128 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_128 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_128 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_128 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_128 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_128 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_128 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_128 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_128 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_128 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_128 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_128 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_128 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_128 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_128 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_128 {
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
        world.emplace<Position_128>(e, Position_128{1.270f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_128>(e, Velocity_128{1.340f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_128>(e, Acceleration_128{1.410f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_128>(e, Health_128{1.480f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_128>(e, Energy_128{1.550f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_128>(e, Heat_128{1.620f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_128>(e, Cargo_128{1.690f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_128>(e, Demand_128{1.760f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_128>(e, Supply_128{1.830f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_128>(e, Signal_128{1.900f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_128>(e, Timer_128{1.970f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_128>(e, Status_128{2.040f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_128>(e, Target_128{2.110f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_128>(e, Credit_128{2.180f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_128>(e, Command_128{2.250f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_128>(e, Metrics_128{2.320f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_128, Velocity_128, Acceleration_128, Metrics_128>([dt](Entity, Position_128& p, Velocity_128& v, Acceleration_128& a, Metrics_128& m) {
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
    world.each<Health_128, Energy_128, Heat_128, Status_128>([dt](Entity, Health_128& a, Energy_128& b, Heat_128& h, Status_128& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_128, Demand_128, Supply_128, Metrics_128>([dt](Entity, Cargo_128& c, Demand_128& d, Supply_128& s, Metrics_128& m) {
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
    world.each<Signal_128, Timer_128, Status_128, Command_128>([dt](Entity, Signal_128& g, Timer_128& t, Status_128& s, Command_128& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_128, Position_128, Velocity_128, Command_128>([dt](Entity, Target_128& t, Position_128& p, Velocity_128& v, Command_128& c) {
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
    world.each<Credit_128, Cargo_128, Energy_128, Demand_128>([dt](Entity, Credit_128& a, Cargo_128& c, Energy_128& b, Demand_128& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_128, Acceleration_128, Heat_128, Status_128>([dt](Entity, Command_128& c, Acceleration_128& a, Heat_128& h, Status_128& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_128, Health_128, Position_128, Signal_128>([dt](Entity, Metrics_128& m, Health_128& a, Position_128& p, Signal_128& g) {
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
} // namespace faultlab::generated::domain_128

namespace faultlab::generated::domain_129 {

struct Position_129 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_129 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_129 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_129 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_129 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_129 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_129 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_129 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_129 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_129 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_129 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_129 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_129 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_129 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_129 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_129 {
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
        world.emplace<Position_129>(e, Position_129{1.300f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_129>(e, Velocity_129{1.370f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_129>(e, Acceleration_129{1.440f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_129>(e, Health_129{1.510f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_129>(e, Energy_129{1.580f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_129>(e, Heat_129{1.650f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_129>(e, Cargo_129{1.720f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_129>(e, Demand_129{1.790f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_129>(e, Supply_129{1.860f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_129>(e, Signal_129{1.930f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_129>(e, Timer_129{2.000f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_129>(e, Status_129{2.070f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_129>(e, Target_129{2.140f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_129>(e, Credit_129{2.210f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_129>(e, Command_129{2.280f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_129>(e, Metrics_129{2.350f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_129, Velocity_129, Acceleration_129, Metrics_129>([dt](Entity, Position_129& p, Velocity_129& v, Acceleration_129& a, Metrics_129& m) {
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
    world.each<Health_129, Energy_129, Heat_129, Status_129>([dt](Entity, Health_129& a, Energy_129& b, Heat_129& h, Status_129& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_129, Demand_129, Supply_129, Metrics_129>([dt](Entity, Cargo_129& c, Demand_129& d, Supply_129& s, Metrics_129& m) {
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
    world.each<Signal_129, Timer_129, Status_129, Command_129>([dt](Entity, Signal_129& g, Timer_129& t, Status_129& s, Command_129& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_129, Position_129, Velocity_129, Command_129>([dt](Entity, Target_129& t, Position_129& p, Velocity_129& v, Command_129& c) {
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
    world.each<Credit_129, Cargo_129, Energy_129, Demand_129>([dt](Entity, Credit_129& a, Cargo_129& c, Energy_129& b, Demand_129& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_129, Acceleration_129, Heat_129, Status_129>([dt](Entity, Command_129& c, Acceleration_129& a, Heat_129& h, Status_129& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_129, Health_129, Position_129, Signal_129>([dt](Entity, Metrics_129& m, Health_129& a, Position_129& p, Signal_129& g) {
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
} // namespace faultlab::generated::domain_129

namespace faultlab::generated::domain_130 {

struct Position_130 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_130 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_130 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_130 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_130 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_130 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_130 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_130 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_130 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_130 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_130 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_130 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_130 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_130 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_130 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_130 {
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
        world.emplace<Position_130>(e, Position_130{1.330f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_130>(e, Velocity_130{1.400f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_130>(e, Acceleration_130{1.470f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_130>(e, Health_130{1.540f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_130>(e, Energy_130{1.610f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_130>(e, Heat_130{1.680f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_130>(e, Cargo_130{1.750f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_130>(e, Demand_130{1.820f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_130>(e, Supply_130{1.890f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_130>(e, Signal_130{1.960f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_130>(e, Timer_130{2.030f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_130>(e, Status_130{2.100f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_130>(e, Target_130{2.170f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_130>(e, Credit_130{2.240f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_130>(e, Command_130{2.310f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_130>(e, Metrics_130{2.380f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_130, Velocity_130, Acceleration_130, Metrics_130>([dt](Entity, Position_130& p, Velocity_130& v, Acceleration_130& a, Metrics_130& m) {
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
    world.each<Health_130, Energy_130, Heat_130, Status_130>([dt](Entity, Health_130& a, Energy_130& b, Heat_130& h, Status_130& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_130, Demand_130, Supply_130, Metrics_130>([dt](Entity, Cargo_130& c, Demand_130& d, Supply_130& s, Metrics_130& m) {
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
    world.each<Signal_130, Timer_130, Status_130, Command_130>([dt](Entity, Signal_130& g, Timer_130& t, Status_130& s, Command_130& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_130, Position_130, Velocity_130, Command_130>([dt](Entity, Target_130& t, Position_130& p, Velocity_130& v, Command_130& c) {
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
    world.each<Credit_130, Cargo_130, Energy_130, Demand_130>([dt](Entity, Credit_130& a, Cargo_130& c, Energy_130& b, Demand_130& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_130, Acceleration_130, Heat_130, Status_130>([dt](Entity, Command_130& c, Acceleration_130& a, Heat_130& h, Status_130& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_130, Health_130, Position_130, Signal_130>([dt](Entity, Metrics_130& m, Health_130& a, Position_130& p, Signal_130& g) {
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
} // namespace faultlab::generated::domain_130

namespace faultlab::generated::domain_131 {

struct Position_131 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float previous_x = 0.0f;
    float previous_y = 0.0f;
    float previous_z = 0.0f;
};

struct Velocity_131 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float drag = 0.0f;
    float max_speed = 0.0f;
    float impulse = 0.0f;
};

struct Acceleration_131 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float gain = 0.0f;
    float braking = 0.0f;
    float response = 0.0f;
};

struct Health_131 {
    float current = 0.0f;
    float maximum = 0.0f;
    float regen = 0.0f;
    float damage = 0.0f;
    float armor = 0.0f;
    float recovery = 0.0f;
};

struct Energy_131 {
    float current = 0.0f;
    float maximum = 0.0f;
    float recharge = 0.0f;
    float drain = 0.0f;
    float reserve = 0.0f;
    float efficiency = 0.0f;
};

struct Heat_131 {
    float current = 0.0f;
    float limit = 0.0f;
    float cooling = 0.0f;
    float generated = 0.0f;
    float ambient = 0.0f;
    float stress = 0.0f;
};

struct Cargo_131 {
    float amount = 0.0f;
    float capacity = 0.0f;
    float incoming = 0.0f;
    float outgoing = 0.0f;
    float weight = 0.0f;
    float loss = 0.0f;
};

struct Demand_131 {
    float requested = 0.0f;
    float fulfilled = 0.0f;
    float urgency = 0.0f;
    float backlog = 0.0f;
    float price = 0.0f;
    float priority = 0.0f;
};

struct Supply_131 {
    float available = 0.0f;
    float production = 0.0f;
    float consumption = 0.0f;
    float reserve = 0.0f;
    float quality = 0.0f;
    float rate = 0.0f;
};

struct Signal_131 {
    float value = 0.0f;
    float previous = 0.0f;
    float target = 0.0f;
    float gain = 0.0f;
    float noise = 0.0f;
    float strength = 0.0f;
};

struct Timer_131 {
    float elapsed = 0.0f;
    float period = 0.0f;
    float phase = 0.0f;
    float cycles = 0.0f;
    float deadline = 0.0f;
    float jitter = 0.0f;
};

struct Status_131 {
    float mode = 0.0f;
    float flags = 0.0f;
    float activity = 0.0f;
    float fatigue = 0.0f;
    float confidence = 0.0f;
    float errors = 0.0f;
};

struct Target_131 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float distance = 0.0f;
    float tolerance = 0.0f;
    float priority = 0.0f;
};

struct Credit_131 {
    float balance = 0.0f;
    float income = 0.0f;
    float expense = 0.0f;
    float tax = 0.0f;
    float debt = 0.0f;
    float interest = 0.0f;
};

struct Command_131 {
    float throttle = 0.0f;
    float steer = 0.0f;
    float lift = 0.0f;
    float brake = 0.0f;
    float override = 0.0f;
    float weight = 0.0f;
};

struct Metrics_131 {
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
        world.emplace<Position_131>(e, Position_131{1.360f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Velocity_131>(e, Velocity_131{1.430f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Acceleration_131>(e, Acceleration_131{1.500f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Health_131>(e, Health_131{1.570f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Energy_131>(e, Energy_131{1.640f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Heat_131>(e, Heat_131{1.710f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Cargo_131>(e, Cargo_131{1.780f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Demand_131>(e, Demand_131{1.850f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Supply_131>(e, Supply_131{1.920f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Signal_131>(e, Signal_131{1.990f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Timer_131>(e, Timer_131{2.060f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Status_131>(e, Status_131{2.130f, 1.100f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Target_131>(e, Target_131{2.200f, 1.200f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Credit_131>(e, Credit_131{2.270f, 1.300f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Command_131>(e, Command_131{2.340f, 1.400f, 0.5f, 0.25f, 0.1f, 0.01f});
        world.emplace<Metrics_131>(e, Metrics_131{2.410f, 1.000f, 0.5f, 0.25f, 0.1f, 0.01f});
    }
}

void motion(World& world, float dt) {
    world.each<Position_131, Velocity_131, Acceleration_131, Metrics_131>([dt](Entity, Position_131& p, Velocity_131& v, Acceleration_131& a, Metrics_131& m) {
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
    world.each<Health_131, Energy_131, Heat_131, Status_131>([dt](Entity, Health_131& a, Energy_131& b, Heat_131& h, Status_131& s) {
        const float exposure = std::max(0.0f, h.current - h.limit);
        a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);
        b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);
        h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);
        s.fatigue += exposure * dt;
        s.activity = a.current > 0.0f ? 1.0f : 0.0f;
    });
}

void logistics(World& world, float dt) {
    world.each<Cargo_131, Demand_131, Supply_131, Metrics_131>([dt](Entity, Cargo_131& c, Demand_131& d, Supply_131& s, Metrics_131& m) {
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
    world.each<Signal_131, Timer_131, Status_131, Command_131>([dt](Entity, Signal_131& g, Timer_131& t, Status_131& s, Command_131& c) {
        t.elapsed += dt;
        if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }
        g.previous = g.value;
        g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);
        s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);
        c.override = s.confidence < 0.2f ? 1.0f : 0.0f;
    });
}

void guidance(World& world, float dt) {
    world.each<Target_131, Position_131, Velocity_131, Command_131>([dt](Entity, Target_131& t, Position_131& p, Velocity_131& v, Command_131& c) {
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
    world.each<Credit_131, Cargo_131, Energy_131, Demand_131>([dt](Entity, Credit_131& a, Cargo_131& c, Energy_131& b, Demand_131& d) {
        const float sales = std::min(c.amount, d.fulfilled) * d.price;
        a.balance += (a.income + sales - a.expense - a.tax) * dt;
        a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);
        c.outgoing += sales;
        b.drain += std::max(0.0f, c.weight * sales) * 0.001f;
        d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);
    });
}

void control(World& world, float dt) {
    world.each<Command_131, Acceleration_131, Heat_131, Status_131>([dt](Entity, Command_131& c, Acceleration_131& a, Heat_131& h, Status_131& s) {
        const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));
        a.x = c.throttle * a.response * active;
        a.y = c.steer * a.response * active;
        a.z = c.lift * a.response * active;
        h.generated += std::abs(a.x) * 0.001f * dt;
        s.mode = c.override > 0.5f ? 2.0f : 1.0f;
    });
}

void observe(World& world, float dt) {
    world.each<Metrics_131, Health_131, Position_131, Signal_131>([dt](Entity, Metrics_131& m, Health_131& a, Position_131& p, Signal_131& g) {
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
} // namespace faultlab::generated::domain_131

