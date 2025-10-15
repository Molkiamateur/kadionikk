/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : Www.java                                                 */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Serveur Web embarqué dans rpi-java : IoT                                   */
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
package www;

import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.io.Reader;
import java.util.Calendar;
import java.util.Date;

import javax.microedition.io.Connector;
import javax.microedition.io.ServerSocketConnection;
import javax.microedition.io.SocketConnection;
import javax.microedition.midlet.MIDlet;
import jdk.dio.DeviceManager;
import jdk.dio.i2cbus.I2CDevice;
import jdk.dio.i2cbus.I2CDeviceConfig;

public class Www extends MIDlet {
    
    public void startApp() {
        ServerSocketConnection ssc;
        SocketConnection sc;
        InputStream is;
        OutputStream os;
        StringBuffer results;
        String line;
        
        DS1624 ds;
        double temp;
        String d;
        Date now;

        results = new StringBuffer();

        try {
            ds = new DS1624();
            
            ssc = (ServerSocketConnection) Connector.open("socket://:8080");

            while (true) {      
                sc = (SocketConnection) ssc.acceptAndOpen();
        
                is = sc.openInputStream();
                os = sc.openOutputStream();
                
                Reader in = new InputStreamReader(is);
                while ((line = readLine(in)) != null) 
                    ; 
                
                PrintStream out = new PrintStream(os);
        
                out.print("HTTP/1.1 200 OK\n");
                out.print("Content-Type: text/html\n");
                out.print("\n");

                // Données réponse HTTP
                out.print("<meta http-equiv=\"Refresh\" content=\"1\">");
                
                now = new Date();
                out.print("<H1><CENTER> Il est ");
                out.print(getDateString(now));             
                
                ds.start();
                temp = ds.read_temp();
                ds.stop();
                out.print(" et il fait ");
                d = String.format("%02.1f", temp);
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

    public void destroyApp(boolean unconditional) {
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