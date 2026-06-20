---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Line Following Timing Guide (3 Hours)

**Audience**: Ages 9-14, no coding experience required. \
**Goal**: Calibrate the color sensor, follow a line with proportional control, tune the gain, and showcase the week.

> Note: today ends a little differently — the **showcase runs 30 minutes** (11:30-12:00)
> instead of 15, so Robotics Block 2 is shorter. Leave that hard stop; it's the week's payoff.

## 9:00-9:15 — Arrival Game: Debug the Dance

- **Objective**: pre-teach "the robot did exactly what the steps said" before touching code.
- **Flow**:
  1. As students arrive, show a short written move/dance sequence with one deliberate bug.
  2. Students spot and fix the bug, then run the corrected sequence.
- **Watch for**: students "fixing" it by intuition instead of reading the steps literally.
- **Tip**: keep it light; this just primes the read-the-code mindset for the day.

## 9:15-9:25 — Mission Huddle + Catch-Up

- **Objective**: recap sensors/decisions and frame today's mission.
- **Flow**:
  1. **Catch-up**: quick recap of Session 4 — reading a sensor and reacting with if/else —
     so every team can read a value before we add steering.
  2. Today's mission: follow a line with the color sensor, then showcase the week.
  3. Reinforce the mantra: "Bugs are sensor data."
- **Tip**: assign the first set of roles (Coder, Builder, Navigator, Tester) now.

## 9:25-10:25 — Robotics Block 1: Calibrate & First Follow

- **Objective**: every team measures BLACK/WHITE, sets a threshold, and takes a first follow.
- **Flow**:
  1. Add the color sensor to the setup (`ColorSensor(Port.D)`) and confirm the actual port.
  2. Print `reflection()` over the **black tape**, then over the **white floor**; record both.
  3. Set BLACK, WHITE, and the threshold (their midpoint) on the worksheet.
  4. Run the starter; watch the robot follow the **edge** of the line.
  5. **Rotate roles ~halfway** through the block.
- **Off-robot task**: Navigator tapes/lays out the line course and predicts where it'll wobble.
- **Watch for**:
  - Low contrast surfaces — fix the tape/floor first or nothing works
  - Sensor mounted too high — it needs to face down, near the floor
  - Students treating 10/80 as "the answer" — those are guesses to measure
  - The robot following the *other* edge and running off — start it on the correct side
- **Tip**: get one team reading clean BLACK/WHITE values fast, then have them help neighbors.

## 10:25-10:35 — Energizer

- Quick *Debug the Dance* (full-group) or stretch-and-shake. Get everyone up and moving.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:30 — Robotics Block 2: Tune the Gain

- **Objective**: tune `GAIN` until the line-follow is smooth.
- **Flow**:
  1. Change **only GAIN**, run, watch, record the behavior on the worksheet.
  2. Too low → sloppy/drifts off; too high → wobbles. Hunt for "just right."
  3. If wobble persists, lower `DRIVE_SPEED` too — speed and gain interact.
  4. **Stretch (older teams, if two color sensors are free)**: steer from the *difference*
     between a left and right sensor (follows the line's center).
- **Watch for**:
  - Teams changing GAIN, speed, and threshold at once — change one thing at a time
  - Frustration that it's not perfectly smooth — "smooth-ish" is a win
  - Make sure the Tester is recording GAIN tries; that's the day's artifact
- **Tip**: a piece of tape with curves and a straightaway shows tuning differences clearly.

## 11:30-12:00 — Showcase + Cleanup

- **Showcase**: each team demos their **best run of the entire week** — a drive, a maze,
  a gyro turn, an obstacle dodge, or today's line-follow.
- **Prompts**:
  - "Show us your best run — what is it doing?"
  - "What's one thing you tuned, and how did you know it worked?"
  - "What was your favorite mission this week?"
- **Cleanup**: charge and pack the hubs.
- **Celebrate**: recap the five missions and name what each team built. This is the finale.

## General Tips Throughout

- **Calibrate, don't memorize**: never hand out "correct" BLACK/WHITE/GAIN numbers.
- **Follow the edge**: say it out loud so the normal wobble doesn't read as a fault.
- **Tune one thing at a time**: GAIN is the whole lesson — change only it between runs.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the code say?"
- **Everyone codes**: rotate roles and keep the off-robot task going so all four stay engaged.
- **Protect the showcase**: it's the payoff for the week — hard stop at 11:30.
