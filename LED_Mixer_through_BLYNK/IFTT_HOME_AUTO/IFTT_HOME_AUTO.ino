
#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <SPI.h>
#include <WiFi.h>
#include <BlynkSimpleEnergiaWiFi.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "con8TtXeUv3GXNkzVSL0ffjqgkdADFNJ";

// Your WiFi credentials
char ssid[] = "Galaxy M30sF825";
char pass[] = "100rupaylagega";        // Set to "" for open networks
int value;
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(RED_LED,OUTPUT);
   pinMode(BLUE_LED,OUTPUT);
     pinMode(GREEN_LED,OUTPUT);
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
if(b==1)
digitalWrite(RED_LED,HIGH);
else
digitalWrite(RED_LED,LOW);
}
BLYNK_WRITE(V2)
{
int c=param.asInt();
if(c==1)
digitalWrite(GREEN_LED,HIGH);
else
digitalWrite(GREEN_LED,LOW);
}
BLYNK_WRITE(V3)
{
int d=param.asInt();
analogWrite(GREEN_LED,d);

}
