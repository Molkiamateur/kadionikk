#ifndef EXO4_HPP
#define EXO4_HPP

#include "bme280.h"
#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;
using namespace sixtron;

#define PERIOD_MS 2000ms
#define I2C_ADDRESS 0x76
#define TEMP_REG 0xFA
#define PRESS_REG 0xF7
#define HUM_REG 0xF5

extern BME280 bme280;
extern I2C i2c;
void read_temperature(BME280 bme280);
void read_pressure(BME280 bme280);
void read_humidity(BME280 bme280);

void read_raw_temperature(I2C i2c);
void read_raw_pressure(I2C i2c);
void read_raw_humidity(I2C i2c);
#endif