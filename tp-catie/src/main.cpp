/*
 * Copyright (c) 2022, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mbed.h"
#include "exo2.hpp"

namespace {
#define PERIOD_MS 2000ms
}

// InterruptIn btn(BUTTON1);
DigitalOut  myled(LED1);
Counter     counter(BUTTON1);

int main()
{
    // btn.rise(&interrupt);
    while (true) {
        //printf("Je suis pas un heros (1)! \n");
        if(counter.done){
            compteur();
            counter.done = 0;
        }
        ThisThread::sleep_for(PERIOD_MS / 20);
    }
}
