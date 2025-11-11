from machine import *
from bme680 import *
import network
import socket
import time
from mqtt import MQTTClient

i2c = I2C(0, scl=Pin(1), sda=Pin(0), freq=400_000)

bme = BME680_I2C(i2c=i2c)

WIFI_SSID = "SE"
WIFI_PASSWORD = "sesesese"

wlan = network.WLAN(network.STA_IF)
wlan.active(True)
wlan.connect(WIFI_SSID, WIFI_PASSWORD)

while wlan.isconnected() == False:
    print('Waiting for connection...')
    time.sleep(1)

client = MQTTClient("device_id", "io.adafruit.com",user="se04", password="aio_VGab60TD1k7HRKBeu5a3gTwc32A1", port=1883) # Ne pas changer "device_id"

while True:
    print("j'envoi la temp")
    temp = str(round(bme.temperature,2)) + '°C '

    client.connect()
    client.publish(topic="se04/feeds/temperature", msg=temp)
    client.disconnect()
    
    time.sleep(5)
    print("j'envoi la press")
    press = str(round(bme.pressure,2)) + 'hPa '
    
    client.connect()
    client.publish(topic="se04/feeds/pressure", msg=press)
    client.disconnect()
    
    time.sleep(5)
