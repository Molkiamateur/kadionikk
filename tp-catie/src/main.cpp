/*
 * Copyright (c) 2022, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;

namespace {
#define PERIOD_MS 2000ms
}

// InterruptIn btn(BUTTON1);

//  ============================================== exo2 ==============================================

//#include "exo2.hpp"
// DigitalOut  myled(LED1);
// //Counter     counter(BUTTON1);

// int main()
// {
//     // btn.rise(&interrupt);
//     while (true) {
//         //printf("Je suis pas un heros (1)! \n");
//         if(counter.done){
//             compteur();
//             counter.done = 0;
//         }
//         ThisThread::sleep_for(PERIOD_MS / 20);
//     }
// }

//  ============================================== exo3 ==============================================
// #include "exo3.hpp"

// DigitalOut  led(LED1);
// //Ticker flipper;
// Flipper flipper(BUTTON1);

// int main()
// {
//     //flipper.attach(&flip,1.0);
//     led = 1;
//     while (true) {
//         ThisThread::sleep_for(PERIOD_MS / 20);
//     }
// }

//  ============================================== exo4 ==============================================
#include "exo4.hpp"

int main()
{
    I2C i2c(I2C1_SDA, I2C1_SCL);
    // BME280 bme280(&i2c);
    // if(!bme280.initialize()){
    //     return 1;
    // }
    // bme280.set_sampling();

    while (true) {
        read_raw_temperature(&i2c);
        read_raw_humidity(&i2c);
        read_raw_pressure(&i2c);
        ThisThread::sleep_for(PERIOD_MS / 2);
    }
}