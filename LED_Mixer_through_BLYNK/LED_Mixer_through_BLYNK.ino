/**************************************************************
 * Blynk is a platform with iOS and Android apps to control
 * Arduino, Raspberry Pi and the likes over the Internet.
 * You can easily build graphic interfaces for all your
 * projects by simply dragging and dropping widgets.
 *
 *   Downloads, docs, tutorials: http://www.blynk.cc
 *   Blynk community:            http://community.blynk.cc
 *   Social networks:            http://www.fb.com/blynkapp
 *                               http://twitter.com/blynk_app
 *
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 *
 **************************************************************
 * This example shows how to use Arduino WiFi shield
 * to connect your project to Blynk.
 *
 * Feel free to apply it to any other example. It's simple!
 *
 **************************************************************/

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <SPI.h>
#include <WiFi.h>
#include <BlynkSimpleEnergiaWiFi.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; //Your 32 digit auth code received in mail

// Your WiFi credentials
char ssid[] = "XYZ";        //Your device name
char pass[] = "123";        // Set to "" for open networks
int value;
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(RED_LED,OUTPUT);
   pinMode(BLUE_LED,OUTPUT);
  // Or specify server using one of those commands:
  //Blynk.begin(auth, ssid, pass, "server.org", 8442);
  //Blynk.begin(auth, ssid, pass, server_ip, port);
}

void loop()
{
  Blynk.run();
  }
BLYNK_WRITE(V0)
{
int a=param.asInt();
if(a==1)
digitalWrite(BLUE_LED,HIGH);
else
digitalWrite(BLUE_LED,LOW);
}
BLYNK_WRITE(V1)
{
int b=param.asInt();
analogWrite(RED_LED,b);
}
BLYNK_WRITE(V2)
{   
int b=param.asInt();
analogWrite(BLUE_LED,b);
}
BLYNK_WRITE(V3)
{
int b=param.asInt();
analogWrite(GREEN_LED,b);
}
