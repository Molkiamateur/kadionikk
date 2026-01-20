#ifndef EXO3_HPP
#define EXO3_HPP

#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;

#define PERIOD_MS 2000ms

class Flipper {
public:
    Flipper(PinName pin);          // create the InterruptIn on the pin specified to Counter

    void go();
    void stop();

private:
    InterruptIn _interrupt;
    volatile float _count;
    Ticker flipper;
};

extern DigitalOut led;
extern InterruptIn btn;

void flip();


#endif