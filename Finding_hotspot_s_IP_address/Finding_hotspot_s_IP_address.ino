#include <SPI.h>
#include <WiFi.h>

char ssid[]="XYZ";        //Hotspot name(username)
char password[]="123";    // Your password

IPAddress ip,gateway,subnet;         //Datatype (with "ip" as variable)

void setup()
{
  pinMode(RED_LED, OUTPUT);
pinMode(GREEN_LED, OUTPUT);
Serial.begin(9600);         //Initialising the connection between the networks
Serial.print("Checking for connection with");
Serial.println(ssid);        
WiFi.begin(ssid,password);

while (WiFi.status() != WL_CONNECTED)
{
Serial.print(".");
digitalWrite(RED_LED, HIGH);
delay(3000);
}
digitalWrite(RED_LED, LOW);
Serial.println("\nConnection has been established succesfully");
while (WiFi.localIP() == INADDR_NONE)
{
Serial.print(".");
delay(300);
}

ip=WiFi.localIP();
Serial.println(ip);
digitalWrite(GREEN_LED, HIGH);
gateway=WiFi.gatewayIP();
Serial.println(gateway);
subnet=WiFi.subnetMask();
Serial.println(subnet);
}
void loop()
{
}
