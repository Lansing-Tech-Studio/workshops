---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Obstacle Avoidance Timing Guide (3 Hours)

**Audience**: Ages 9-14, no coding experience required. \
**Goal**: Read a distance sensor and use `if`/`else` in a `while` loop so the robot reacts to obstacles.

## 9:00-9:15 — Arrival Game: Red Light / Green Light

- **Objective**: pre-teach "keep checking a signal and react" before anyone touches code.
- **Flow**:
  1. As students arrive, call "green light" (move) and "red light" (freeze); anyone who
     moves on red is out.
  2. Name the pattern: you keep *watching* the signal and *react* to it — that's exactly
     what a sensor loop does all day.
- **Watch for**: kids who react late — that's a fun lead-in to "the robot checks fast,
  over and over."
- **Tip**: keep it light; this just primes the sense-then-react mindset.

## 9:15-9:25 — Mission Huddle + Catch-Up

- **Objective**: frame today's mission and get every robot sensing.
- **Flow**:
  1. **Catch-up warm-up**: recap driving and turning; make sure each team's robot still
     drives and the **distance sensor is mounted and reads values**.
  2. Today's mission: teach Techster to sense an obstacle and change what it does.
  3. Re-state the mantra: "Bugs are sensor data."
- **Tip**: confirm the sensor's actual port on each robot now, so Block 1 isn't blocked.

## 9:25-10:25 — Robotics Block 1: Read the Sensor

- **Objective**: every team adds the distance sensor and watches `distance()` change.
- **Flow**:
  1. Add `eyes = UltrasonicSensor(Port.C)` (use the real port) to the Session 1 setup.
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

## 10:25-10:35 — Energizer

- Quick *Red Light / Green Light* round two or stretch-and-shake. Get everyone up.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: React with if/else + while

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

## 11:45-12:00 — Demo + Cleanup

- **Demo**: each team (voluntarily) runs their robot through the obstacle course.
- **Prompts**:
  - "What trigger distance worked best, and how did you find it?"
  - "When did the robot react in a way you didn't expect, and what did the code say?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow.
- **Bridge**: "Tomorrow we'll teach Techster to *follow a line* with the color sensor —
  and show off everything we built all week."

## General Tips Throughout

- **Stop button first**: demonstrate it before the first `while True:` run.
- **Calibrate, don't memorize**: never hand out a "correct" trigger distance.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the code say?"
- **Everyone codes**: rotate roles and keep the off-robot course-building going so all
  four stay engaged.
- **Name the shift**: from a fixed script to reacting to the world — that's today's win.
