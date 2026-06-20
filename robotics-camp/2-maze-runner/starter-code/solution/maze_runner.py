# Maze Runner — reference solution.
#
# This is a COMPLETE, runnable program. The numbers below (the cell size of
# 250 mm, plus wheel_diameter, axle_track, and the ports/Direction) are EXAMPLE
# values from one robot and one maze. Every team must set their own — the maze
# cell size is a calibration step (drive one cell, measure, adjust), exactly like
# wheel_diameter / axle_track in Session 1. Do not treat these as correct answers.

from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()

# Same setup as Session 1. Ports and Direction depend on this build — on this
# robot the left motor had to be reversed so it drives forward. Verify per robot.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)

# EXAMPLE calibrated values for ONE robot — measure your own.
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)


# --- Named moves (functions) ---------------------------------------------
# Name a move once, then reuse it everywhere by calling its name.

def forward_one_cell():
    """Drive forward exactly one maze cell."""
    robot.straight(250)   # EXAMPLE cell size — calibrate to YOUR maze (see below)

def turn_right():
    """Turn a quarter-turn to the right."""
    robot.turn(90)        # positive = clockwise / right

def turn_left():
    """Turn a quarter-turn to the left."""
    robot.turn(-90)       # negative = left


# --- Solve the maze ------------------------------------------------------
# A worked example for one sample maze: forward into the hall, right at the first
# corner, down two cells, left, and one cell to the finish. Read it top to bottom
# like a list of instructions — that readability is the whole point of naming moves.

forward_one_cell()
turn_right()
forward_one_cell()
forward_one_cell()
turn_left()
forward_one_cell()


# --- How this robot's cell size was calibrated ---------------------------
#
# The maze cell size is a calibration value, just like wheel_diameter:
#
# 1) Run forward_one_cell() once, starting in a cell.
# 2) Did the robot stop centered in the NEXT cell?
#       - Stopped short -> raise the mm inside forward_one_cell()
#       - Overshot      -> lower the mm inside forward_one_cell()
# 3) Re-run until one call moves the robot exactly one cell.
#
# (This assumes wheel_diameter / axle_track were already calibrated in Session 1.
#  If turns are off, re-check axle_track before blaming the maze.)
