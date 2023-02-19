from microbit import *

sun = Image('90909:09990:99999:09990:90909')
moon = Image('99900:09990:00990:09990:99900')

while True:
    if pin0.read_analog() > 200:
        display.show(sun)
    else:
        display.show(moon)