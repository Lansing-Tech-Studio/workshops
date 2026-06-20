---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Maze Runner Timing Guide (3 Hours)

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
**Goal**: Define and call functions, then sequence named moves to solve a maze.

## 9:00-9:15 — Arrival Game: Maze on Paper

<div class="brief-only" markdown="1">
Students draw a maze path and write it as a move list. **A solved maze is a sequence of moves.**
</div>

<div class="detail" markdown="1">
- **Objective**: pre-teach "a solved maze is a sequence of moves" before any robot moves.
- **Flow**:
  1. As students arrive, hand out a printed grid and have them draw a path from start to
     finish.
  2. Have them write the path as a list of moves ("forward, turn right, forward, forward").
  3. Name it: that ordered list is a **sequence** — exactly how the robot will solve it.
- **Watch for**: students drawing a path but not writing the move list — the list is the point.
- **Tip**: keep it light; this just primes the sequencing mindset for the day.
</div>

## 9:15-9:25 — Mission Huddle + Catch-Up

<div class="brief-only" markdown="1">
Recap Day 1 driving for late arrivals, frame today's mission (name moves, sequence them), assign roles.
</div>

<div class="detail" markdown="1">
- **Objective**: frame today's mission and get late arrivals driving (cumulative camp).
- **Flow**:
  1. **Catch-up**: quick recap of connecting over Bluetooth, `robot.straight()`,
     `robot.turn()`, and the calibrated `wheel_diameter` / `axle_track`. Make sure any new
     student can get a robot moving.
  2. Today's mission: name your moves as functions, then sequence them to solve a maze.
  3. Reinforce the mantra: "Bugs are sensor data."
- **Tip**: assign the first set of roles (Coder, Builder, Navigator, Tester) now; the
  Navigator matters a lot today.
</div>

## 9:25-10:25 — Robotics Block 1: Name Your Moves

<div class="brief-only" markdown="1">
Teams define and test `forward_one_cell()`, `turn_right()`, `turn_left()`; off-robot, tape a maze for another team. **Milestone: each function runs on its own.**
</div>

<div class="detail" markdown="1">
- **Objective**: every team defines and tests `forward_one_cell()`, `turn_right()`,
  `turn_left()`.
- **Flow**:
  1. Reconnect to the hub and confirm the robot still drives and turns (reuse Day 1 setup).
  2. Write the three functions with `def name():`.
  3. Call each one on its own to confirm it does what its name says.
  4. **Rotate roles ~halfway** through the block.
- **Off-robot task**: tape a maze on the floor for _another_ team to solve (Builder +
  Navigator), and the team plans its own grid layout.
- **Watch for**:
  - Students defining a function but never calling it — explain define vs. call
  - Indentation slips under `def` — the steps must be indented
  - Mazes taped too tight for the robot's turning radius — leave generous cells
- **Tip**: have one team demo a single function call to the room so the idea lands fast.
</div>

## 10:25-10:35 — Energizer

- Quick _Algorithm Relay_ or _Debug the Dance_. Get everyone up and moving.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: Solve the Maze

<div class="brief-only" markdown="1">
Plan the path on paper, calibrate `forward_one_cell()` to one cell, sequence named moves, test and fix. **Milestone: robot clears another team's maze.**
</div>

<div class="detail" markdown="1">
- **Objective**: sequence the named moves to clear another team's maze.
- **Flow**:
  1. Walk the maze you were given and plan the path on paper (Navigator).
  2. Calibrate the cell: run `forward_one_cell()` once, measure, adjust the mm inside it,
     repeat until one call moves exactly one cell. Record tries on the worksheet.
  3. Write the solution as a readable sequence of named moves.
  4. Test; find the step that first bumped a wall, fix that move, run again.
- **Watch for**:
  - Teams typing the whole sequence before testing one cell — calibrate the cell first
  - Turn drift over a long path — re-check `axle_track`; note it's tomorrow's gyro lesson
  - Make sure the Tester is recording the cell size; that's the day's artifact
- **Tip**: painters'-tape start lines and a clear "finish" cell make success obvious.
</div>

## 11:45-12:00 — Demo + Cleanup

<div class="brief-only" markdown="1">
Teams demo their maze runs, reflect on naming/debugging, charge hubs, peel tape, bridge to tomorrow's gyro.
</div>

<div class="detail" markdown="1">
- **Demo**: each team (voluntarily) runs its robot through the maze it was given.
- **Prompts**:
  - "How did naming your moves make the maze code easier to read?"
  - "When did the robot bump a wall, and what did the sequence actually say?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow. Peel up the tape.
- **Bridge**: "Your turns mostly landed — tomorrow we give Techster a gyro so they land
  _exactly_."
</div>

## General Tips Throughout

<div class="brief-only" markdown="1">
Define vs. call, calibrate don't memorize, plan on paper, bugs are sensor data, everyone codes.
</div>

<div class="detail" markdown="1">
- **Define vs. call**: defining a function doesn't run it; calling its name does.
- **Calibrate, don't memorize**: the cell size is measured on the actual maze, never handed out.
- **Plan on paper first**: a maze planned on paper runs in far fewer tries.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the sequence say?"
- **Everyone codes**: rotate roles and keep the maze-taping off-robot task going.
</div>
