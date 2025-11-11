import machine
import network
import socket
import time

WIFI_SSID = "SE"
WIFI_PASSWORD = "sesesese"

wlan = network.WLAN(network.STA_IF)
wlan.active(True)
wlan.connect(WIFI_SSID, WIFI_PASSWORD)

while wlan.isconnected() == False:
    print('Waiting for connection...')
    time.sleep(1)
    
print("Connected to Wifi " + WIFI_SSID)
print(wlan.ifconfig()) # ('192.168.5.68', '255.255.255.0', '192.168.5.1', '10.210.18.138')
