/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstThread.java                                           */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test création de threads                                                   */
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
package tstthread;

import javax.microedition.midlet.MIDlet;

public class TstThread extends MIDlet {
    
    public void startApp() {
        task1 t1;
        task2 t2;
        Thread th1, th2;
        
        try {
            t1 = new task1();
            th1 = new Thread(t1);
            th1.start();
            
            t2 = new task2();
            th2 = new Thread(t2);
            th2.start();
            
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    public void destroyApp(boolean unconditional) {
    }
}

class task1 implements Runnable {
    private boolean quit = false;
    
    public void run() {
        int i;

        i = 0;
        try {
            while (!quit) {
                i++;
                System.out.print("task1 :");
                System.out.println(i);
                Thread.sleep(1000);
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    public void quit() {

        quit = true;
    }
}

class task2 implements Runnable {
    private boolean quit = false;

    public void run() {
        int i;

        i = 0;
        try {
            while (!quit) {
                i++;
                System.out.print("task2 :");
                System.out.println(i);
                Thread.sleep(1000);
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    public void quit() {

        quit = true;
    }
}