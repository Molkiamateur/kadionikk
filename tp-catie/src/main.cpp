/*
 * Copyright (c) 2020, CATIE
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed.h"
#include "rtos.h"
#include "projet.hpp"

// main() runs in its own thread in the OS
// (note the calls to ThisThread::sleep_for below for delays)

DigitalOut led(LED1);
EventQueue main_queue(32 * EVENTS_EVENT_SIZE);
int rc = 0;
int id_yield=0;
MQTTClient *client;
TCPSocket socket;
NetworkInterface *network;

/*!
 *  \brief Publish data over the corresponding adafruit MQTT topic
 *
 */
void publish(const char* topic, float valeur) {

    char buffer[32];
    sprintf(buffer,"%.2f", valeur);

    MQTT::Message message;
    message.qos = MQTT::QOS0;
    message.retained = false;
    message.dup = false;
    message.payload = (void*)buffer;
    message.payloadlen = strlen(buffer);

    printf("Send: %s to MQTT Broker: %s\n", buffer, topic);
    rc = client->publish(topic, message);
    if (rc != 0) {
        printf("Failed to publish: %d\n", rc);
    }
}

/*!
 *  \brief Yield to the MQTT client
 *
 *  On error, stop publishing and yielding
 */
void yield(){
    // printf("Yield\n");
    
    rc = client->yield(100);

    if (rc != 0){
        printf("Yield error: %d\n", rc);
        main_queue.cancel(id_yield);
        main_queue.break_dispatch();
        system_reset();
    }
}

/*!
 *  \brief Called when a message is received
 *
 *  Print messages received on mqtt topic
 */
void messageArrived(MQTT::MessageData& md)
{ 
    MQTT::Message &message = md.message;
    printf("Message arrived: qos %d, retained %d, dup %d, packetid %d\r\n", message.qos, message.retained, message.dup, message.id);
    printf("Payload %.*s\r\n", message.payloadlen, (char*)message.payload);

    // Get the payload string
    char* char_payload = (char*)malloc((message.payloadlen+1)*sizeof(char)); // allocate the necessary size for our buffer
    char_payload = (char *) message.payload; // get the arrived payload in our buffer
    char_payload[message.payloadlen] = '\0'; // String must be null terminated

    // Compare our payload with known command strings
    if (strcmp(char_payload, "ON") == 0) {
        led = 1;
    }
    else if (strcmp(char_payload, "OFF") == 0) {
        led = 0;
    }
    else if (strcmp(char_payload, "RESET") == 0) {
        printf("RESETTING ...\n");
        system_reset();
    }
}





int main()
{
    I2C i2c(I2C1_SDA, I2C1_SCL);
    BME280 bme280(&i2c);
    
    if(!bme280.initialize()){
        return 1;
    }
    bme280.set_sampling();

    printf("Connecting to border router...\n");

    /* Get Network configuration */
    network = NetworkInterface::get_default_instance();

    if (!network) {
        printf("Error! No network interface found.\n");
        return 0;
    }

    /* Add DNS */
    nsapi_addr_t new_dns = {
        NSAPI_IPv6,
        { 0xfd, 0x9f, 0x59, 0x0a, 0xb1, 0x58, 0, 0, 0, 0, 0, 0, 0, 0, 0x00, 0x01 }
    };
    nsapi_dns_add_server(new_dns, "LOWPAN");

    /* Border Router connection */
    rc = network->connect();
    if (rc != 0) {
        printf("Error! net->connect() returned: %d\n", rc);
        return rc;
    }

    /* Print IP address */
    SocketAddress a;
    network->get_ip_address(&a);
    printf("IP address: %s\n", a.get_ip_address() ? a.get_ip_address() : "None");

    /* Open TCP Socket */
    TCPSocket socket;
    SocketAddress address;
    network->gethostbyname(AIO_SERVER, &address);
    address.set_port(AIO_SERVERPORT);

    /* MQTT Connection */
    client = new MQTTClient(&socket);
    socket.open(network);
    rc = socket.connect(address);
    if(rc != 0){
        printf("Connection to MQTT broker Failed\n");
        return rc;
    }

    MQTTPacket_connectData data = MQTTPacket_connectData_initializer;
    data.MQTTVersion = 4;
    data.keepAliveInterval = 25;
    //data.clientID.cstring = MQTT_CLIENT_ID;
    data.username.cstring = (char *)AIO_USERNAME;
    data.password.cstring = (char *)AIO_KEY;
    if (client->connect(data) != 0){
        printf("Connection to MQTT Broker Failed\n");
    }

    printf("Connected to MQTT broker\n");

    /* MQTT Subscribe */
    if ((rc = client->subscribe(TOPIC_LED, MQTT::QOS0, messageArrived)) != 0){
        printf("rc from MQTT subscribe is %d\r\n", rc);
    }
    printf("Subscribed to Topic: %s\n", TOPIC_LED);

    yield();

    // Yield every 1 second
    //id_yield = main_queue.call_every(SYNC_INTERVAL * 1000, yield);

    // Publish
    //button.fall(main_queue.event(publish));

    //main_queue.dispatch_forever();

    int etape = 0; // 0 = temp, 1 = hum, 2 = press

    while(true){
        yield();

        switch (etape)
        {
        case 0:
            publish(TOPIC_TEMP, bme280.temperature());

            break;
        case 1:
            publish(TOPIC_HUM, bme280.humidity());
            break;
        case 2:
            publish(TOPIC_PRESS, bme280.pressure());
            break;
        
        default:
            break;
        }
        etape++;
        etape %= 3;
        ThisThread::sleep_for(2100ms);
    }
}
