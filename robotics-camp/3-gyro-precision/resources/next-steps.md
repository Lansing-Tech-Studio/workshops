---
layout: default
title: Next Steps
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Next Steps After Gyro Precision

## Practice the Idea

- **Prove it again:** Run any move with the gyro off, then on, and compare. The gyro
  should win every time — that's the proof, not a guess.
- **Watch the heading:** Print `hub.imu.heading()` before and after a turn. Does the
  change match the number you typed in `turn()`?
- **Re-tune your true 360°:** Run `robot.turn(360)` with the gyro on. Did the heading
  land back near 0? Nudge your turn value (355-363) until it does.

## Get Ready for Obstacle Avoidance (Next Session)

- Today the robot still runs a fixed script — it does the same moves no matter what's in
  front of it. Tomorrow we add the **distance sensor** so it can *react*.
- Think about a rule like "if something is close, back up and turn." That "if" is a
  **decision** — exactly how a robot reacts to the world.

## Explore More (If Curious)

- How far off does a *long* drive get with the gyro off vs. on? Try a 2-meter straight.
- Reset the heading mid-program and see what happens to the next turn.
- Look up the [hub IMU documentation](https://docs.pybricks.com/en/stable/hubs/primehub.html)
  and the [DriveBase `use_gyro`](https://docs.pybricks.com/en/stable/robotics.html)
  command.

## Keep It Safe and Fun

- Drive on the floor or a big table with space — give the robot room.
- Your turn-fudge number is *yours* — it's calibration, not a truth to memorize.
- Momentum over perfection — a chart that shows the gyro helping is a win today.
