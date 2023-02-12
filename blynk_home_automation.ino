#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME ""
#define BLYNK_AUTH_TOKEN ""

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "";
char pass[] = "";


BLYNK_WRITE(V0)
{   
  int value = param.asInt(); // Get value as integer
  digitalWrite(D0,value);
}
BLYNK_WRITE(V1)
{   
  int value = param.asInt(); // Get value as integer
  digitalWrite(D1,value);
}
BLYNK_WRITE(V2)
{   
  int value = param.asInt(); // Get value as integer
  digitalWrite(D2,value);
}

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
}

void loop()
{
  Blynk.run();
}
