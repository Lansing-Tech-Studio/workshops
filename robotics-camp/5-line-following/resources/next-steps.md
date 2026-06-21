---
layout: default
title: Next Steps
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Next Steps After Line Following

## Practice the Idea

- **Change one thing at a time:** Tune only `GAIN`, run, watch, repeat. If you change
  GAIN, speed, and the threshold all at once, you can't tell what helped.
- **Slow it down, speed it up:** Lower `DRIVE_SPEED` and the robot follows more
  forgivingly; raise it and a too-high GAIN starts to wobble. They work together.
- **Re-measure your readings:** Read `reflection()` on the tape and floor again under
  the room's real lighting. Small changes in light change the numbers.

## Try the Stretch

- **Two-sensor following:** With two color sensors (one each side of the line), steer
  from the *difference* between them. That follows the **center** of the line instead
  of an edge — and stays centered better.
- **A loop course:** Tape a line that loops back on itself and see if your tuning
  survives the curves. Tight curves need a higher GAIN or a slower speed.

## Bring the Week Together

- You taught your robot to drive, solve a maze, steer by the gyro, dodge obstacles, and
  follow a line. Pick two skills and **combine** them — like a line-follower that
  *stops* when the distance sensor sees something ahead.
- Write down, in your own words, what **calibration** meant in each session (wheel
  size, cell size, gyro turn, trigger distance, line threshold). It was the same habit
  every day.

## Explore More (If Curious)

- What's the sharpest curve your robot can follow? What happens at a right-angle corner?
- Look up the [ColorSensor documentation](https://docs.pybricks.com/en/stable/pupdevices/colorsensor.html)
  and see what else it can read (colors, ambient light).
- The full [Pybricks docs](https://docs.pybricks.com) have many more example programs —
  including more advanced line followers.

## Keep It Safe and Fun

- The line needs contrast — black tape on a light surface. Give the robot room to run.
- Numbers are starting guesses, not truths. Measure, tune, repeat.
- Momentum over perfection — a "smooth-ish" line-follow is a real win. Curiosity is success.
