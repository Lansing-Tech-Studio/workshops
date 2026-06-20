from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase

hub = PrimeHub()
# Same setup as Session 1 — use YOUR calibrated values and verified ports/Direction.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)


def forward_one_cell():
    robot.straight(250)   # set to YOUR maze cell size

def turn_right():
    robot.turn(90)

def turn_left():
    robot.turn(-90)


# Solve the maze as a readable sequence:
forward_one_cell()
turn_right()
forward_one_cell()
forward_one_cell()
