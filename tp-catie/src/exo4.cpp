#include "exo4.hpp"
#include <cstdint>

void read_temperature(BME280 bme280) {
  printf("Il fait %fC\n", bme280.temperature());
}

void read_pressure(BME280 bme280) {
  printf("Il fait %fPa\n", bme280.pressure());
}

void read_humidity(BME280 bme280) {
  printf("Il fait %f%\n", bme280.humidity());
}

void read_raw_temperature(I2C i2c) {
  uint8_t data[3];
  i2c.write(I2C_ADDRESS, TEMP_REG, 1);
  i2c.read(I2C_ADDRESS, data, 3);

  int32_t raw_temp = (data[0] << 16) | (data[1] << 8) | data[2];
  float temp = (raw_temp / 100.0);
  printf("Il fait %fC\n", temp);
}

void read_raw_pressure(I2C i2c) {
  uint8_t data[3];
  i2c.write(I2C_ADDRESS, PRESS_REG, 1);
  i2c.read(I2C_ADDRESS, data, 3);

  int32_t raw_press = (data[0] << 16) | (data[1] << 8) | data[2];
  float press = (raw_press / 100.0);
  printf("Il fait %fPa\n", press);
}

void read_raw_humidity(I2C i2c) {
  uint8_t data[3];
  i2c.write(I2C_ADDRESS, HUM_REG, 1);
  i2c.read(I2C_ADDRESS, data, 3);

  int32_t raw_hum = (data[0] << 16) | (data[1] << 8) | data[2];
  float hum = (raw_hum / 100.0);
  printf("Il fait %f%\n", hum);
}
