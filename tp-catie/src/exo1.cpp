#include "exo1.hpp"

void exo1()
{
    // Blink LED
    myled = 1;          // set LED1 pin to high
    printf("myled = %d \n\r", (uint8_t)myled);
    ThisThread::sleep_for(PERIOD_MS / 2);

    myled.write(0);     // set LED1 pin to low
    printf("myled = %d \n\r", myled.read());
    ThisThread::sleep_for(PERIOD_MS / 2);
}