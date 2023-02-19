#include <MicroBit.h>

MicroBit uBit;
bool light = false;

void onPin0(MicroBitEvent) {
    light = !light;
}

int main()
{
    uBit.init();
    uBit.messageBus.listen(MICROBIT_ID_IO_P0, MICROBIT_BUTTON_EVT_CLICK, onPin0);

    MicroBitPin p1(MICROBIT_ID_IO_P1, MICROBIT_PIN_P1, PIN_CAPABILITY_ANALOG);
    MicroBitPin p2(MICROBIT_ID_IO_P2, MICROBIT_PIN_P2, PIN_CAPABILITY_AD);

    while (true) {
        if (light)
            p2.setAnalogValue(p1.getAnalogValue());
        else
            p2.setDigitalValue(0);
    }
}
