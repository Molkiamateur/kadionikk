/******************************************************************************/
/*                                                                            */
/* Nom du fichier  : TstWww.java                                              */
/*                                                                            */
/* Version et date : 1.0                                                      */
/*                                                                            */
/* Auteur          : P. Kadionik ENSEIRB                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Description     :                                                          */
/* Test serveur Web                                                           */
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
package tstwww;

import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.io.Reader;

import javax.microedition.io.Connector;
import javax.microedition.io.ServerSocketConnection;
import javax.microedition.io.SocketConnection;
import javax.microedition.midlet.MIDlet;

public class TstWww extends MIDlet {
    
    public void startApp() {
        ServerSocketConnection ssc;
        SocketConnection sc = null;
        InputStream is;
        OutputStream os;
        
        StringBuffer results = new StringBuffer();

        try {
            ssc = (ServerSocketConnection) Connector.open("socket://:8080");

            while (true) {      
                sc = (SocketConnection) ssc.acceptAndOpen();
        
                is = sc.openInputStream();
                os = sc.openOutputStream();
                
                Reader in = new InputStreamReader(is);
                String line; 
                while ((line = readLine(in)) != null) 
                    ; 
                
                PrintStream out = new PrintStream(os);
        
                out.print("HTTP/1.1 200 OK\n");
                out.print("Content-Type: text/html\n");
                out.print("\n");

                out.print("<H1><CENTER> Welcome to the rpi-java Web Server </CENTER></H2>");
                out.print("Hello world!");
            
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
}