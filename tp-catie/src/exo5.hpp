#ifndef EXO5_HPP
#define EXO5_HPP


#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;


#define PERIOD_MS 2000ms

extern DigitalOut myled;

void ping();
void pong();
void mainloop();

#endif