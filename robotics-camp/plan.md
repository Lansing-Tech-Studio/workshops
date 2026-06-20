---
layout: default
title: SPIKE Prime Robotics Camp — Camp Plan
---

# SPIKE Prime Robotics Camp — Camp Plan

**Audience:** Students ages 9–14, no coding experience required
**Format:** 5 daily sessions, 3 hours each (9:00 a.m.–12:00 p.m.)
**Camp Theme:** _"Teach the robot to do exactly what you mean"_
**Platform:** LEGO SPIKE Prime + Pybricks (block coding or Python), in-browser over Bluetooth

## Camp Overview

Teams program a LEGO SPIKE Prime robot ("Techster") across five mornings. Each day
is a mission that upgrades the robot's abilities, and the camp is **cumulative** —
the same robot and code grow all week. Because cumulative camps make it easy to
fall behind, **Days 2–5 open with a short catch-up warm-up** that re-establishes
the shared robot/code state so a late arrival isn't lost.

| Session | Title | Core Skill | One-Liner |
|---------|-------|------------|-----------|
| 1 | First Drive | Driving by distance and angle | "Drive exactly this far, turn exactly this much" |
| 2 | Maze Runner | Sequencing and functions | "Name your moves, then string them together" |
| 3 | Gyro Precision | Using the gyroscope | "Give the robot an inner compass" |
| 4 | Obstacle Avoidance | Sensors and decisions | "React to the world instead of a fixed script" |
| 5 | Line Following | Proportional control | "Steer in proportion to how far off you are" |

## The Robot: Techster

A standard two-motor SPIKE Prime driving base with a color sensor and an
ultrasonic (distance) sensor from the base set.

**Why this platform:**

- A _literal_ robot is a perfect teacher — it does exactly what the code says, so
  bugs become readable "sensor data" instead of mysteries
- Pybricks needs no local install (in-browser over Web Bluetooth) and supports both
  block coding and Python, covering the 9–14 age range with one tool
- Each session produces a satisfying, demonstrable result (a drive, a solved maze, a
  followed line)
- The same robot and concepts carry from Day 1 through the Day 5 showcase

**Robot's evolution across the week:**

- After Session 1: drives a calibrated distance, turns an angle, traces a square
- After Session 2: solves a maze using named, reusable moves (functions)
- After Session 3: uses the gyro for straighter, more accurate turns
- After Session 4: senses obstacles and changes its behavior in response
- After Session 5: follows a line, demoed at the showcase

## Tools and Environment

