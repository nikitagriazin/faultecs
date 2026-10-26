"""Deterministically generate the ECS workload. Run from any directory."""

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "generated"
DOMAIN_COUNT = 180
DOMAINS_PER_UNIT = 12

SCHEMA = {
    "Position": "x y z previous_x previous_y previous_z",
    "Velocity": "x y z drag max_speed impulse",
    "Acceleration": "x y z gain braking response",
    "Health": "current maximum regen damage armor recovery",
    "Energy": "current maximum recharge drain reserve efficiency",
    "Heat": "current limit cooling generated ambient stress",
    "Cargo": "amount capacity incoming outgoing weight loss",
    "Demand": "requested fulfilled urgency backlog price priority",
    "Supply": "available production consumption reserve quality rate",
    "Signal": "value previous target gain noise strength",
    "Timer": "elapsed period phase cycles deadline jitter",
    "Status": "mode flags activity fatigue confidence errors",
    "Target": "x y z distance tolerance priority",
    "Credit": "balance income expense tax debt interest",
    "Command": "throttle steer lift brake override weight",
    "Metrics": "travel work failures score samples checksum",
}


def emit_domain(index: int) -> list[str]:
    ns = f"domain_{index:03d}"
    lines = [f"namespace faultlab::generated::{ns} {{", ""]
    for name, fields in SCHEMA.items():
        lines.append(f"struct {name}_{index:03d} {{")
        for field in fields.split():
            lines.append(f"    float {field} = 0.0f;")
        lines += ["};", ""]

    t = lambda name: f"{name}_{index:03d}"
    base = 1.0 + (index % 17) * 0.03
    lines += [
        "void seed(World& world, unsigned count) {",
        "    for (unsigned i = 0; i < count; ++i) {",
        "        const Entity e = world.create();",
    ]
    for n, name in enumerate(SCHEMA):
        a = f"{base + n * .07:.3f}f"
        b = f"{1.0 + (n % 5) * .1:.3f}f"
        lines.append(f"        world.emplace<{t(name)}>(e, {t(name)}{{{a}, {b}, 0.5f, 0.25f, 0.1f, 0.01f}});")
    lines += ["    }", "}", ""]

    specs = [
        ("motion", "Position Velocity Acceleration Metrics", [
            "p.previous_x = p.x; p.previous_y = p.y; p.previous_z = p.z;",
            "v.x += a.x * a.gain * dt; v.y += a.y * a.gain * dt; v.z += a.z * a.gain * dt;",
            "const float damping = 1.0f / (1.0f + v.drag * dt);",
            "v.x *= damping; v.y *= damping; v.z *= damping;",
            "p.x += v.x * dt; p.y += v.y * dt; p.z += v.z * dt;",
            "m.travel += std::abs(p.x - p.previous_x) + std::abs(p.y - p.previous_y);",
            "m.checksum += p.z * 0.001f;",
        ]),
        ("survival", "Health Energy Heat Status", [
            "const float exposure = std::max(0.0f, h.current - h.limit);",
            "a.current = std::clamp(a.current + (a.regen - exposure * a.damage) * dt, 0.0f, a.maximum);",
            "b.current = std::clamp(b.current + (b.recharge - b.drain) * dt, 0.0f, b.maximum);",
            "h.current = std::max(0.0f, h.current + (h.generated - h.cooling) * dt);",
            "s.fatigue += exposure * dt;",
            "s.activity = a.current > 0.0f ? 1.0f : 0.0f;",
        ]),
        ("logistics", "Cargo Demand Supply Metrics", [
            "const float room = std::max(0.0f, c.capacity - c.amount);",
            "const float offer = std::max(0.0f, s.available + s.production * dt - s.reserve);",
            "const float transfer = std::min({room, offer, std::max(0.0f, d.requested - d.fulfilled)});",
            "c.amount += transfer; c.incoming += transfer;",
            "s.available -= transfer; d.fulfilled += transfer;",
            "d.backlog = std::max(0.0f, d.requested - d.fulfilled);",
            "m.work += transfer; m.samples += 1.0f;",
        ]),
        ("signaling", "Signal Timer Status Command", [
            "t.elapsed += dt;",
            "if (t.elapsed >= std::max(0.01f, t.period)) { t.elapsed = 0.0f; t.cycles += 1.0f; }",
            "g.previous = g.value;",
            "g.value += (g.target - g.value) * std::clamp(g.gain * dt, 0.0f, 1.0f);",
            "s.confidence = std::clamp(s.confidence + (g.strength - g.noise) * dt, 0.0f, 1.0f);",
            "c.override = s.confidence < 0.2f ? 1.0f : 0.0f;",
        ]),
        ("guidance", "Target Position Velocity Command", [
            "const float dx = t.x - p.x; const float dy = t.y - p.y; const float dz = t.z - p.z;",
            "t.distance = std::sqrt(dx * dx + dy * dy + dz * dz);",
            "const float scale = 1.0f / std::max(1.0f, t.distance);",
            "c.throttle = std::clamp(dx * scale, -1.0f, 1.0f);",
            "c.steer = std::clamp(dy * scale, -1.0f, 1.0f);",
            "c.lift = std::clamp(dz * scale, -1.0f, 1.0f);",
            "v.impulse += (c.throttle + c.steer + c.lift) * dt;",
        ]),
        ("economy", "Credit Cargo Energy Demand", [
            "const float sales = std::min(c.amount, d.fulfilled) * d.price;",
            "a.balance += (a.income + sales - a.expense - a.tax) * dt;",
            "a.debt = std::max(0.0f, a.debt + a.debt * a.interest * dt - std::max(0.0f, a.balance) * 0.01f);",
            "c.outgoing += sales;",
            "b.drain += std::max(0.0f, c.weight * sales) * 0.001f;",
            "d.priority = std::clamp(d.urgency + d.backlog * 0.1f, 0.0f, 10.0f);",
        ]),
        ("control", "Command Acceleration Heat Status", [
            "const float active = s.activity * (1.0f - std::clamp(c.brake, 0.0f, 1.0f));",
            "a.x = c.throttle * a.response * active;",
            "a.y = c.steer * a.response * active;",
            "a.z = c.lift * a.response * active;",
            "h.generated += std::abs(a.x) * 0.001f * dt;",
            "s.mode = c.override > 0.5f ? 2.0f : 1.0f;",
        ]),
        ("observe", "Metrics Health Position Signal", [
            "m.score = a.current + g.value - m.failures;",
            "m.checksum += (p.x + p.y + p.z + g.value) * dt;",
            "m.samples += 1.0f;",
            "if (a.current <= 0.0f) m.failures += dt;",
            "g.strength = std::clamp(g.strength + m.score * 0.0001f * dt, 0.0f, 1.0f);",
            "m.work += std::max(0.0f, g.strength - g.noise) * dt;",
        ]),
    ]
    aliases = {
        "motion": "p v a m", "survival": "a b h s", "logistics": "c d s m",
        "signaling": "g t s c", "guidance": "t p v c", "economy": "a c b d",
        "control": "c a h s", "observe": "m a p g",
    }
    for name, types, body in specs:
        names = types.split()
        letters = aliases[name].split()
        template = ", ".join(t(item) for item in names)
        params = ", ".join(f"{t(item)}& {letter}" for item, letter in zip(names, letters))
        lines += [
            f"void {name}(World& world, float dt) {{",
            f"    world.each<{template}>([dt](Entity, {params}) {{",
        ]
        lines += [f"        {statement}" for statement in body]
        lines += ["    });", "}", ""]

    lines += [
        "void install(Pipeline& pipeline) {",
    ]
    for name, _, _ in specs:
        lines.append(f"    pipeline.add(&{name});")
    lines += ["}", f"}} // namespace faultlab::generated::{ns}", ""]
    return lines


