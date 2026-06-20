---
layout: default
title: "SPIKE Prime Robotics Camp #4: Obstacle Avoidance"
workshop: SPIKE Prime Robotics Camp
comments: true
---

# Obstacle Avoidance - 3 Hour Session

**Audience:** Students ages 9-14 (no coding experience needed) \
**Theme:** _"React to the world, not a script"_ \
**Series:** SPIKE Prime Robotics Camp (Day 4 of 5)

- [Slides]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/slides.html)
- Starter Code:
  - [Starter Code README]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/starter-code/README)
- Resources:
  - [Glossary]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/next-steps)
  - [Block Coding Guide]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/block-coding-guide)
  - [Learn More]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/learn-more)
- Student Handouts:
  - [Vocabulary]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/instructor-notes/timing-guide)

## The Mission

> **Today's mission:** Give Techster eyes — react to the world instead of
> following a fixed script.

Until now Techster did the same moves every time, no matter what was in front of
it. Today you add a **distance sensor** and teach the robot to _decide_: if
something's close, do one thing; otherwise, do another. The robot stops following
your script and starts reacting to the room.

## 1. Session Goals

By the end of this session, every student should be able to:

- Read a sensor value with `eyes.distance()` (in **millimeters**)
- Use `if` / `else` to make the robot **decide** based on what it senses
- Use a `while` loop to keep checking the sensor over and over
- Tune the **trigger distance** by measuring on the real obstacle course
- Explain the shift from a fixed script to **sensor-driven** behavior

## 2. Success Definition

A student is successful if they can say:

> "My robot sensed an obstacle and changed what it did."

## 3. Environment & Prerequisites

- **Laptop:** Windows or Chromebook with **Chrome, Edge, or Chromium** (Web Bluetooth required — iPads and Firefox won't work)
- **Editor:** [code.pybricks.com](https://code.pybricks.com) — nothing to install
- **Robot:** the same two-motor driving base from earlier sessions, now with the **ultrasonic (distance) sensor** mounted and plugged in; hub already flashed with Pybricks firmware (see the [Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))

> **Two ways to code:** You can drag **blocks** or type **Python** — same robot,
> same ideas. The Python is shown below; the
> [Block Coding Guide]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/block-coding-guide)
> shows the matching blocks.

## 4. 3-Hour Agenda (Minute-by-Minute)

### 9:00-9:15 — Arrival Game: Red Light / Green Light

> Stop the instant you sense the signal

- Drop-in game while everyone arrives
- "Green light" = move, "red light" = freeze; out if you move on red
- Lesson in disguise: you keep checking a signal and **react** — exactly what a sensor loop does

### 9:15-9:25 — Mission Huddle + Catch-Up

> Meet today's mission and get every robot sensing

- **Catch-up warm-up:** recap driving; make sure the distance sensor is **mounted and reads values** so late arrivals are ready
- Today: teach Techster to sense an obstacle and change what it does
- Mantra: "Bugs are sensor data — the robot did what the code said"

### 9:25-10:25 — Robotics Block 1: Read the Sensor

> Print the distance and watch the number change

- Add the **distance sensor** to your setup (`UltrasonicSensor`) on its actual port
- Run a tiny program that prints `eyes.distance()` and watch the number change as you move your hand toward it
- Notice it reads **2000 mm when nothing is in front** of it
- **Rotate roles ~halfway** (Coder, Builder, Navigator, Tester)
- **Off-robot task:** build the cardboard **obstacle course**

### 10:25-10:35 — Energizer

> Get up and move

- _Red Light / Green Light_ round two, or stretch-and-shake

### 10:35-10:50 — Snack Break

- Keep food and drinks away from the kits and laptops

### 10:50-11:45 — Robotics Block 2: React with if/else + while

> Drive forward, but back up and turn when something's close

- Wrap a `while True:` loop around a check of `eyes.distance()`
- `if` something is closer than your trigger → back up and turn; `else` → drive forward
- **Tune the trigger distance** by measuring on the course (start near 200 mm and adjust)
- **Challenge:** don't fall off the table (stop or turn a hair from the edge / wall)
- Stop the program with the editor's **Stop** button — `while True:` runs forever

### 11:45-12:00 — Demo + Cleanup

> Run the obstacle course and pack up

- Each team runs the obstacle course (voluntary)
- Label and charge hubs

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

- sensor, `UltrasonicSensor`, distance, condition
- `if`, `else`, `while` loop, `wait`

### Handout 2: Mission Worksheet

- Trigger-distance record (try / measure / adjust)
- Predict the robot's behavior from an `if`/`else`
- Design an obstacle course
- Reflection

## 6. Instructor Guardrails

- Confirm the distance sensor's **actual port** before anyone codes — it varies per build
- **Never** present `200` mm as the correct trigger distance — it's a _starting guess_ the team measures on the real course
- `while True:` loops run forever; teach students to stop the program from the editor's Stop button before they start
- `distance()` returns **2000 mm when nothing is detected** — that's the no-object reading, not a bug

## 7. Bridge to Session #5 (Line Following + Showcase)

End with:

> "Techster can react to obstacles now. Tomorrow we'll teach it to _follow a line_
> using the color sensor — steering in proportion to how far off it is — and then
> we'll show off everything we built all week."

## 8. Overarching Goals

- Move students from a fixed script to **reacting to the world** with a sensor
- Introduce `if`/`else` decisions and the `while` loop naturally, through a mission
- Reinforce the calibrate-don't-memorize habit with the trigger distance
- Give every student an "my robot noticed something and changed" moment
