from pybricks.hubs import PrimeHub
from pybricks.pupdevices import Motor, UltrasonicSensor
from pybricks.parameters import Port, Direction
from pybricks.robotics import DriveBase
from pybricks.tools import wait

hub = PrimeHub()
# Same setup as Day 1 — use YOUR calibrated values and verified ports/Direction.
left = Motor(Port.A, Direction.COUNTERCLOCKWISE)
right = Motor(Port.B)
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)

eyes = UltrasonicSensor(Port.C)   # use YOUR sensor's actual port

while True:
    if eyes.distance() < 200:     # object closer than 200 mm
        robot.straight(-100)      # back up
        robot.turn(90)            # turn away
    else:
        robot.drive(150, 0)       # forward at 150 mm/s, no turn
    wait(10)
