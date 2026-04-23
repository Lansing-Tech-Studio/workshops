#!/usr/bin/env bash

FQBN="esp32:esp32:esp32"
arduino-cli compile --fqbn "${FQBN}" .
