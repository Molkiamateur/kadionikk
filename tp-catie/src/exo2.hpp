#ifndef EXO2_HPP
#define EXO2_HPP

#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;

#define PERIOD_MS 2000ms

class Counter {
public:
    Counter(PinName pin);          // create the InterruptIn on the pin specified to Counter

    void go();
    void stop();
    int read();

    volatile int done;

private:
    InterruptIn _interrupt;
    volatile int _count;
    Timer timer;
};

extern DigitalOut myled;
extern InterruptIn btn;
extern Counter counter;

void polling();
void interrupt();
void compteur();

#endif