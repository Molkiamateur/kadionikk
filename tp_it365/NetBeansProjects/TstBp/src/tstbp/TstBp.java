/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstBp.java                                               */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test appui BP et affichage toutes les 500 ms de l'état du BP : appui,      */
/* pas appui                                                                  */
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
package tstbp;

import jdk.dio.DeviceManager;
import jdk.dio.UnavailableDeviceException;
import jdk.dio.gpio.GPIOPin;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.microedition.midlet.*;

public class TstBp extends MIDlet {
    private final int BP1 = 1;
    private final int BP2 = 3;
    private final int BP3 = 5;
    private final int BP4 = 9;
    
    final boolean PRESSED = false;
    final boolean NOT_PRESSED = true;

    boolean state1, state2, state3, state4;
    GPIOPin bp1, bp2, bp3, bp4;
    
    public void startApp() {
        try {
            bp1 = (GPIOPin) DeviceManager.open(BP1);
            bp2 = (GPIOPin) DeviceManager.open(BP2);
            bp3 = (GPIOPin) DeviceManager.open(BP3);
            bp4 = (GPIOPin) DeviceManager.open(BP4);
            
            
        } catch (IOException ex) {
            ex.printStackTrace();
        }
            
        while(true) {
            try {
                Thread.sleep(500);
                
                state1 = bp1.getValue();
                state2 = bp2.getValue();
                state3 = bp3.getValue();
                state4 = bp4.getValue();
                
                if(!state1){
                    System.out.println("bp1 pressed !");
                }
                if(!state2){
                    System.out.println("bp2 pressed !");
                }
                if(!state3){
                    System.out.println("bp3 pressed !");
                }
                if(!state4){
                    System.out.println("bp4 pressed !");
                }
                
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        }   
    }

    public void destroyApp(boolean unconditional) {
        try {
            if(bp1 != null)
                bp1.close();
            if(bp2 != null)
                bp2.close();
            if(bp3 != null)
                bp3.close();
            if(bp4 != null)
                bp4.close();
  
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}