---
layout: default
title: "SPIKE Prime Robotics Camp #5: Line Following"
workshop: SPIKE Prime Robotics Camp
comments: true
---

# Line Following + Showcase - 3 Hour Session

**Audience:** Students ages 9-14 (no coding experience needed) \
**Theme:** _"Steer in proportion to how far off you are"_ \
**Series:** SPIKE Prime Robotics Camp (Day 5 of 5)

- [Slides]({{ site.baseurl }}/robotics-camp/5-line-following/slides.html)
- Starter Code:
  - [Starter Code README]({{ site.baseurl }}/robotics-camp/5-line-following/starter-code/README)
- Resources:
  - [Glossary]({{ site.baseurl }}/robotics-camp/5-line-following/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/robotics-camp/5-line-following/resources/next-steps)
  - [Block Coding Guide]({{ site.baseurl }}/robotics-camp/5-line-following/resources/block-coding-guide)
  - [Learn More]({{ site.baseurl }}/robotics-camp/5-line-following/resources/learn-more)
- Student Handouts:
  - [Vocabulary]({{ site.baseurl }}/robotics-camp/5-line-following/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/robotics-camp/5-line-following/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/robotics-camp/5-line-following/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/robotics-camp/5-line-following/instructor-notes/timing-guide)

## The Mission

> **Today's mission:** Teach your robot to follow a line — then demo everything you
> built this week at the showcase.

The robot has a color sensor that can read how much light bounces back off the floor.
Today you'll turn that one number into smooth steering: the farther the robot drifts
off the edge of the line, the harder it steers back. That idea is called
**proportional control**, and tuning it is the whole game. Then we celebrate the week.

## 1. Session Goals

By the end of this session, every student should be able to:

- Read reflected light with `line_sensor.reflection()` (a number from **0 to 100**)
- Measure the **BLACK** (line) and **WHITE** (floor) readings and compute a **threshold**
- Make the robot follow the **edge** of a line using `robot.drive(speed, turn_rate)`
- Tune **GAIN** so the line-follow is smooth (too low = sloppy, too high = wobbly)
- Demo their best run of the week at the showcase

## 2. Success Definition

A student is successful if they can say:

> "My robot followed a line, and I explained how I tuned it."

## 3. Environment & Prerequisites

- **Laptop:** Windows or Chromebook with **Chrome, Edge, or Chromium** (Web Bluetooth required — iPads and Firefox won't work)
- **Editor:** [code.pybricks.com](https://code.pybricks.com) — nothing to install
- **Robot:** the same two-motor driving base from the week, with a **color sensor**
  mounted facing down at the front; hub already flashed with Pybricks firmware (see the
  [Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))
- **Surface:** the line needs **contrast** — use **black electrical tape on white**
  poster board or a light floor

> **Two ways to code:** You can drag **blocks** or type **Python** — same robot,
> same ideas. The Python is shown below; the
> [Block Coding Guide]({{ site.baseurl }}/robotics-camp/5-line-following/resources/block-coding-guide)
> shows the matching blocks.

## 4. 3-Hour Agenda (Minute-by-Minute)

### 9:00-9:15 — Arrival Game: Debug the Dance

> Fix a movement sequence that has a deliberate bug

- Drop-in game while everyone arrives
- A short dance/move sequence is written down with one obvious mistake in it
- Students spot and fix the bug — pre-teaching "the robot did exactly what the steps said"

### 9:15-9:25 — Mission Huddle + Catch-Up

> Meet today's mission and recap the week so far

- **Catch-up:** quick recap of sensors and decisions from Day 4 so every team can
  read a sensor and react before we add steering
- Today: teach the robot to follow a line using its color sensor, then showcase the week
- Mantra: "Bugs are sensor data — the robot did what the code said"

### 9:25-10:25 — Robotics Block 1: Calibrate & First Follow

> Read the sensor on the line and the floor, then take a first follow

- Add the **color sensor** to the setup (`ColorSensor(Port.D)`)
- Print `line_sensor.reflection()` while you hold the sensor over the **black tape**, then over the **white floor** — write both numbers down
- Set `BLACK`, `WHITE`, and the `threshold` (their midpoint) on the worksheet
- Run the starter and watch the robot follow the **edge** of the line
- **Rotate roles ~halfway** (Coder, Builder, Navigator, Tester)
- **Off-robot task:** lay out and tape the line course, and predict where the robot will wobble

### 10:25-10:35 — Energizer

> Get up and move

- _Debug the Dance_ (full-group version) or stretch-and-shake

### 10:35-10:50 — Snack Break

- Keep food and drinks away from the kits and laptops

### 10:50-11:30 — Robotics Block 2: Tune the Gain

> Experiment with GAIN until the line-follow is smooth

- Change only **GAIN** and watch what happens — this is the whole point
- Too low → the robot is **sloppy** and drifts off the line
- Too high → the robot **wobbles** back and forth
- Find the value that's _just right_ and record your tries on the worksheet
- **Stretch (older students, if two color sensors are free):** steer from the _difference_ between a left and right sensor

### 11:30-12:00 — Showcase + Cleanup

> Each team demos their best run of the week — the camp finale

- Each team shows their **best run from the whole week** (a drive, a maze, a gyro turn, an obstacle dodge, or today's line-follow)
- Explain one thing you tuned and how you knew it worked
- Charge and pack the hubs

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

- `ColorSensor`, reflection, threshold, proportional control
- `GAIN`, deviation, edge of the line, calibration

### Handout 2: Mission Worksheet

- BLACK and WHITE reflection readings + computed threshold
- GAIN tuning table (try / behavior)
- Week-in-review reflection

## 6. Instructor Guardrails

- The line needs **contrast** — black electrical tape on white poster board or a light floor; test it before students arrive
- **Never** present `BLACK=10` / `WHITE=80` / `GAIN=1.2` as correct answers — they're _starting guesses_ each team measures and tunes
- This program follows the **edge** of the line, not the center — say so, or the wobble will confuse students
- Experimenting with `GAIN` _is_ the lesson — protect the time for it
- Leave a hard stop for the showcase; it's the payoff for the whole week

## 7. Showcase & What Comes Next

This is the finale. Take a minute to look back at everything your robot learned:

1. **First Drive** — drove a calibrated distance, turned an angle, traced a square
2. **Maze Runner** — solved a maze with named, reusable moves (functions)
3. **Gyro Precision** — used the gyro for straighter, more accurate turns
4. **Obstacle Avoidance** — sensed the world and changed its behavior with `if`/`else`
5. **Line Following** — followed a line with proportional control (today!)

End with:

> "You taught a robot to drive, solve a maze, steer by its inner compass, dodge
> obstacles, and follow a line — and you can explain _how_. That's real robotics."

Keep going after camp with the
[Learn More]({{ site.baseurl }}/robotics-camp/resources/learn-more) page.

## 8. Overarching Goals

- Turn one sensor reading into smooth, continuous control (proportional steering)
- Cement the week's core habit: measure on the real surface, then tune — don't memorize
- Give every student a confident "here's what I built and how I tuned it" showcase moment
- End the week on a celebration of everything the robot — and the team — can do
