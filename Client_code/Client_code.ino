#include <SPI.h>
#include <WiFi.h>

char ssid[]="Galaxy M30sF825";        
char password[]="10rupaylagega";

uint16_t port = 9999;
IPAddress server(192,168,122,43);
WiFiClient client;

void setup()
{
  Serial.begin(9600);
  pinMode(PUSH1, INPUT_PULLUP);
  Serial.print("Checking for connection with");
Serial.println(ssid);        
WiFi.begin(ssid,password);

while (WiFi.status() != WL_CONNECTED)
{
Serial.println("Waiting for WiFi Connection");
Serial.print(".");
delay(3000);
}

Serial.println("\nWiFi Connection has been established succesfully");
Serial.println("Attempting to connect to server");

while (!client.connect(server,port))
{
Serial.print(".");
delay(3000);
}

Serial.println("Connected to server");
}
void loop()
{
  if(client.available())
  {
    char c=client.read();
    Serial.print(c);
}
if(!digitalRead(PUSH1))
{
  delay(2000);
  client.println("Send Notes");
}
}