**Editor:** [code.pybricks.com](https://code.pybricks.com) in Chrome / Edge / Chromium
**Connection:** Web Bluetooth (one-time USB firmware install per hub — see the
[Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))
**Two tracks:** block coding (younger/newer) and text Python (older/ready-to-type),
same concepts either way
**Hardware:** 3 SPIKE Prime kits / 12 students / teams of 4, robots pre-built

## Daily Rhythm (180 minutes)

Every session follows the same skeleton. Per-session details are in each
`instructor-notes/timing-guide.md`.

| Time | Block | Notes |
|------|-------|-------|
| 9:00–9:15 | Arrival game | Drop-in; runs until everyone arrives |
| 9:15–9:25 | Mission huddle | Recap + today's mission; Days 2–5 include a quick catch-up |
| 9:25–10:25 | Robotics Block 1 | Rotate roles ~halfway |
| 10:25–10:35 | Energizer | Get up and move |
| 10:35–10:50 | Snack break | Check allergies; keep food away from kits/laptops |
| 10:50–11:45 | Robotics Block 2 / challenge | Main build-and-test |
| 11:45–12:00 | Demo + cleanup | Show-and-tell, label/charge hubs |

**Arrival-game menu** (each doubles as pre-teaching): _Human Robot_ (give a teammate
literal step commands to a target), _Robot Says_ (Simon Says with movement
commands), _Speed Build_, _Maze on Paper_, _Debug the Drawing_.

**Energizer menu:** _Algorithm Relay_, _Red Light / Green Light_ (a great lead-in to
the Day 4 distance-sensor stop), stretch-and-shake, _Debug the Dance_ (a movement
sequence with a deliberate bug to fix).

---

## Session 1: First Drive

**Duration:** 3 hours
**Mission:** Teach Techster to move on command — drive a set distance, turn a set
angle, and trace a square.

### Success Definition

> "I connected to my robot and made it drive a distance and turn an angle I chose."

### What Students Will Learn

- How to connect a hub to code.pybricks.com over Bluetooth and run a program
- Distance is measured in **millimeters**, turns in **degrees**
- Positive = forward / clockwise (right); negative = backward / left
- The `for` loop (repeat a set of moves)
- **Calibration**: starting values are guesses you measure and adjust, not truths

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 9:00–9:15 | Arrival: _Human Robot_ | Give a teammate literal step commands to reach a target — pre-teaches "exact instructions" |
| 9:15–9:25 | Mission huddle | Meet Techster; today we make it drive and turn |
| 9:25–10:25 | Block 1: Connect & first moves | Connect over Bluetooth; run `straight()` and `turn()`; off-robot: sketch and predict the square |
| 10:25–10:50 | Energizer + snack | |
| 10:50–11:45 | Block 2: Calibrate & drive a square | Drive `straight(1000)` and `turn(360)`, measure, adjust `wheel_diameter`/`axle_track`; run the square |
| 11:45–12:00 | Demo + cleanup | Each team shows a drive-and-turn of their choice; label/charge hubs |

### Takeaway

- A robot that drives a calibrated distance and turns an angle the team chose
- The team's measured `wheel_diameter` and `axle_track` values recorded on the worksheet

### Instructor Notes

- Robots are pre-built, so there is no build block — but expect 10–15 min of
  first-time Bluetooth connection friction. Name and label hubs ahead of time.
- Ports and `Direction` depend on how the motors are mounted; verify per robot.
- Treat `wheel_diameter` / `axle_track` strictly as **calibration activities**.
  Never present 56 / 112 mm as correct answers — they're starting guesses.

---

## Session 2: Maze Runner

**Duration:** 3 hours
**Mission:** Get Techster through a taped-floor maze without touching the walls.

### Success Definition

> "I broke a path into named steps and my robot completed the maze."

### What Students Will Learn

- Sequencing: a program runs top to bottom, one step at a time
- Reusing `for` loops from Session 1
- **Functions**: give a move a name (`forward_one_cell()`, `turn_right()`) and reuse it
- How naming moves makes a long path readable

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 9:00–9:15 | Arrival: _Maze on Paper_ | Plan a path through a paper grid |
| 9:15–9:25 | Mission huddle + **catch-up** | Recap driving/calibration so late arrivals can connect and drive |
| 9:25–10:25 | Block 1: Name your moves | Write `forward_one_cell()`, `turn_right()`, `turn_left()`; off-robot: tape a maze for another team |
| 10:25–10:50 | Energizer + snack | |
| 10:50–11:45 | Block 2: Solve the maze | Sequence the named moves to clear another team's maze |
| 11:45–12:00 | Demo + cleanup | Teams watch each other's robots run the mazes |

### Takeaway

- A maze-solving program written as a readable sequence of named moves
- Experience defining and calling functions

### Instructor Notes

- The maze cell size is a calibration value — set `forward_one_cell()` to the
  team's actual cell size and adjust after a test run.
- Encourage planning on paper (Navigator role) before typing.
- Reuse the Session 1 hub/motor/DriveBase setup; don't rewrite it from scratch.

---

## Session 3: Gyro Precision

**Duration:** 3 hours
**Mission:** Upgrade Techster's "inner compass" so turns and straights stay accurate.

### Success Definition

> "I used the gyro and showed it made my turns more accurate."

### What Students Will Learn

- What a gyroscope measures and why turns drift without it
- Turning the gyro on with `use_gyro(True)`
- Reading a heading with `hub.imu.heading()` (degrees, positive = clockwise, starts at 0)
- That the gyro isn't perfect — a true 360° may need `turn(357)` or `turn(362)`

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 9:00–9:15 | Arrival: _Debug the Drawing_ | Spot the bug in a drawn instruction sequence |
| 9:15–9:25 | Mission huddle + **catch-up** | Recap the maze; make sure every team can drive and turn |
| 9:25–10:25 | Block 1: Gyro on vs. off | Run the same square/maze with the gyro off, then on; off-robot: chart the error |
| 10:25–10:50 | Energizer + snack | |
| 10:50–11:45 | Block 2: Calibrate the turn | Read the heading; tune the turn value for a true 360° |
| 11:45–12:00 | Demo + cleanup | Teams show the gyro-off vs. gyro-on difference |

### Takeaway

- A robot whose turns are measurably more accurate with the gyro on
- A chart comparing error with the gyro off vs. on

### Instructor Notes

- The gyro fudge factor (e.g., `turn(357)`) is genuine per-hub calibration — frame
  the tuning as the activity, not a failure.
- The off-vs-on comparison is the proof; make sure each team measures both.

---

## Session 4: Obstacle Avoidance

**Duration:** 3 hours
**Mission:** Give Techster eyes — react to the world instead of following a fixed script.

### Success Definition

> "My robot sensed an obstacle and changed what it did."

### What Students Will Learn

- Reading a sensor value (`UltrasonicSensor.distance()`, in mm; 2000 mm = nothing detected)
- Making decisions with `if` / `else`
- Repeating a check forever with a `while` loop
- The shift from a fixed script to sensor-driven behavior

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 9:00–9:15 | Arrival: _Red Light / Green Light_ | Pre-teaches "stop when you sense something" |
| 9:15–9:25 | Mission huddle + **catch-up** | Recap driving; make sure the distance sensor is mounted and reads values |
| 9:25–10:25 | Block 1: Read the sensor | Print `distance()`; watch the number change; off-robot: build the cardboard obstacle course |
| 10:25–10:50 | Energizer + snack | |
| 10:50–11:45 | Block 2: React with if/else + while | Back up and turn when something is close; challenge: don't fall off the table |
| 11:45–12:00 | Demo + cleanup | Robots run the obstacle course |

### Takeaway

- A robot that drives until it senses an obstacle, then changes behavior
- First use of `if`/`else` and `while`

### Instructor Notes

- The trigger distance (e.g., 200 mm) is a tuning value — measure on the actual
  course and adjust.
- `while True:` loops run forever; teach how to stop the program from the editor.
- Confirm the distance sensor's actual port before coding.

---

## Session 5: Line Following + Showcase

**Duration:** 3 hours
**Mission:** Teach Techster to follow a line, then demo everything to the group.

### Success Definition

> "My robot followed a line, and I explained how I tuned it."

### What Students Will Learn

- Reflected light: `ColorSensor.reflection()` returns 0–100%
- A **threshold** is the midpoint between the line and the floor readings
- **Proportional control**: steer in proportion to how far off the line you are
- Tuning `GAIN`: too low = sloppy, too high = wobbly

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 9:00–9:15 | Arrival: _Debug the Dance_ | Fix a movement sequence with a deliberate bug |
| 9:15–9:25 | Mission huddle + **catch-up** | Recap sensors and decisions |
| 9:25–10:25 | Block 1: Calibrate & first follow | Read `reflection()` on the line and the floor; set `BLACK`/`WHITE`/threshold |
| 10:25–10:50 | Energizer + snack | |
| 10:50–11:30 | Block 2: Tune the gain | Experiment with `GAIN` until the line-follow is smooth |
| 11:30–12:00 | **Showcase** + cleanup | Each team demos their best run of the week; charge/pack hubs |

### Takeaway

- A robot that follows a line using proportional control
- A team that can explain their calibration and `GAIN` tuning
- A week-ending showcase of every mission

### Instructor Notes

- Needs contrast: **black electrical tape on white** poster board or a light floor.
- `BLACK`, `WHITE`, and `GAIN` are real tuning values measured on the actual tape —
  there are no universal numbers; experimenting with `GAIN` is the whole point.
- Stretch for older students (if two color sensors are free): steer from the
  _difference_ between a left and right sensor.
- Leave a hard stop for the showcase — it's the payoff for the week.

---

## Camp-Wide Notes

### Recurring Elements

- **"Bugs are sensor data."** In every session, when the robot misbehaves, ask
  "what did the code actually tell it to do?" rather than "what's broken?"
- **Calibrate, don't memorize.** Wheel size, axle track, maze cell size, gyro turn
  fudge, trigger distance, and line thresholds/gain are all **measured on the actual
  robot and surface** — never hardcoded as truths.
- **Roles rotate** (~every 20 min) and **every block has an off-robot task** so all
  four teammates stay engaged.
- **Each session ends with a demo** (voluntary, informal) building toward the Day 5
  showcase.

### Differentiation by Age

| Concept | Ages 9–11 (blocks) | Ages 12–14 (Python) |
|---------|--------------------|----------------------|
| Writing code | Drag blocks in Pybricks block mode | Type Python in the editor |
| Loops | "Repeat" block | `for` / `while` |
| Functions | "My Blocks" / named stacks | `def name():` |
| Decisions | "If / else" block | `if` / `else` |
| Calibration | Same measure-and-adjust activity, fewer values at once | Full set of values, tune more independently |

The `resources/block-coding-guide.md` in each session gives the block-by-block
equivalent of that day's Python.

### Materials to Prepare

- [ ] 3 SPIKE Prime kits, robots pre-built (standard two-motor base)
- [ ] Hubs flashed with Pybricks firmware, named, and labeled
- [ ] 3+ Windows/Chromebook laptops with Chrome/Edge tested on code.pybricks.com
- [ ] 1 micro-USB cable (firmware install) kept on hand
- [ ] Painters' tape for mazes
- [ ] Black electrical tape + white poster board for line following
- [ ] Cardboard / blocks for the obstacle course
- [ ] Rulers / measuring tape for calibration
- [ ] Whiteboards / paper for pseudocode
- [ ] Printed worksheets and vocabulary sheets per session

### What Comes Next

After camp, students can:
- Add a third motor or an attachment (claw, marker) and program it
- Combine skills — a maze solver that also avoids obstacles
- Explore the full [Pybricks documentation](https://docs.pybricks.com) and example
  programs
- Move from blocks to Python (or from Python to their own original projects)
