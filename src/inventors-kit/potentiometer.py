from microbit import *

light_state = False
pin_held = False

def pin_pressed(pin):
    global pin_held

    touched = pin.is_touched()
    ret = touched and not pin_held
    pin_held = touched

    return ret

while True:
    if pin_pressed(pin0):
        light_state = not light_state

    if light_state:
        pin2.write_analog(pin1.read_analog())
    else:
        pin2.write_digital(0)