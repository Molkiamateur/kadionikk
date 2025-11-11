/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstBpListen.java                                         */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test appui BP avec un listener                                             */
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
package tstbplisten;

import jdk.dio.DeviceManager;
import jdk.dio.gpio.GPIOPin;
import java.io.IOException;
import javax.microedition.midlet.*;
import jdk.dio.gpio.GPIOPinConfig;
import jdk.dio.gpio.PinEvent;
import jdk.dio.gpio.PinListener;

public class TstBpListen extends MIDlet implements PinListener {
    private final int GPIO4 = 4;
    private final int BP1 = GPIO4;
    
    private final boolean PRESSED = false;
    private final boolean NOT_PRESSED = true;
    
    
    boolean state; 
    GPIOPin bp1;
    
    public void startApp() {
        try {
            bp1 = (GPIOPin) DeviceManager.open(new GPIOPinConfig(
                    0, 
                    BP1 , 
                    GPIOPinConfig.DIR_INPUT_ONLY, 
                    GPIOPinConfig.DEFAULT,
                    GPIOPinConfig.TRIGGER_FALLING_EDGE,
                    //GPIOPinConfig.TRIGGER_BOTH_EDGES, 
                    false));
        
            // Listener        
            bp1.setInputListener(this);
        } catch (IOException ex) {
            ex.printStackTrace();
        } 
    }
    
    public void destroyApp(boolean unconditional) {
        try {
            if(bp1 != null)
                bp1.close();      
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
 
    public void valueChanged(PinEvent event) {
        try {          
            if(bp1.getValue() == PRESSED)
                System.out.println("BP1 PRESSED");
            
        } catch (IOException ex) {
            ex.printStackTrace();
        }            
    }
}