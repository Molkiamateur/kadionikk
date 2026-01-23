#include "exo6.hpp"

Mutex printMutex;

void read_temperature(BME280 bme280) {
  printMutex.lock();
  printf("Temp : %fC\n", bme280.temperature());
  printMutex.unlock();
}

void read_pressure(BME280 bme280) {
  printMutex.lock();
  printf("Pressure : %fPa\n", bme280.pressure());
  printMutex.unlock();
}

void read_humidity(BME280 bme280) {
  printMutex.lock();
  printf("Humidity : %f%\n", bme280.humidity());
  printMutex.unlock();
}

void threadTempHum(BME280 *bme280){
  while(true){
    read_temperature(*bme280);
    read_humidity(*bme280);
    ThisThread::sleep_for(PERIOD_MS);
  }
}

void threadPress(Param *param){
  bool state = false;
  while(true){
    if(param->Btn->read()){
      if(!state){
        read_pressure(*(param->bme280));
        state = true;
      }
    }
    else {
      state = false;
    }
    ThisThread::sleep_for(PERIOD_MS / 20);
  }
}

void threadLED(DigitalOut *led){
  while(true){
    *led = !*led;
    ThisThread::sleep_for(5s);
  }
}