def write(path: Path, lines: list[str]) -> None:
    path.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")


def main() -> None:
    OUT.mkdir(exist_ok=True)
    for old in OUT.glob("unit_*.cpp"):
        old.unlink()
    for unit in range(DOMAIN_COUNT // DOMAINS_PER_UNIT):
        lines = ['#include "faultlab/world.hpp"', "#include <algorithm>", "#include <cmath>", ""]
        for index in range(unit * DOMAINS_PER_UNIT, (unit + 1) * DOMAINS_PER_UNIT):
            lines.extend(emit_domain(index))
        write(OUT / f"unit_{unit:02d}.cpp", lines)

    write(OUT / "registry.hpp", [
        "#pragma once", '#include "faultlab/world.hpp"',
        "namespace faultlab::generated {",
        "void seed(World& world, unsigned entities_per_domain);",
        "void install(Pipeline& pipeline);",
        f"constexpr unsigned domain_count = {DOMAIN_COUNT};",
        "}",
    ])
    registry = ['#include "registry.hpp"', ""]
    for index in range(DOMAIN_COUNT):
        registry.append(f"namespace faultlab::generated::domain_{index:03d} {{ void seed(World&, unsigned); void install(Pipeline&); }}")
    registry += ["", "namespace faultlab::generated {", "void seed(World& world, unsigned count) {"]
    for index in range(DOMAIN_COUNT):
        registry.append(f"    domain_{index:03d}::seed(world, count);")
    registry += ["}", "void install(Pipeline& pipeline) {"]
    for index in range(DOMAIN_COUNT):
        registry.append(f"    domain_{index:03d}::install(pipeline);")
    registry += ["}", "}"]
    write(OUT / "registry.cpp", registry)
    total = sum(len(path.read_text(encoding="utf-8").splitlines()) for path in OUT.glob("*.cpp"))
    print(f"Generated {DOMAIN_COUNT} domains, {total} C++ lines across {DOMAIN_COUNT // DOMAINS_PER_UNIT + 1} translation units")


if __name__ == "__main__":
    main()
