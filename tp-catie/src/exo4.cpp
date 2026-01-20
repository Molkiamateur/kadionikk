#include "exo4.hpp"

void read_temperature(BME280 bme280){
    printf("Il fait %fC\n", bme280.temperature());
}

void read_pressure(BME280 bme280){
    printf("Il fait %fPa\n", bme280.pressure());
}

void read_humidity(BME280 bme280){
    printf("Il fait %f%\n", bme280.humidity());
}