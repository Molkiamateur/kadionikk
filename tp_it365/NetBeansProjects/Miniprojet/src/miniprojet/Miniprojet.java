/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : Miniprojet.java                                          */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Miniprojet IoT : objet connecté rpi-java                                   */
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
package miniprojet;

import jdk.dio.DeviceManager;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.io.Reader;
import javax.microedition.midlet.MIDlet;
import jdk.dio.i2cbus.I2CDevice;
import jdk.dio.i2cbus.I2CDeviceConfig;
import java.util.Date;
import java.util.Calendar;
import javax.microedition.io.Connector;
import javax.microedition.io.ServerSocketConnection;
import javax.microedition.io.SocketConnection;
import jdk.dio.gpio.GPIOPin;

public class Miniprojet extends MIDlet {
    
    @Override
    public void startApp() {               
        task_lcd t1;
        Thread th_lcd;
        task_led t2;
        Thread th_led;
        task_www t3;
        Thread th_www;
        
        double temp;
        
        try {
            t1 = new task_lcd();
            th_lcd = new Thread(t1);
            
            t2 = new task_led();
            th_led = new Thread(t2);
            
            t3 = new task_www();
            th_www = new Thread(t3);
            
            th_lcd.start();
            th_led.start();
            Thread.sleep(2000);
            th_www.start();
            
            while (true) {               
                Thread.sleep(100);  
            }
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        }
    }
    
    @Override
    public void destroyApp(boolean unconditional) {
    }
}

class task_lcd implements Runnable {
    private boolean quit = false;
    
    private final int BP1 = 1;
    private final int BP2 = 3;
    private final int BP3 = 5;
    private final int BP4 = 9;
    
    final boolean PRESSED = false;
    final boolean NOT_PRESSED = true;
    
    boolean state1, state2;
    GPIOPin bp1, bp2;
    
    LCD2x16 display;
    
    Date now;
    String d;
    DS1624 ds;
    
    double min, max;
    static double temp;
    
    @Override
    public void run() {

        temp = 100.0;
        min = 100.0;
        max = -100.0;
        String t;
        
        try {
            bp1 = (GPIOPin)DeviceManager.open(BP1);
            bp2 = (GPIOPin)DeviceManager.open(BP2);

            display = new LCD2x16();
            ds = new DS1624();
            
            display.init();
            display.lcd_clear();
            display.lcd_home();

            while (true) {
                ds.start();
                temp = ds.read_temp();
                if(temp > max)
                    max = temp;
                else if(temp < min)
                    min = temp;
                ds.stop();
                
                now = new Date();
                display.lcd_line_puts(0, getDateString(now));
                if(!bp1.getValue()){
                    t = String.format("TMAX = %02.1f oC", max);
                    display.lcd_line_puts(1, t);
                } else if(!bp2.getValue()){
                    t = String.format("TMIN = %02.1f oC", min);
                    display.lcd_line_puts(1, t);
                } else{
                    t = String.format("TEMP = %02.1f oC", temp);
                    display.lcd_line_puts(1, t);
                }
                Thread.sleep(10);
                now = null;
            }
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
    
    public void quit() {

        quit = true;
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
        
        String st = String.format("%02d:%02d:%02d", Integer.valueOf(hour+2),
                                                    Integer.valueOf(minute),
                                                    Integer.valueOf(second));
        
        return new String(st);
    }
}

class task_led implements Runnable {
    private boolean quit = false;
    private final int LED1 = 2;
    private final int LED2 = 4;
    private final int LED3 = 6;
    private final int LED4 = 7;
    private final int LED5 = 8;
    GPIOPin led1, led2, led3, led4, led5;
    private boolean dir = true;
    
    @Override
    public void run() {
        
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
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
    
    public void quit() {

        quit = true;
    }
}

class task_www implements Runnable{ 
    
    @Override
    public void run() {
        ServerSocketConnection ssc;
        SocketConnection sc;
        
        InputStream is;
        OutputStream os;
        
        StringBuffer results;
        String line;

        String d;
        Date now;

        results = new StringBuffer();

        try {    
            ssc = (ServerSocketConnection) Connector.open("socket://:8080");
            
            while (true) {      
                sc = (SocketConnection) ssc.acceptAndOpen();
        
                is = sc.openInputStream();
                os = sc.openOutputStream();
                
                Reader in = new InputStreamReader(is);
                while ((line = readLine(in)) != null); 
                
                PrintStream out = new PrintStream(os);
        
                out.print("HTTP/1.1 200 OK\n");
                out.print("Content-Type: text/html\n");
                out.print("\n");

                // Données réponse HTTP
                out.print("<meta http-equiv=\"Refresh\" content=\"1\">");
                
                now = new Date();
                out.print("<H1><CENTER> Il est ");
                out.print(getDateString(now));             
                
                out.print(" et il fait ");
                d = String.format("%02.1f", task_lcd.temp);
                out.print(d);      
                out.print(" oC </CENTER></H2>");
                
                out.print("Je suis content");
            
                out.close(); 
                in.close(); 
                sc.close(); 
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }    
    }
    
    public String readLine(Reader in) throws IOException { 
        StringBuffer line = new StringBuffer(); 
        int i; 
        
        while ((i = in.read()) != -1) { 
            char c = (char)i; 
            
            if (c == '\n') 
                break; 
            if (c == '\r') 
                ; 
            else 
                line.append(c); 
        } 
        if (line.length() == 0) 
            return null; 
        
        return line.toString(); 
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
        
        String st = String.format("%02d:%02d:%02d", Integer.valueOf(hour+2),
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
        Thread.sleep(10);
    }
 
    public void stop () throws InterruptedException, IOException {
 
        slave.write(DS1624_STOP);
    }
 
    public double read_temp() throws InterruptedException, IOException {

        int temp_l, temp_h;
        
        slave.write(DS1624_READ_TEMP);
        
        temp_h = slave.read();
        temp_l = slave.read();

        temp_l = temp_l >> 4;

        return (temp_h + ( 0.0625 * temp_l));
    }
 
    public void end() throws IOException {
 
        slave.close();
    }
}