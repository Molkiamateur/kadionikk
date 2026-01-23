#ifndef EXO6_HPP
#define EXO6_HPP

#include "bme280.h"
#include "mbed.h"
#include "rtos.h"

using namespace std::chrono;
using namespace sixtron;

#define PERIOD_MS 2000ms
#define I2C_ADDRESS 0x76

typedef struct
{
    BME280 *bme280;
    DigitalIn *Btn;
}Param;


extern BME280 bme280;
extern I2C i2c;

void read_temperature(BME280 bme280);
void read_pressure(BME280 bme280);
void read_humidity(BME280 bme280);

void threadTempHum(BME280 *bme280);
void threadPress(Param *param);
void threadLED(DigitalOut *led);
#endif