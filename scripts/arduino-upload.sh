#!/usr/bin/env bash

PORT="$(arduino-cli board list | awk '/ttyUSB|ttyACM/ {print $1; exit}')"
FQBN="esp32:esp32:esp32"

arduino-cli upload -p "${PORT}" --fqbn "${FQBN}" .
