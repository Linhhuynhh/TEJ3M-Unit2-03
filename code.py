
#!/usr/bin/env python3
"""
Created by: Linh Huynh
Created on: Mar 2025
Turn on the LED for one second, then turn off for one second, repeatedly.
"""
import board
import digitalio
import time

led = digitalio.DigitalInOut(board.GP5)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(1)
    led.value = False
    time.sleep(1)
