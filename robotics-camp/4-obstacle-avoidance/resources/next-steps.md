---
layout: default
title: Next Steps
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Next Steps After Obstacle Avoidance

## Practice the Idea

- **Predict, then run:** Before you click Run, say out loud what the robot will do
  when something is close and when nothing is. Were you right? If not, that's sensor
  data — the code did exactly what it said.
- **Print and watch:** Run a tiny program that just prints `eyes.distance()` and move
  your hand toward the sensor. Watch the number drop, and jump to 2000 when nothing's
  there.
- **Re-tune the trigger:** Try a different obstacle course. Does your trigger distance
  still work, or does it need adjusting? Calibration is never "done."

## Get Ready for Line Following + Showcase (Next Session)

- You read one sensor today (distance). Tomorrow you'll read another — the **color
  sensor** — and use its number to *steer*.
- Notice the pattern: check a sensor, decide, act, repeat. Line following uses the
  same `while` loop, just with a smoother decision than `if`/`else`.
- Start thinking about your **showcase** run — which mission from the week do you want
  to demo?

## Explore More (If Curious)

- Make the robot turn a *random* amount when it hits something, so it explores.
- Add a third reaction: if something is *really* close, back up farther.
- Try the "don't fall off the table" version — point the sensor down and react when
  the distance gets **big** (the floor dropped away).
- Look up the [UltrasonicSensor documentation](https://docs.pybricks.com/en/stable/pupdevices/ultrasonicsensor.html)
  and see what else it can do (it has lights, too).

## Keep It Safe and Fun

- Give the robot room and watch the table edge — the challenge is "don't fall off."
- Numbers are starting guesses, not truths. Measure, adjust, repeat.
- `while True:` runs forever — keep a finger near the Stop button.
- Momentum over perfection — a robot that mostly avoids obstacles is a win.
