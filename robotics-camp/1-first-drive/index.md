---
layout: default
title: "SPIKE Prime Robotics Camp #1: First Drive"
workshop: SPIKE Prime Robotics Camp
comments: true
---

# First Drive - 3 Hour Session

**Audience:** Students ages 9-14 (no coding experience needed) \
**Theme:** _"Drive exactly this far, turn exactly this much"_ \
**Series:** SPIKE Prime Robotics Camp (Day 1 of 5)

- [Slides]({{ site.baseurl }}/robotics-camp/1-first-drive/slides.html)
- Starter Code:
  - [Starter Code README]({{ site.baseurl }}/robotics-camp/1-first-drive/starter-code/README)
- Resources:
  - [Glossary]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/next-steps)
  - [Block Coding Guide]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/block-coding-guide)
  - [Learn More]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/learn-more)
- Student Handouts:
  - [Vocabulary]({{ site.baseurl }}/robotics-camp/1-first-drive/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/robotics-camp/1-first-drive/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/robotics-camp/1-first-drive/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/robotics-camp/1-first-drive/instructor-notes/timing-guide)

## The Mission

> **Today's mission:** Teach Techster to move on command — drive a set distance,
> turn a set angle, and trace a square.

Techster does _exactly_ what your code says. Today you learn the two commands that
make it move — `straight()` and `turn()` — and discover that the robot needs your
help to learn how big its own wheels are.

## 1. Session Goals

By the end of this session, every student should be able to:

- Connect a SPIKE Prime hub to [code.pybricks.com](https://code.pybricks.com) over Bluetooth and run a program
- Make the robot drive a chosen distance in **millimeters** with `straight()`
- Make the robot turn a chosen angle in **degrees** with `turn()`
- Use a `for` loop to repeat moves (to trace a square)
- **Calibrate** the robot: measure what it actually does and adjust the numbers

## 2. Success Definition

A student is successful if they can say:

> "I connected to my robot and made it drive a distance and turn an angle I chose."

## 3. Environment & Prerequisites

- **Laptop:** Windows or Chromebook with **Chrome, Edge, or Chromium** (Web Bluetooth required — iPads and Firefox won't work)
- **Editor:** [code.pybricks.com](https://code.pybricks.com) — nothing to install
- **Robot:** pre-built two-motor driving base; hub already flashed with Pybricks firmware (instructor did this once — see the [Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))

> **Two ways to code:** You can drag **blocks** or type **Python** — same robot,
> same ideas. The Python is shown below; the
> [Block Coding Guide]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/block-coding-guide)
> shows the matching blocks.

## 4. 3-Hour Agenda (Minute-by-Minute)

### 9:00-9:15 — Arrival Game: Human Robot

> Drive a teammate to a target using only exact step commands

- Drop-in game while everyone arrives
- One student is the "robot"; teammates give _literal_ commands ("step forward 2 steps, turn right")
- Lesson in disguise: the robot only does exactly what you say

### 9:15-9:25 — Mission Huddle

> Meet Techster and today's mission

- Meet the robot and name your hub
- Today: make Techster drive a distance, turn an angle, and trace a square
- Mantra: "Bugs are sensor data — the robot did what the code said"

### 9:25-10:25 — Robotics Block 1: Connect & First Moves

> Connect over Bluetooth and run your first `straight()` and `turn()`

- Open [code.pybricks.com](https://code.pybricks.com) and **connect** to your hub (pick your hub's name from the Bluetooth list)
- Run a one-line program: `robot.straight(200)` — watch it drive
- Try `robot.turn(90)` — which way did it go? (positive = clockwise / right)
- If it drives backward, flip a motor's `Direction` (this is normal per-build tuning)
- **Rotate roles ~halfway** (Coder, Builder, Navigator, Tester)
- **Off-robot task:** sketch the square path on paper and predict each command first

### 10:25-10:35 — Energizer

> Get up and move

- _Algorithm Relay_ or stretch-and-shake

### 10:35-10:50 — Snack Break

- Keep food and drinks away from the kits and laptops

### 10:50-11:45 — Robotics Block 2: Calibrate & Drive a Square

> Measure what the robot really does, then trace a square

- **Calibration:** run `robot.straight(1000)`, measure how far it _actually_ went, and adjust `wheel_diameter`
- Then run `robot.turn(360)` and adjust `axle_track` until it spins in place once
- Record your measured values on the worksheet
- Use a `for` loop to drive a square (4 × straight + turn)
- Test, measure, adjust — that's the whole game

### 11:45-12:00 — Demo + Cleanup

> Show your best drive and pack up

- Each team shows a drive-and-turn of their choice (voluntary)
- Label and charge hubs

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

- `DriveBase`, `Motor`, port, millimeter, degree
- `wheel_diameter`, `axle_track`, calibration, `for` loop

### Handout 2: Mission Worksheet

- Predict-the-square sketch
- Calibration record table (measured distance and turn)
- Reflection

## 6. Instructor Guardrails

- Robots are pre-built, so there's no build time — but budget 10–15 min for first-time Bluetooth connecting
- **Never** present `wheel_diameter=56` / `axle_track=112` as correct answers — they're _starting guesses_ the team calibrates
- Ports and `Direction` depend on the build; expect to flip a `Direction` so the robot drives forward
- Celebrate the first successful drive — it's a big moment

## 7. Bridge to Session #2 (Maze Runner)

End with:

> "Techster can drive and turn now. Tomorrow we'll give those moves _names_ —
> like `forward_one_cell()` and `turn_right()` — and string them together to solve
> a maze."

## 8. Overarching Goals

- Make the robot feel like a precise tool that does exactly what it's told
- Build the habit of measuring and adjusting instead of guessing
- Introduce distance (mm), angle (degrees), and the `for` loop naturally
- Give every student a first successful "I made the robot move" moment
