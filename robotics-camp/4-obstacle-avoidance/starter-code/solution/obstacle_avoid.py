# Obstacle Avoidance — reference solution.
#
# This is a COMPLETE, runnable program. The numbers below are EXAMPLES, not
# truths:
#   - The trigger distance (200 mm) is a TUNING value. Measure it on the actual
#     obstacle course and adjust: lower it if the robot stops too far away, raise
#     it if it bumps the wall before reacting.
#   - The sensor PORT must be verified on each build. This file uses Port.C; yours
#     may be different. Check where the ultrasonic sensor is actually plugged in.
#   - UltrasonicSensor.distance() returns a value in MILLIMETERS, and returns
#     2000 mm when nothing is detected (that's the "no object" reading, not a bug).
#   - `while True:` runs FOREVER. The robot will keep checking and reacting until
#     you click the editor's Stop button. It does not stop on its own.

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

# Plug the ultrasonic (distance) sensor in and use ITS actual port.
eyes = UltrasonicSensor(Port.C)

# EXAMPLE trigger distance for ONE course — measure your own.
TRIGGER_MM = 200

# Mission: drive forward, but back up and turn away when something is close.
while True:
    if eyes.distance() < TRIGGER_MM:   # object closer than the trigger
        robot.straight(-100)           # back up 100 mm
        robot.turn(90)                 # turn away (positive = clockwise / right)
    else:
        robot.drive(150, 0)            # forward at 150 mm/s, no turn
    wait(10)                           # tiny pause so the loop doesn't race


# --- "Don't fall off the table" variant (optional) -----------------------
#
# Point the sensor DOWN over the front edge instead of straight ahead. The floor
# is close (small distance); the drop-off past the edge reads FAR (a big number,
# up to 2000 mm). So flip the test: react when the distance gets BIG.
#
#   EDGE_MM = 100   # EXAMPLE — measure the floor reading on YOUR table
#   while True:
#       if eyes.distance() > EDGE_MM:   # floor dropped away -> edge ahead
#           robot.straight(-100)        # back up
#           robot.turn(90)              # turn away from the edge
#       else:
#           robot.drive(150, 0)         # floor is there -> keep going
#       wait(10)
#
# As always: EDGE_MM is a value you measure on the real table, not a truth.
