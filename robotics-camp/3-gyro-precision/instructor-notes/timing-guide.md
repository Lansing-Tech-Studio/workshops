---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Gyro Precision Timing Guide (3 Hours)

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
**Goal**: Turn on the gyro, prove it makes turns more accurate, read the heading, and calibrate a true 360°.

## 9:00-9:15 — Arrival Game: Debug the Drawing

<div class="brief-only" markdown="1">
Arrivals spot the one wrong step in a drawn move sequence — a small early error throws off everything after.
</div>

<div class="detail" markdown="1">
- **Objective**: pre-teach that a small early error throws off everything after it.
- **Flow**:
  1. As students arrive, show a _drawn_ sequence of robot moves with one wrong step.
  2. Teams spot the bug and say what the robot would _actually_ do because of it.
  3. Name it: that's **sensor data** — the robot follows the drawing exactly.
- **Watch for**: students fixing the _intent_ instead of reading what the drawing says.
- **Tip**: keep a couple of these ready so early arrivals can do more than one.
- **Ready-made cards + answer key**: [Debug the Drawing](debug-the-drawing.md).
</div>

## 9:15-9:25 — Mission Huddle + Catch-Up

<div class="brief-only" markdown="1">
Frame the gyro mission and re-level the group. **Make sure every team can connect, drive, and turn before adding the gyro.**
</div>

<div class="detail" markdown="1">
- **Objective**: frame today's mission and re-level the group so no one is behind.
- **Flow**:
  1. **Catch-up**: quick recap of driving (`straight`/`turn`) and the Day 2 maze;
     make sure every team can connect, drive, and turn before adding the gyro.
  2. Today's mission: turn on the gyro and _prove_ it makes turns more accurate.
  3. Re-state the mantra: "Bugs are sensor data."
- **Tip**: assign the first set of roles (Coder, Builder, Navigator, Tester) now.
</div>

## 9:25-10:25 — Robotics Block 1: Gyro Off vs. On

<div class="brief-only" markdown="1">
Run the same move gyro-off then gyro-on (`robot.use_gyro(True)`) and chart the error. **Milestone: every team has both errors measured.**
</div>

<div class="detail" markdown="1">
- **Objective**: every team runs the same move gyro-off then gyro-on and charts the error.
- **Flow**:
  1. Reuse the Day 1 setup; run the square (or a maze path) with the gyro **off** and
     mark where it really ends.
  2. Add `robot.use_gyro(True)` and run the **exact same** code with the gyro **on**.
  3. Measure both errors; talk about _why_ the off run drifts and the on run holds.
  4. **Rotate roles ~halfway** through the block.
- **Off-robot task**: Navigator/Tester charts the off-vs-on error on the worksheet.
- **Watch for**:
  - Teams skipping the gyro-off run — the comparison is the proof; require both
  - Students rewriting the whole setup — reuse Day 1's; only one new line
  - Changing the move between runs — it must be the _same_ code to compare fairly
- **Tip**: tape a start mark and a target so "how far off" is easy to measure.
</div>

## 10:25-10:35 — Energizer

- Quick _Algorithm Relay_ or stretch-and-shake. Get everyone up and moving.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: Calibrate the Turn

<div class="brief-only" markdown="1">
Read `hub.imu.heading()`, run `robot.turn(360)`, and tune the turn number until a full turn is true. **Milestone: each hub's true 360° number recorded.**
</div>

<div class="detail" markdown="1">
- **Objective**: read the heading and tune a true 360° turn for each hub.
- **Flow**:
  1. Print `hub.imu.heading()` and watch it change as the robot turns (starts at 0,
     positive = clockwise).
  2. Run `robot.turn(360)` with the gyro on; check whether the heading lands back near 0.
  3. Tune the turn number (try 357, 362, …) until a full turn is _true_ on that hub.
  4. Record the tries and the final number on the worksheet.
- **Watch for**:
  - Frustration that 360 isn't exactly a full turn — that's the lesson, not a failure
  - Teams expecting one "right" number — each hub's value differs (about 355-363)
  - Reading the heading before the program runs (it resets to 0 at start)
- **Tip**: have them write the heading reading next to each turn number so the trend is
  visible (over-spun vs. under-spun).
</div>

## 11:45-12:00 — Demo + Cleanup

<div class="brief-only" markdown="1">
Teams demo the gyro-off vs. gyro-on difference, then label and charge hubs (keep robots intact for tomorrow).
</div>

<div class="detail" markdown="1">
- **Demo**: each team (voluntarily) shows the gyro-off vs. gyro-on difference.
- **Prompts**:
  - "How much more accurate was the gyro-on run?"
  - "What's your hub's true 360° number, and why isn't it just 360?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow.
- **Bridge**: "Tomorrow we'll give your robot _eyes_ with the distance sensor so it can
  react to the world instead of running a fixed script."
</div>

## General Tips Throughout

<div class="brief-only" markdown="1">
Calibrate per-hub (never hand out a number), keep the off-vs-on chart filled, treat bugs as sensor data, and rotate roles so everyone codes.
</div>

<div class="detail" markdown="1">
- **Calibrate, don't memorize**: the turn-fudge number is per-hub; never hand one out.
- **Prove it with data**: the off-vs-on chart is the day's artifact — make sure it's filled.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the code say?"
- **Everyone codes**: rotate roles and keep the off-robot charting going so all four stay engaged.
</div>
