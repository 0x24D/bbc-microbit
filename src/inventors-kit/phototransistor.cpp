#include <MicroBit.h>

MicroBit uBit;

int main()
{
    uBit.init();

    MicroBitPin p0(MICROBIT_ID_IO_P0, MICROBIT_PIN_P0, PIN_CAPABILITY_ANALOG);
    MicroBitImage sun("255,0,255,0,255\n0,255,255,255,0\n255,255,255,255,255\n0,255,255,255,0\n255,0,255,0,255\n");
    MicroBitImage moon("255,255,255,0,0\n0,255,255,255,0\n0,0,255,255,0\n0,255,255,255,0\n255,255,255,0,0\n");

    while (true) {
        const auto lightLevel = p0.getAnalogValue();
        if (lightLevel > 200) {
            uBit.display.print(sun);
        } else {
            uBit.display.print(moon);
        }
    }
}
