from machine import *
import time
from bme680 import *

i2c = I2C(0, scl=Pin(1), sda=Pin(0), freq=400_000)

bme = BME680_I2C(i2c=i2c)
while(True):
    temp = str(round(bme.temperature,2)) + '°C '
    hum = str(round(bme.humidity,2)) + '% '
    press = str(round(bme.pressure,2)) + 'hPa '
    time.sleep(1)
    
    print(temp,hum,press)   
    
    
    
    

    
    