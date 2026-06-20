---
layout: default
title: Timing Guide
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# Maze Runner Timing Guide (3 Hours)

**Audience**: Ages 9-14, no coding experience required. \
**Goal**: Define and call functions, then sequence named moves to solve a maze.

## 9:00-9:15 — Arrival Game: Maze on Paper

- **Objective**: pre-teach "a solved maze is a sequence of moves" before any robot moves.
- **Flow**:
  1. As students arrive, hand out a printed grid and have them draw a path from start to
     finish.
  2. Have them write the path as a list of moves ("forward, turn right, forward, forward").
  3. Name it: that ordered list is a **sequence** — exactly how the robot will solve it.
- **Watch for**: students drawing a path but not writing the move list — the list is the point.
- **Tip**: keep it light; this just primes the sequencing mindset for the day.

## 9:15-9:25 — Mission Huddle + Catch-Up

- **Objective**: frame today's mission and get late arrivals driving (cumulative camp).
- **Flow**:
  1. **Catch-up**: quick recap of connecting over Bluetooth, `robot.straight()`,
     `robot.turn()`, and the calibrated `wheel_diameter` / `axle_track`. Make sure any new
     student can get a robot moving.
  2. Today's mission: name your moves as functions, then sequence them to solve a maze.
  3. Reinforce the mantra: "Bugs are sensor data."
- **Tip**: assign the first set of roles (Coder, Builder, Navigator, Tester) now; the
  Navigator matters a lot today.

## 9:25-10:25 — Robotics Block 1: Name Your Moves

- **Objective**: every team defines and tests `forward_one_cell()`, `turn_right()`,
  `turn_left()`.
- **Flow**:
  1. Reconnect to the hub and confirm the robot still drives and turns (reuse Session 1 setup).
  2. Write the three functions with `def name():`.
  3. Call each one on its own to confirm it does what its name says.
  4. **Rotate roles ~halfway** through the block.
- **Off-robot task**: tape a maze on the floor for *another* team to solve (Builder +
  Navigator), and the team plans its own grid layout.
- **Watch for**:
  - Students defining a function but never calling it — explain define vs. call
  - Indentation slips under `def` — the steps must be indented
  - Mazes taped too tight for the robot's turning radius — leave generous cells
- **Tip**: have one team demo a single function call to the room so the idea lands fast.

## 10:25-10:35 — Energizer

- Quick *Algorithm Relay* or *Debug the Dance*. Get everyone up and moving.

## 10:35-10:50 — Snack Break

- Check allergies. Keep all food and drinks away from kits and laptops.

## 10:50-11:45 — Robotics Block 2: Solve the Maze

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

## 11:45-12:00 — Demo + Cleanup

- **Demo**: each team (voluntarily) runs its robot through the maze it was given.
- **Prompts**:
  - "How did naming your moves make the maze code easier to read?"
  - "When did the robot bump a wall, and what did the sequence actually say?"
- **Cleanup**: label and charge hubs; keep robots intact for tomorrow. Peel up the tape.
- **Bridge**: "Your turns mostly landed — tomorrow we give Techster a gyro so they land
  *exactly*."

## General Tips Throughout

- **Define vs. call**: defining a function doesn't run it; calling its name does.
- **Calibrate, don't memorize**: the cell size is measured on the actual maze, never handed out.
- **Plan on paper first**: a maze planned on paper runs in far fewer tries.
- **Bugs are sensor data**: when the robot misbehaves, ask "what did the sequence say?"
- **Everyone codes**: rotate roles and keep the maze-taping off-robot task going.
