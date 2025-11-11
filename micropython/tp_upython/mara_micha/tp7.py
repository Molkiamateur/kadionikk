import paho.mqtt.client as mqtt

MQTT_SERVER = "io.adafruit.com" # MQTT server address
MQTT_TOPIC = "se04/feeds/temperature" # Topic name

def on_connect(client, userdata, flags, rc):
 print("Connection : " + str(rc))
 # Subscribe to the topic
 client.subscribe(MQTT_TOPIC)
 
# A publish message is received from the server
def on_message(client, userdata, msg):
 print("Sujet : " + msg.topic + " Message : " + str(msg.payload))
 
client = mqtt.Client()

client.username_pw_set(username="se04", password="aio_VGab60TD1k7HRKBeu5a3gTwc32A1")

client.on_connect = on_connect
client.on_message = on_message
client.connect(MQTT_SERVER, 1883, 60)

client.loop_forever()

#res Sujet : se04/feeds/temperature Message : b'23.24\xc2\xb0C'
