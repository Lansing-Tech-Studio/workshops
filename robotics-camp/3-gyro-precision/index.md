---
layout: default
title: "SPIKE Prime Robotics Camp #3: Gyro Precision"
workshop: SPIKE Prime Robotics Camp
comments: true
---

# Gyro Precision - 3 Hour Session

**Audience:** Students ages 9-14 (no coding experience needed) \
**Theme:** _"Give the robot an inner compass"_ \
**Series:** SPIKE Prime Robotics Camp (Day 3 of 5)

- [Slides]({{ site.baseurl }}/robotics-camp/3-gyro-precision/slides.html)
- Starter Code:
  - [Starter Code README]({{ site.baseurl }}/robotics-camp/3-gyro-precision/starter-code/README)
- Resources:
  - [Glossary]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/next-steps)
  - [Block Coding Guide]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/block-coding-guide)
  - [Learn More]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/learn-more)
- Student Handouts:
  - [Vocabulary]({{ site.baseurl }}/robotics-camp/3-gyro-precision/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/robotics-camp/3-gyro-precision/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/robotics-camp/3-gyro-precision/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/robotics-camp/3-gyro-precision/instructor-notes/timing-guide)

## The Mission

> **Today's mission:** Upgrade Techster's "inner compass" so turns and straights
> stay accurate.

Techster has been driving by guesswork — counting wheel-spins and hoping. Today we
turn on the **gyro** so the robot can _feel_ which way it's facing, then prove with a
chart that it makes turns more accurate. Heads up: the gyro isn't magic. A true full
turn might need `turn(357)` or `turn(362)` on _your_ hub — finding that number is the
whole activity.

## 1. Session Goals

By the end of this session, every student should be able to:

- Turn the gyro on with `robot.use_gyro(True)` and explain what it does
- Run the **same** move with the gyro **off** and **on**, and chart the difference
- Read the robot's **heading** with `hub.imu.heading()` (degrees, starts at 0)
- **Calibrate** a true 360° turn for their own hub (e.g. `turn(357)`) — and know it's per-hub
- Say _why_ turns drift without the gyro

## 2. Success Definition

A student is successful if they can say:

> "I used the gyro and showed it made my turns more accurate."

## 3. Environment & Prerequisites

- **Laptop:** Windows or Chromebook with **Chrome, Edge, or Chromium** (Web Bluetooth required — iPads and Firefox won't work)
- **Editor:** [code.pybricks.com](https://code.pybricks.com) — nothing to install
- **Robot:** the same pre-built two-motor driving base from Sessions 1-2; hub already flashed with Pybricks firmware (instructor did this once — see the [Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))

> **Two ways to code:** You can drag **blocks** or type **Python** — same robot,
> same ideas. The Python is shown below; the
> [Block Coding Guide]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/block-coding-guide)
> shows the matching blocks.

## 4. 3-Hour Agenda (Minute-by-Minute)

### 9:00-9:15 — Arrival Game: Debug the Drawing

> Spot the bug in a drawn instruction sequence

- Drop-in game while everyone arrives
- Show a drawn sequence of robot moves with one wrong step; teams find the bug
- Lesson in disguise: the robot follows the drawing _exactly_ — a small error throws off everything after it

### 9:15-9:25 — Mission Huddle + Catch-Up

> Meet today's mission and make sure everyone can drive and turn

- **Catch-up:** quick recap of driving (`straight`/`turn`) and the maze from Day 2, so late arrivals can connect, drive, and turn
- Today: turn on the gyro and _prove_ it makes turns more accurate
- Mantra: "Bugs are sensor data — the robot did what the code said"

### 9:25-10:25 — Robotics Block 1: Gyro Off vs. On

> Run the same move with the gyro off, then on, and chart the error

- Run your square (or a maze path) with the gyro **off** — measure how far off it ends up
- Add `robot.use_gyro(True)` and run the **exact same** code with the gyro **on**
- **Off-robot task:** chart the error (off vs. on) on the worksheet
- **Rotate roles ~halfway** (Coder, Builder, Navigator, Tester)
- Talk about _why_ the off run drifts and the on run holds straighter

### 10:25-10:35 — Energizer

> Get up and move

- _Algorithm Relay_ or stretch-and-shake

### 10:35-10:50 — Snack Break

- Keep food and drinks away from the kits and laptops

### 10:50-11:45 — Robotics Block 2: Calibrate the Turn

> Read the heading, then tune the turn value for a true 360°

- Print the heading with `hub.imu.heading()` and watch it change as the robot turns
- Run `robot.turn(360)` and check the heading — did it land back at 0?
- Tune the turn value (try `turn(357)`, `turn(362)`, …) until a full turn is _true_ on YOUR hub
- This per-hub fudge number is **calibration**, not a broken robot — record it on the worksheet

### 11:45-12:00 — Demo + Cleanup

> Show the gyro-off vs. gyro-on difference and pack up

- Each team shows the off-vs-on difference (voluntary)
- Label and charge hubs

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

- gyro, gyroscope, heading, IMU
- accuracy, drift, calibration, `DriveBase`, degree

### Handout 2: Mission Worksheet

- Gyro off-vs-on error chart
- Tuned true-360° turn value record
- Reflection

## 6. Instructor Guardrails

- The same robot carries over from Sessions 1-2 — reuse the existing hub/motor/DriveBase setup; don't rewrite it
- **Never** present a turn fudge like `turn(357)` as a correct answer — it's genuine per-hub calibration each team measures (expect roughly 355-363)
- Make sure **every** team measures **both** the gyro-off and gyro-on run — the comparison is the proof
- Frame the gyro's imperfection honestly: it's much better, not magic

## 7. Bridge to Session #4 (Obstacle Avoidance)

End with:

> "Techster turns accurately now — but it still follows a fixed script. Tomorrow we'll
> give it _eyes_ with the distance sensor, so it can react to the world and change what
> it does instead of just running the same moves."

## 8. Overarching Goals

- Make accuracy something students can _measure and prove_, not just hope for
- Build the habit of comparing two approaches with data (off vs. on)
- Introduce the gyro, headings, and reading a sensor value naturally
- Reinforce that real tuning numbers are per-robot — calibrate, don't memorize
