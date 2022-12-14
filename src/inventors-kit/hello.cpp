#include <MicroBit.h>

MicroBit uBit;
MicroBitImage smiley("0,255,0,255,0\n0,255,0,255,0\n0,0,0,0,0\n255,0,0,0,255\n0,255,255,255,0\n");

void onButtonA(MicroBitEvent) {
    uBit.display.print(smiley);
}

void onButtonB(MicroBitEvent) {
    uBit.display.scroll("Hello World!");
}

int main()
{
    uBit.init();
    
    uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButtonA);
    uBit.messageBus.listen(MICROBIT_ID_BUTTON_B, MICROBIT_BUTTON_EVT_CLICK, onButtonB); 

    while (true)
        uBit.sleep(100);
}
