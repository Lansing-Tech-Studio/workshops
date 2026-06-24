---
layout: default
title: "Debug the Drawing"
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Debug the Drawing

The robot does the drawing **exactly** — not what you *meant*. Read each program
like a robot would. **One step is wrong.** Find it, then trace where the robot
*really* ends up.

How to read the moves:

- `↑ Forward N` — drive straight N squares the way the robot is facing
- `↻ Turn right` / `↺ Turn left` — spin 90° in place (now you face a new way)
- The robot **starts at `S`, facing up (↑)**

## Card 1 — Make a Square

**Goal:** Drive a square loop and come back to **S**, facing up — just like you started.

**The robot's program:**
`↑ Forward 3` → `↻ Turn right` → `Forward 3` → `↻ Turn right` → `Forward 3` → `↺ Turn LEFT` → `Forward 3`

**Trace it:**

```text
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

- The wrong step is: <span class="blank-line"></span>
- It should say: <span class="blank-line"></span>
- So the robot really ends up: <span class="blank-line-long"></span>

<div class="page-break-after"></div>

## Card 2 — Reach the Flag

**Goal:** Stop **on the flag (F)**.

**The robot's program:**
`↑ Forward 3` → `↻ Turn right` → `Forward 3`

**Trace it:**

```text
.  .  .  F  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

- The wrong step is: <span class="blank-line"></span>
- It should say: <span class="blank-line"></span>
- So the robot really ends up: <span class="blank-line-long"></span>

<div class="page-break-after"></div>

## Card 3 — Turn the Corner

**Goal:** Drive up, make a clean square corner, then drive straight to the
parking spot **P** (an "L" shape). P is straight to the right of the corner.

**The robot's program:**
`↑ Forward 3` → `↻ Turn right 45°` → `Forward 3`

**Trace it:**

```text
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  P  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

- The wrong step is: <span class="blank-line"></span>
- It should say: <span class="blank-line"></span>
- So the robot really ends up: <span class="blank-line-long"></span>

<div class="page-break-after"></div>

## Card 4 — Around the Block

**Goal:** Weave around the wall (▒) and stop on **P**.

**The robot's program:**
`↑ Forward 2` → `↻ Turn right` → `Forward 2` → `↺ Turn left` → `Forward 2` → `↺ Turn LEFT` → `Forward 2`

**Trace it:**

```text
.  .  .  .  P  .
.  .  ▒  .  .  .
.  .  ▒  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

- The wrong step is: <span class="blank-line"></span>
- It should say: <span class="blank-line"></span>
- So the robot really ends up: <span class="blank-line-long"></span>

## The Big Idea

One small wrong step throws off **everything after it**. That's why today's
robot gets a **gyro** — to make its turns exact.
