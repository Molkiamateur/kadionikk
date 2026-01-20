#ifndef EXO4_HPP
#define EXO4_HPP

#include "mbed.h"
#include "rtos.h"
#include "bme280.h"

using namespace std::chrono;
using namespace sixtron;

#define PERIOD_MS 2000ms

extern BME280 bme280;
extern I2C i2c;
void read_temperature(BME280 bme280);
void read_pressure(BME280 bme280);
void read_humidity(BME280 bme280);
#endif