/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstLCD.java                                              */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test afficheur LCD                                                         */
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
package tstlcd;

import jdk.dio.DeviceManager;
import java.io.IOException;
import javax.microedition.midlet.MIDlet;
import jdk.dio.i2cbus.I2CDevice;
import jdk.dio.i2cbus.I2CDeviceConfig;
import java.util.Date;
import java.util.Calendar;

public class TstLCD extends MIDlet {
    
    public void startApp() {
        LCD2x16 display;
        int i;
        Date now;
        String d;
  
        try {
            display = new LCD2x16();
            i = 0;
            display.init();
            display.lcd_line_puts(1, "LCD:");
            
            while (true) {
                now = new Date();
                display.lcd_line_puts(0, getDateString(now));
                display.lcd_pos(1, 5);
                d = String.format("%05d", i);
                display.lcd_puts(d);
                display.lcd_pos(1, 10);
                d = String.format("%05d", i+2);
                display.lcd_puts(d);
                
                i++;
                Thread.sleep(100);
                now = null;
            }
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
    
    public void destroyApp(boolean unconditional) {
    }
    
    public String getDateString(Date date) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTime(date);

        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH);
        int day = calendar.get(Calendar.DAY_OF_MONTH);
        int hour = calendar.get(Calendar.HOUR_OF_DAY);
        int minute = calendar.get(Calendar.MINUTE);
        int second = calendar.get(Calendar.SECOND);
        
        String st = String.format("%02d:%02d:%02d", Integer.valueOf(hour),
                                                    Integer.valueOf(minute),
                                                    Integer.valueOf(second));
        
        return new String(st);
    }
}

class LCD2x16 {
    final int LCD_I2C_ID = 0x20;
    final int BUS_ID = 1;
    
    I2CDeviceConfig config;
    I2CDevice slave;
 
    public LCD2x16() throws InterruptedException, IOException {
 
        config = new I2CDeviceConfig(BUS_ID, LCD_I2C_ID, 7, 100000);
        slave = DeviceManager.open(config);
    }
 
    public void init() throws InterruptedException, IOException {

        slave.write(0x03);
        lcd_strobe();
        Thread.sleep(20);

        slave.write(0x03);
        lcd_strobe();
        Thread.sleep(20);

        slave.write(0x03);
        lcd_strobe();
        Thread.sleep(20);

        slave.write(0x02);
        lcd_strobe();
        Thread.sleep(20);
        
        lcd_write_inst((byte) 0x28);    // 4-bit, 2 lignes, 5*7 pixels
        //lcd_write_inst((byte) 0x20);    // 4-bit, 1 ligne, 5*7 pixels
        lcd_write_inst((byte) 0x08);    // Affichage off
        lcd_write_inst((byte) 0x01);    // Clear et Home
        lcd_write_inst((byte) 0x06);    // Pas de décalage
        lcd_write_inst((byte) 0x0C);    // Affichage on, curseur clign off

        Thread.sleep(1);
    }
 
    public void lcd_write_char(byte charvalue) throws InterruptedException, IOException {
 
        slave.write(0x00);
        
        slave.write((byte) (0x10 | (charvalue >> 4)));
        lcd_strobe();
        
        slave.write((byte) (0x10 | (charvalue & 0x0F)));
        lcd_strobe();
        
        slave.write(0x00);
    }
 
    public void lcd_write_inst(byte value) throws InterruptedException, IOException {

        slave.write(0x00);
        
        slave.write((byte) ((value >> 4)) & 0x0f); // E=0
        byte result1 = (byte) slave.read();
        lcd_strobe();

        slave.write((byte) (value & 0x0f));
        byte result2 = (byte) slave.read();
        lcd_strobe();
        
        slave.write(0x00);
    }

    public void lcd_line_puts(int line, String string) throws InterruptedException, IOException {
 
        if (line == 0) {
            lcd_pos(0, 0);
        } else if (line == 1) {
            lcd_pos(1, 0);
        }
        
        char[] chars = string.toCharArray();
 
        for (int i = 0; i < chars.length; i++) {
            lcd_write_char((byte) chars[i]);
        }
    }

    public void lcd_puts(String string) throws InterruptedException, IOException {
 
        char[] chars = string.toCharArray();
 
        for (int i = 0; i < chars.length; i++) {
            lcd_write_char((byte) chars[i]);
        }
    }
        
    public void lcd_pos(int li, int co) throws InterruptedException, IOException {
        byte value;
        
        value = (byte)(((li * 0x40) + co) + 0x80); // DB7=1
        
        lcd_write_inst(value); 
    }
    
    public void lcd_strobe() throws InterruptedException, IOException {

        byte readResult = (byte) slave.read();
        readResult |= 0x40; // E=1
        slave.write(readResult);       
        Thread.sleep(1);

        readResult = (byte) slave.read();
        readResult &= 0xBF; // E=0
        slave.write(readResult);        
        Thread.sleep(1);

    }
 
    public void lcd_clear() throws InterruptedException, IOException {

        lcd_write_inst((byte) 0x01); // INST=0x01    Clear
        Thread.sleep(5);
    }
    
    public void lcd_home() throws InterruptedException, IOException {

        lcd_write_inst((byte) 0x02); // INST=0x02    Home 
        Thread.sleep(5);
    }
 
    public void end() throws IOException {
 
        slave.close();
    }
}