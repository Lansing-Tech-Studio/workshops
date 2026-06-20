---
layout: default
title: Next Steps
workshop: SPIKE Prime Robotics Camp
section: Resources
---

# Next Steps After Maze Runner

## Practice the Idea

- **Read it like instructions:** Look at your maze solution. Can a teammate follow it
  out loud just by reading the named moves? If yes, your functions are well named.
- **Add a new move:** Write a `back_one_cell()` or a `u_turn()` function and use it to
  solve a trickier maze.
- **Re-check the cell size:** Run `forward_one_cell()` once more. Does it still land in
  the next cell? Small errors add up over a long path.

## Get Ready for Gyro Precision (Next Session)

- Watch your turns carefully. Did every `turn_right()` land *exactly* 90 degrees? Over a
  long maze, small turn errors stack up and push the robot off course.
- Tomorrow we add the **gyro** — a built-in compass that makes turns more accurate — so
  your named moves land where you mean them to.

## Explore More (If Curious)

- Can you solve the *same* maze with fewer lines by spotting a repeated pattern and using
  a `for` loop with your functions?
- Try giving a function a number, like `forward(cells)`, so one call can drive several
  cells. (Peek at how `drive_square(side_mm)` worked in the Session 1 solution.)
- Look up [functions in the Pybricks docs](https://docs.pybricks.com) and see how the
  built-in ones (like `robot.straight`) are themselves just named moves.

## Keep It Safe and Fun

- Give the robot a clear maze and floor space — tape down loose corners.
- The cell size is a starting guess, not a truth. Measure, adjust, repeat.
- Momentum over perfection — a robot that *completes* the maze is the win, even if it
  grazes a wall.
