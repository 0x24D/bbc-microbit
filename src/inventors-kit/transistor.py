from microbit import *
import utime

duty = 0

while True:
    while duty < 1023:
        pin0.write_analog(duty)
        duty += 1
        utime.sleep_ms(10)
    while duty > 0:
        pin0.write_analog(duty)
        duty -= 1
        utime.sleep_ms(10)

