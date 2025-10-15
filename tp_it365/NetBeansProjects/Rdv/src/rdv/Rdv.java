/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : Rdv.java                                                 */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Implantation du RDV avec un sémaphore et 2 threads                         */
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
package rdv;

import javax.microedition.midlet.MIDlet;

public class Rdv extends MIDlet {
    
    public void startApp() {
        Semaphore sem;
        task1 t1;
        task2 t2;
        Thread th1, th2;
        
        try {
            sem = new Semaphore (0);
            
            t1 = new task1();
            t1.init(sem);
            
            t2 = new task2();
            t2.init(sem);

            th1 = new Thread(t1);
            th2 = new Thread(t2);
            
            th1.start();
            th2.start();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    public void destroyApp(boolean unconditional) {
    }
}

class Semaphore {
    private int counter;
    
    public Semaphore() {
        this(1);
    }
    
    public Semaphore(int i) {
        if(counter == 0 || counter == 1)
            counter = i;
    }
    
    public synchronized void V() {
        if (counter == 0) {
            this.notify();
        }
        counter++;
    }
    
    public synchronized void P() throws InterruptedException {
        while (counter == 0) {
            this.wait();
        }
        counter--;
    }
}

class task1 implements Runnable {
    Semaphore sem;
    
    public void init(Semaphore Sem) {

        sem = Sem;
    }
    
    public void run() {

        try {
                Thread.sleep(10000);
                
                sem.V();
                System.out.println("task1 V()");
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}

class task2 implements Runnable {
    Semaphore sem;
    
    public void init(Semaphore Sem) {

        sem = Sem;
    }
    
    public void run() {

        try {
                System.out.println("task2 P()");
                sem.P();
                System.out.println("task1 & task2: RDV !");
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}