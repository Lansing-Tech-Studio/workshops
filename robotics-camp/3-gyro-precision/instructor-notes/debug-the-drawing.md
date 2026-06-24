---
layout: default
title: "Arrival Game: Debug the Drawing"
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
print_friendly: true
---

# Debug the Drawing — Puzzle Cards

Print these and lay them out (or project one at a time) as students arrive on
Day 3. Each card shows a **goal** and the robot's **program drawn as a list of
moves**. One step is wrong. Teams find the wrong step and trace where the robot
*actually* ends up.

**The rule of the game:** the robot does the drawing *exactly* — not what you
meant. Read it literally, like a sensor would. One small early mistake throws
off everything after it. (That's the whole reason today's robot gets a gyro.)

How to read the moves:

- `↑ Forward N` — drive straight N squares in the direction the robot faces
- `↻ Turn right` / `↺ Turn left` — spin 90° in place (the robot now faces a new way)
- The robot **starts at `S`, facing up (↑)**

<div class="page-break-after"></div>

## Card 1 — Make a Square *(easy)*

**Goal:** Drive a square loop and come back to **S**, facing up — just like you started.

**The robot's program:**

1. `↑ Forward 3`
2. `↻ Turn right`
3. `Forward 3`
4. `↻ Turn right`
5. `Forward 3`
6. `↺ Turn LEFT`
7. `Forward 3`

**Trace it on the grid. Where does the robot really end up?**

```text
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

<div class="page-break-after"></div>

## Card 2 — Reach the Flag *(early-error)*

**Goal:** Stop **on the flag (F)**.

**The robot's program:**

1. `↑ Forward 3`
2. `↻ Turn right`
3. `Forward 3`

**Trace it. The flag is way up top — does the robot get there?**

```text
.  .  .  F  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

<div class="page-break-after"></div>

## Card 3 — Turn the Corner *(angle bug — gyro theme)*

**Goal:** Drive up, make a clean square corner, then drive straight to the
parking spot **P** (an "L" shape).

**The robot's program:**

1. `↑ Forward 3`
2. `↻ Turn right 45°`
3. `Forward 3`

**Trace it. A turn that isn't a full 90° — where does leg 2 point now?**

```text
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  .  .  .
.  .  .  P  .  .   ← P is straight to the right of the corner
.  .  .  .  .  .
S  .  .  .  .  .
```

<div class="page-break-after"></div>

## Card 4 — Around the Block *(spot the bug — harder)*

**Goal:** Weave around the wall (▒) and stop on **P**.

**The robot's program:**

1. `↑ Forward 2`
2. `↻ Turn right`
3. `Forward 2`
4. `↺ Turn left`
5. `Forward 2`
6. `↺ Turn LEFT`
7. `Forward 2`

**Trace it. One turn in the middle is wrong — which one, and where does it leave the robot?**

```text
.  .  .  .  P  .
.  .  ▒  .  .  .
.  .  ▒  .  .  .
.  .  .  .  .  .
S  .  .  .  .  .
```

<div class="page-break-after"></div>

# Answer Key *(instructor only — do not print for students)*

**Card 1 — Make a Square.** The bug is **step 6: it turns LEFT instead of
right.** Steps 1–5 draw three sides of the square (up, across the top, back
down). To close the loop the robot must turn **right** to head back along the
bottom toward `S`. Turning left instead sends it driving *away to the right*, so
it finishes one square-width past the start and never closes the loop. *One
wrong turn, and the whole last leg is off.*

**Card 2 — Reach the Flag.** The bug is **step 1: `Forward 3` should be
`Forward 5`** (the flag is 5 squares up). Because the error is in the *very
first move*, everything after it is shifted: the robot turns and drives right at
the wrong height and stops two rows *below* the flag. *A small mistake at the
start throws off every step after it — the lesson of the day.*

**Card 3 — Turn the Corner.** The bug is **step 2: `Turn right 45°` should be
`Turn right 90°`.** With only a half-turn, the robot heads off **diagonally**
instead of straight right, so leg 2 drifts up and away and misses `P` entirely.
*Angles have to be exact — this is exactly what the gyro helps the robot get
right.*

**Card 4 — Around the Block.** The bug is **step 4: `Turn left` should be
`Turn right`.** The robot needs to go up, step right around the wall, then
continue up to `P`. Turning right at step 2 (correct) faces it right; step 4
should turn it back to face **up** to clear the wall — that's a *right* turn.
Turning left instead faces it back down/left, and it drives away from the wall
and `P`. *Find the early wrong turn and the rest of the path explains itself.*

## Running it

- Keep all four out so early arrivals can do more than one (Card 1 → 4 rises in
  difficulty).
- Make your own in seconds: draw any correct path, then change **one** step —
  flip a turn direction, shorten a forward, or make a turn less than 90°.
- Land the point out loud before the mission huddle: *"The robot did the drawing
  exactly. One small early slip moved everything after it. Today's gyro is how
  we stop that from happening."*
