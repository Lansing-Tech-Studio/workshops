---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# First Drive Timing Guide (3 Hours)

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
**Goal**: Connect to the robot, drive a distance and turn an angle, and calibrate.

## 9:00-9:15 — Arrival Game: Human Robot

<div class="brief-only" markdown="1">
Students command a human "robot" with literal steps to pre-teach **"the robot does exactly what you say."**
</div>

<div class="detail" markdown="1">
- **Objective**: pre-teach "the robot does exactly what you say" before anyone touches code.
- **Flow**:
  1. As students arrive, one is the "robot" and teammates give literal step commands
     ("forward 2 steps, turn right, forward 1 step") to reach a target.
  2. When the "robot" does something silly because of a vague command, name it: that's
     **sensor data** — it did exactly what was said.
- **Watch for**: students adding commands the robot didn't get ("you knew what I meant!").
- **Tip**: keep it light; this just primes the mindset for the day.
</div>

## 9:15-9:25 — Mission Huddle

<div class="brief-only" markdown="1">
Meet the robot, find labeled hubs, frame the mission (distance, turn, square), assign roles.
</div>

<div class="detail" markdown="1">
- **Objective**: meet the robot and frame today's mission.
- **Flow**:
  1. Introduce Techster and have each team find their **named, labeled** hub.
  2. Today's mission: drive a distance, turn an angle, trace a square.
  3. Introduce the mantra: "Bugs are sensor data."
- **Tip**: assign the first set of roles (Coder, Builder, Navigator, Tester) now.
</div>

## 9:25-10:25 — Robotics Block 1: Connect & First Moves

<div class="brief-only" markdown="1">
Connect over Bluetooth and run `straight()` and `turn()`. **Milestone: every team drives and turns. Budget 10-15 min for first-time Bluetooth.**
</div>

<div class="detail" markdown="1">
- **Objective**: every team connects over Bluetooth and runs `straight()` and `turn()`.
- **Flow**:
  1. Open code.pybricks.com in Chrome/Edge and **connect** to the hub by name.
  2. Run `robot.straight(200)` — watch it drive.
  3. Run `robot.turn(90)` — note the direction (positive = clockwise/right).
  4. If it drives backward, flip a motor `Direction`.
  5. **Rotate roles ~halfway** through the block.
- **Off-robot task**: Navigator sketches the square path and predicts each command on
  the worksheet (keeps non-coders busy and feeds Block 2).
- **Watch for**:
  - First-time Bluetooth connection friction — budget 10-15 min, connect one yourself first
  - Hubs already connected to another laptop (only one connection at a time)
  - Students treating 56/112 as "the answer" — remind them those are guesses for later
- **Tip**: get one team fully connected fast, then have them help neighbors.
</div>

## 10:25-10:35 — Energizer

- Quick *Algorithm Relay* or stretch-and-shake. Get everyone up and moving.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: Calibrate & Drive a Square

<div class="brief-only" markdown="1">
Calibrate `wheel_diameter` then `axle_track`, then loop the moves to trace a square. **Tune distance first, then turning.**
</div>

<div class="detail" markdown="1">
- **Objective**: calibrate distance and turning, then trace a square.
- **Flow**:
  1. Run `robot.straight(1000)`, measure the real distance, adjust `wheel_diameter`,
     repeat until it's ~1 meter. Record tries on the worksheet.
  2. Run `robot.turn(360)`, check for one clean spin, adjust `axle_track`, repeat.
  3. Wrap the moves in a `for i in range(4):` loop to drive a square.
  4. Test the square; tighten calibration to close the gap.
- **Watch for**:
  - Teams changing both numbers at once — tune distance first, then turning
  - Frustration that the square doesn't perfectly close — "pretty close" is a win
  - Make sure the Tester is recording numbers; that's the day's artifact
- **Tip**: a tape measure on the floor and masking-tape start lines speed up measuring.
</div>

## 11:45-12:00 — Demo + Cleanup

<div class="brief-only" markdown="1">
Each team demos a drive-and-turn, debrief with prompts, **charge hubs and keep robots intact for tomorrow.**
</div>

<div class="detail" markdown="1">
- **Demo**: each team (voluntarily) shows a drive-and-turn of their choice.
- **Prompts**:
  - "What did you change to make the square close up better?"
  - "When did the robot surprise you, and what did the code actually say?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow.
- **Bridge**: "Tomorrow we'll give these moves *names* and string them together to
  solve a maze."
</div>

## General Tips Throughout

<div class="brief-only" markdown="1">
Calibrate don't memorize, treat bugs as sensor data, rotate roles so everyone codes, and celebrate the first drive.
</div>

<div class="detail" markdown="1">
- **Calibrate, don't memorize**: never hand out "correct" wheel/axle numbers.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the code say?"
- **Everyone codes**: rotate roles and keep the off-robot task going so all four stay engaged.
- **Celebrate the first drive**: it's the moment that hooks students for the week.
</div>
