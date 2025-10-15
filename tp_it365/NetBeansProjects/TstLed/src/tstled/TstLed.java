/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstLed.java                                              */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test clignotement LED1                                                     */
/*                                                                            */
/******************************************************************************/
// Brochage GPIO Raspberry Pi
// Inputs :
// IN broche   7 GPIO4      DeviceManager.open(1)   GPIOPinConfig(4)
// IN broche  11 GPIO17     DeviceManager.open(3)   GPIOPinConfig(17)
// IN broche  15 GPIO22     DeviceManager.open(5)   GPIOPinConfig(22)
// IN broche  13 GPIO27     DeviceManager.open(9)   GPIOPinConfig(27)
//
// Ouputs : 
// OUT broche 26 GPIO7      DeviceManager.open(2)
// OUT broche 12 GPIO18     DeviceManager.open(4)
// OUT broche 16 GPIO23     DeviceManager.open(6)
// OUT broche 18 GPIO24     DeviceManager.open(7)
// OUT broche 22 GPIO25     DeviceManager.open(8)
/******************************************************************************/
// Brochage I2C Raspberry Pi, bus 1
// I2C_ID=0x20              Afficheur LCD 2x16
// I2C_ID=0x48              Capteur de température DS1624
/******************************************************************************/
/******************************************************************************/
package tstled;

import jdk.dio.DeviceManager;
import jdk.dio.gpio.GPIOPin;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.microedition.midlet.MIDlet;

public class TstLed extends MIDlet {
    private final int LED1 = 2;
    private final int LED2 = 4;
    private final int LED3 = 6;
    private final int LED4 = 7;
    private final int LED5 = 8;
   
    boolean state = true; 
    GPIOPin led1;  

    public void startApp() {
        try {
            led1 = (GPIOPin) DeviceManager.open(LED1);

            while (true) {
              Thread.sleep(1000);
              led1.setValue(state);
              state = !state;
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public void destroyApp(boolean unconditional) {
        try {
            if(led1 != null)
                led1.close();       
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}