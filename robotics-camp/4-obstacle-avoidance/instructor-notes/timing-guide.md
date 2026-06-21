---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Obstacle Avoidance Timing Guide (3 Hours)

<button type="button" id="brief-toggle" onclick="document.body.classList.toggle('brief')">Toggle abbreviated view</button>

<style>
#brief-toggle {
  margin: 0.5rem 0 1rem;
  padding: 0.5rem 1rem;
  font-size: 1rem;
  cursor: pointer;
  border: 1px solid #888;
  border-radius: 4px;
  background: #f4f4f4;
}
#brief-toggle:hover { background: #e6e6e6; }
body.brief #brief-toggle { background: #d6ebd6; border-color: #4a8; }
.brief-only { display: none; }
body.brief .brief-only { display: block; font-weight: bold; }
body.brief .detail { display: none; }
@media print {
  #brief-toggle { display: none; }
}
</style>

**Audience**: Ages 9-14, no coding experience required. \
**Goal**: Read a distance sensor and use `if`/`else` in a `while` loop so the robot reacts to obstacles.

## 9:00-9:15 — Arrival Game: Red Light / Green Light

<div class="brief-only" markdown="1">
Play Red Light / Green Light to prime the "watch a signal and react" mindset behind a sensor loop.
</div>

<div class="detail" markdown="1">
- **Objective**: pre-teach "keep checking a signal and react" before anyone touches code.
- **Flow**:
  1. As students arrive, call "green light" (move) and "red light" (freeze); anyone who
     moves on red is out.
  2. Name the pattern: you keep _watching_ the signal and _react_ to it — that's exactly
     what a sensor loop does all day.
- **Watch for**: kids who react late — that's a fun lead-in to "the robot checks fast,
  over and over."
- **Tip**: keep it light; this just primes the sense-then-react mindset.
</div>

## 9:15-9:25 — Mission Huddle + Catch-Up

<div class="brief-only" markdown="1">
Frame the mission and confirm every robot drives and its distance sensor reads values. **Verify the sensor's actual port per robot.**
</div>

<div class="detail" markdown="1">
- **Objective**: frame today's mission and get every robot sensing.
- **Flow**:
  1. **Catch-up warm-up**: recap driving and turning; make sure each team's robot still
     drives and the **distance sensor is mounted and reads values**.
  2. Today's mission: teach your robot to sense an obstacle and change what it does.
  3. Re-state the mantra: "Bugs are sensor data."
- **Tip**: confirm the sensor's actual port on each robot now, so Block 1 isn't blocked.
</div>

## 9:25-10:25 — Robotics Block 1: Read the Sensor

<div class="brief-only" markdown="1">
Add the distance sensor and print `eyes.distance()` live; non-coders build the cardboard obstacle course. **Milestone: a number that changes when you wave a hand (2000 = nothing in front).**
</div>

<div class="detail" markdown="1">
- **Objective**: every team adds the distance sensor and watches `distance()` change.
- **Flow**:
  1. Add `eyes = UltrasonicSensor(Port.C)` (use the real port) to the Day 1 setup.
  2. Run a tiny program that prints `eyes.distance()`.
  3. Move a hand toward the sensor and watch the number drop; note it reads **2000 when
     nothing is in front of it**.
  4. **Rotate roles ~halfway** through the block.
- **Off-robot task**: build the cardboard **obstacle course** (keeps non-coders busy and
  feeds Block 2).
- **Watch for**:
  - Wrong sensor port — the most common early snag; verify it per robot
  - Students thinking 2000 is a bug — it's the "no object" reading
- **Tip**: a printed number that changes live is the hook — let everyone wave at it.
</div>

## 10:25-10:35 — Energizer

- Quick _Red Light / Green Light_ round two or stretch-and-shake. Get everyone up.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: React with if/else + while

<div class="brief-only" markdown="1">
Wrap a `while True:` loop with `if`/`else` so the robot drives, then backs up and turns when an obstacle is close. **Tune the trigger distance on the real course — don't memorize 200 mm.**
</div>

<div class="detail" markdown="1">
- **Objective**: the robot drives forward, but backs up and turns when something's close.
- **Flow**:
  1. Wrap a `while True:` loop around a check of `eyes.distance()`.
  2. `if` closer than the trigger → `robot.straight(-100)` then `robot.turn(90)`;
     `else` → `robot.drive(150, 0)`. Add `wait(10)`.
  3. **Tune the trigger distance** on the real course (start near 200 mm and adjust).
  4. **Challenge**: don't fall off the table — stop or turn a hair from the edge / wall.
- **Watch for**:
  - Panic when the robot "won't stop" — teach the **Stop** button first
  - Teams treating 200 as "the answer" — it's a value they measure on the course
  - Sensor pointed at the floor or off to the side — aim it at the obstacles
- **Tip**: masking-tape a start line and obstacles at set distances to speed up tuning.
</div>

## 11:45-12:00 — Demo + Cleanup

<div class="brief-only" markdown="1">
Teams demo through the course, reflect on trigger distance and surprises, then label and charge hubs for tomorrow.
</div>

<div class="detail" markdown="1">
- **Demo**: each team (voluntarily) runs their robot through the obstacle course.
- **Prompts**:
  - "What trigger distance worked best, and how did you find it?"
  - "When did the robot react in a way you didn't expect, and what did the code say?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow.
- **Bridge**: "Tomorrow we'll teach the robot to _follow a line_ with the color sensor —
  and show off everything we built all week."
</div>

## General Tips Throughout

<div class="brief-only" markdown="1">
Stop button first, calibrate rather than memorize, treat bugs as sensor data, keep everyone coding, and name the shift from fixed script to reacting to the world.
</div>

<div class="detail" markdown="1">
- **Stop button first**: demonstrate it before the first `while True:` run.
- **Calibrate, don't memorize**: never hand out a "correct" trigger distance.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the code say?"
- **Everyone codes**: rotate roles and keep the off-robot course-building going so all
  four stay engaged.
- **Name the shift**: from a fixed script to reacting to the world — that's today's win.
</div>
