/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : Chenillard                                               */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Chenillard LED1 à LED5                                                     */
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
package chenillard;

import jdk.dio.DeviceManager;
import jdk.dio.gpio.GPIOPin;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.microedition.midlet.MIDlet;

public class Chenillard extends MIDlet {
    private final int LED1 = 2;
    private final int LED2 = 4;
    private final int LED3 = 6;
    private final int LED4 = 7;
    private final int LED5 = 8;
   
    private boolean dir = true;
    
    GPIOPin led1, led2, led3, led4, led5;
    
    public void startApp() {
        try {
            led1 = (GPIOPin) DeviceManager.open(LED1);
            led2 = (GPIOPin) DeviceManager.open(LED2);
            led3 = (GPIOPin) DeviceManager.open(LED3);
            led4 = (GPIOPin) DeviceManager.open(LED4);
            led5 = (GPIOPin) DeviceManager.open(LED5);
            
            while (true) {
                if(dir){
                    led2.setValue(true);
                    led1.setValue(false);
                    Thread.sleep(100);
                    led3.setValue(true);
                    led2.setValue(false);
                    Thread.sleep(100);
                    led4.setValue(true);
                    led3.setValue(false);
                    Thread.sleep(100);
                    led5.setValue(true);
                    led4.setValue(false);
                    Thread.sleep(100);
                    
                    dir = false;
                }
                if(!dir){
                    led4.setValue(true);
                    led5.setValue(false);
                    Thread.sleep(100);
                    led3.setValue(true);
                    led4.setValue(false);
                    Thread.sleep(100);
                    led2.setValue(true);
                    led3.setValue(false);
                    Thread.sleep(100);
                    led1.setValue(true);
                    led2.setValue(false);
                    Thread.sleep(100);
                    
                    dir = true;
                }
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public void destroyApp(boolean unconditional) {
        try {
            if(led1 != null)
                led1.close();
            if(led2 != null)
                led2.close();
            if(led3 != null)
                led3.close();
            if(led4 != null)
                led4.close();
            if(led5 != null)
                led5.close();           
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}