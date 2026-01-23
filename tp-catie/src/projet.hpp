#ifndef PROJET_HPP
#define PROJET_HPP

#include "bme280.h"
#include "mbed.h"
#include "rtos.h"
#include <nsapi_dns.h>
#include <MQTTClientMbedOs.h>
#include "bno055.h"

using namespace sixtron;


#define GROUP_NAME              "my-board"
#define SYNC_INTERVAL           1
#define MQTT_GROUP              AIO_USERNAME "/groups/" GROUP_NAME
#define MQTT_CLIENT_ID          "6LoWPAN_Node_" GROUP_NAME
#define AIO_SERVER              "io.adafruit.com"
#define AIO_SERVERPORT          1883
#define AIO_USERNAME            "VayBar"
//#define AIO_KEY                 "aio_Tyvt251amH0cN4fNMjjDT9MOtOE" // attention il faut ajouter un y a la fin de la clé
#define TOPIC_LED               AIO_USERNAME "/feeds/" GROUP_NAME ".led"
#define TOPIC_TEMP              AIO_USERNAME "/feeds/" GROUP_NAME ".temperature"
#define TOPIC_HUM               AIO_USERNAME "/feeds/" GROUP_NAME ".humidity"
#define TOPIC_PRESS             AIO_USERNAME "/feeds/" GROUP_NAME ".pressure"
#define TOPIC_EULER_X           AIO_USERNAME "/feeds/" GROUP_NAME ".euler_x"
#define TOPIC_EULER_Y           AIO_USERNAME "/feeds/" GROUP_NAME ".euler_y"
#define TOPIC_EULER_Z           AIO_USERNAME "/feeds/" GROUP_NAME ".euler_z"


using namespace std::chrono;
using namespace sixtron;

#define PERIOD_MS 2000ms
#define I2C_ADDRESS 0x76

extern BME280 bme280;
extern I2C i2c;
extern BNO055 bno055;

#endif