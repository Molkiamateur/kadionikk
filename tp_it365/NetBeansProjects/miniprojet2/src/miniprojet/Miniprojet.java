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
package miniprojet;

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
import jdk.dio.DeviceManager;
import jdk.dio.gpio.GPIOPin;

public class Miniprojet extends MIDlet {
    private final int LED1 = 2;
    private final int LED2 = 4;
    private final int LED3 = 6;
    private final int LED4 = 7;
    private final int LED5 = 8;
   
    private boolean dir = true;
    
    GPIOPin led1, led2, led3, led4, led5;
    
    @Override
    public void startApp() {
        ServerSocketConnection ssc;
        SocketConnection sc;
        InputStream is;
        OutputStream os;
        StringBuffer results;
        String line;
        
        String d;
        
        int receive;
        int num_led;
        boolean state_led;

        results = new StringBuffer();

        try {            
            led1 = (GPIOPin) DeviceManager.open(LED1);
            led2 = (GPIOPin) DeviceManager.open(LED2);
            led3 = (GPIOPin) DeviceManager.open(LED3);
            led4 = (GPIOPin) DeviceManager.open(LED4);
            led5 = (GPIOPin) DeviceManager.open(LED5);
            
            ssc = (ServerSocketConnection) Connector.open("socket://:8080");

            while (true) {      
                sc = (SocketConnection) ssc.acceptAndOpen();
        
                is = sc.openInputStream();
                os = sc.openOutputStream();
                
                Reader in = new InputStreamReader(is);            
                PrintStream out = new PrintStream(os);
                
                receive = in.read();
                receive -= 48;
                if(receive >= 1 && receive <= 5)
                    num_led = receive;
                else{
                    out.print("num led : ");
                    out.print(receive);
                    out.print("Error : num led invalid");
                    out.print("1");
                    
                    out.close(); 
                    in.close(); 
                    sc.close();
                    
                    continue;
                } 
                
                receive = in.read();
                receive -= 48;
                
                if(receive == 1)
                    state_led = true;
                else if(receive == 0)
                    state_led = false;
                else{
                    out.print("Error : state led invalid");
                    out.print("1");
                    
                    out.close(); 
                    in.close(); 
                    sc.close();
                    
                    continue;
                }      
                               
                switch(num_led){
                    case 1:
                        led1.setValue(state_led);
                        break;
                    case 2:
                        led2.setValue(state_led);
                        break;
                    case 3:
                        led3.setValue(state_led);
                        break;
                    case 4:
                        led4.setValue(state_led);
                        break;
                    case 5:
                        led5.setValue(state_led);
                        break;
                    default:
                        out.print("Error : set led invalid");
                        out.print("1");
                    
                        out.close(); 
                        in.close(); 
                        sc.close(); 
                        break;
                }
                out.print("Youpi youpi ya !!");
                out.println("0");
                
               out.close(); 
                in.close(); 
                sc.close();
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }    
    }
    
    @Override
    public void destroyApp(boolean unconditional) {
    }
}