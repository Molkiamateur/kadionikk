/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstDS1624.java                                           */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test DS1624                                                                */
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
package tstds1624;

import jdk.dio.DeviceManager;
import java.io.IOException;
import javax.microedition.midlet.MIDlet;
import jdk.dio.i2cbus.I2CDevice;
import jdk.dio.i2cbus.I2CDeviceConfig;
import java.util.Date;
import java.util.Calendar;

public class TstDS1624 extends MIDlet {
    
    public void startApp() {
        DS1624 ds;
        double temp;

        try {
            ds = new DS1624();

            while (true) {
                ds.start();
                temp = ds.read_temp();
                
                System.out.print("Température Actuelle : ");
                System.out.print(temp);
                System.out.println(" °C");
                
                ds.stop();
                Thread.sleep(100);
            }
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public void destroyApp(boolean unconditional) {
    }
}

class DS1624 {
    final int LCD_I2C_ID = 0x48;
    final int BUS_ID = 1;
    
    final int DS1624_READ_TEMP = 0xAA;
    final int DS1624_START = 0xEE;
    final int DS1624_STOP = 0x22;
    
    I2CDeviceConfig config;
    I2CDevice slave;
 
    public DS1624() throws InterruptedException, IOException {
 
        config = new I2CDeviceConfig(BUS_ID, LCD_I2C_ID, 7, 100000);
        slave = DeviceManager.open(config);
    }
 
    public void start() throws InterruptedException, IOException {

        slave.write(DS1624_START);
    }
 
    public void stop () throws InterruptedException, IOException {
 
        slave.write(DS1624_STOP);
    }
 
    public double read_temp() throws InterruptedException, IOException {
        int lsb;
        int msb;
        double temp;
        
        slave.write(DS1624_READ_TEMP);
        
        msb = slave.read();
        lsb = slave.read();
        
        msb = msb << 8;
        temp = ((msb + lsb) >> 4) * 0.0625;
        
        return temp;
    }
 
    public void end() throws IOException {
 
        slave.close();
    }
}
