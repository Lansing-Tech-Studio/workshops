---
layout: default
title: "SPIKE Prime Robotics Camp #2: Maze Runner"
workshop: SPIKE Prime Robotics Camp
comments: true
---

# Maze Runner - 3 Hour Session

**Audience:** Students ages 9-14 (no coding experience needed) \
**Theme:** _"Name your moves, then string them together"_ \
**Series:** SPIKE Prime Robotics Camp (Day 2 of 5)

- [Slides]({{ site.baseurl }}/robotics-camp/2-maze-runner/slides.html)
- Starter Code:
  - [Starter Code README]({{ site.baseurl }}/robotics-camp/2-maze-runner/starter-code/README)
- Resources:
  - [Glossary]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/next-steps)
  - [Block Coding Guide]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/block-coding-guide)
  - [Learn More]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/learn-more)
- Student Handouts:
  - [Vocabulary]({{ site.baseurl }}/robotics-camp/2-maze-runner/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/robotics-camp/2-maze-runner/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/robotics-camp/2-maze-runner/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/robotics-camp/2-maze-runner/instructor-notes/timing-guide)

## The Mission

> **Today's mission:** Get your robot through a taped-floor maze without touching the
> walls — by breaking the path into _named_ moves and stringing them together.

The robot already drives and turns. Today you give those moves _names_ — like
`forward_one_cell()` and `turn_right()` — so a long path reads like a list of
instructions. Naming a move once and reusing it is called writing a **function**.

## 1. Session Goals

By the end of this session, every student should be able to:

- Reconnect a SPIKE Prime hub to [code.pybricks.com](https://code.pybricks.com) and get the robot driving again
- Define a **function** with `def name():` to name a reusable move
- Call a function by writing its name with parentheses, like `forward_one_cell()`
- Build a **sequence** of named moves that runs top to bottom to solve a maze
- Calibrate `forward_one_cell()` to the maze's actual **cell** size

## 2. Success Definition

A student is successful if they can say:

> "I broke a path into named steps and my robot completed the maze."

## 3. Environment & Prerequisites

- **Laptop:** Windows or Chromebook with **Chrome, Edge, or Chromium** (Web Bluetooth required — iPads and Firefox won't work)
- **Editor:** [code.pybricks.com](https://code.pybricks.com) — nothing to install
- **Robot:** the same pre-built two-motor driving base from Day 1, with its calibrated `wheel_diameter` / `axle_track` values (instructor flashed the firmware once — see the [Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware))

> **Two ways to code:** You can drag **blocks** or type **Python** — same robot,
> same ideas. The Python is shown below; the
> [Block Coding Guide]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/block-coding-guide)
> shows the matching blocks.
>
> **New to the camp today?** No problem — the mission huddle includes a quick
> catch-up so you can connect, drive, and turn before we name our moves.

## 4. 3-Hour Agenda (Minute-by-Minute)

### 9:00-9:15 — Arrival Game: Maze on Paper

> Plan a path through a paper grid before any robot moves

- Drop-in game while everyone arrives
- On a printed grid, draw a path from start to finish as a list of moves ("forward, turn right, forward, forward")
- Lesson in disguise: a solved maze is just a **sequence** of moves

### 9:15-9:25 — Mission Huddle + Catch-Up

> Recap driving and today's mission — and get late arrivals rolling

- **Catch-up:** quick recap of connecting, `straight()`, `turn()`, and the calibrated values so a new student can get a robot moving
- Today: name your moves as **functions**, then sequence them to solve a maze
- Mantra: "Bugs are sensor data — the robot did what the code said"

### 9:25-10:25 — Robotics Block 1: Name Your Moves

> Write the named move functions and tape a maze for another team

- Reconnect to your hub and confirm the robot still drives and turns
- Write three functions: `forward_one_cell()`, `turn_right()`, `turn_left()`
- Call them one at a time to test that each does what its name says
- **Off-robot task:** tape a maze on the floor for _another_ team to solve
- **Rotate roles ~halfway** (Coder, Builder, Navigator, Tester)

### 10:25-10:35 — Energizer

> Get up and move

- _Algorithm Relay_ or _Debug the Dance_
  - _Algorithm Relay:_ teams line up; one student at a time runs to the board and adds the next move (`forward`, `turn left`, etc.) to a sequence that drives an imaginary robot to a target square, then tags the next runner. First team to a working sequence wins.

### 10:35-10:50 — Snack Break

- Keep food and drinks away from the kits and laptops

### 10:50-11:45 — Robotics Block 2: Solve the Maze

> Sequence the named moves to clear another team's maze

- Walk the maze you were given and plan the path on paper (Navigator)
- Calibrate `forward_one_cell()` to the maze's real cell size: drive one cell, measure, adjust
- Write the solution as a readable **sequence** of named moves
- Test, watch where it bumps a wall, fix that step, run again

### 11:45-12:00 — Demo + Cleanup

> Watch the mazes get solved and pack up

- Each team runs its robot through the maze it was given (voluntary)
- Label and charge hubs

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

- function, define, call, sequence
- `forward_one_cell`, `turn_right`, `turn_left`, maze, cell

### Handout 2: Mission Worksheet

- Plan-the-path maze grid
- Cell-size record table (try / measure / adjust)
- Reflection

## 6. Instructor Guardrails

- This is a **cumulative** camp — open with the catch-up so a late arrival can connect and drive before functions start
- Reuse the Day 1 hub / motor / `DriveBase` setup; don't rewrite it from scratch
- The maze **cell size** is a calibration value — set `forward_one_cell()` to the team's actual cell size and adjust after a test run; never present 250 mm as a correct answer
- Encourage planning on paper before typing — the Navigator earns their keep today
- Celebrate the first clean maze run — that's the moment the named moves "click"

## 7. Bridge to Session #3 (Gyro Precision)

End with:

> "Your named moves solved the maze, but did every turn land _exactly_ right?
> Tomorrow we'll give the robot an inner compass — the **gyro** — so its turns stay
> accurate even over a long path."

## 8. Overarching Goals

- Show that a program is a **sequence** — it runs top to bottom, one step at a time
- Introduce **functions** as a way to name a move once and reuse it everywhere
- Reinforce the calibrate-don't-memorize habit with the maze cell size
- Give every student the satisfaction of a robot completing a maze they planned
