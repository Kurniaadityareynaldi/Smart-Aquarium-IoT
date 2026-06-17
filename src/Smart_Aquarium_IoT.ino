#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Adafruit_NeoPixel.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Servo.h>

#define PIN D3
#define NUMPIXELS 10

const int relayPin = D1;
const int sensorPin = D2;
BlynkTimer timer;
OneWire oneWire(sensorPin);
DallasTemperature sensors(&oneWire);
int voltaseSensor;
float temp;
const int suhu = 24;
Servo servo;
#define BLYNK_PRINT Serial
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(10, D3, NEO_GRB + NEO_KHZ800);

char auth[] = "2XTIqdccd9MNzWh2PqraR2xuWUDphDTZ";
char ssid[] = "kutynidx";
char pass[] = "kuznetsov";

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com",8080);
  pixels.begin();
  sensors.begin();
  pinMode(sensorPin,INPUT);
  pinMode(relayPin,OUTPUT);
  timer.setInterval(1000L, sendTemps);
  servo.attach(D4);
  
}
void sendTemps()
{
  sensors.requestTemperatures(); 
  temp = sensors.getTempCByIndex(0);
  Serial.println(temp);
  Blynk.virtualWrite(V2, temp);
  if (temp > suhu)
  {
    digitalWrite(relayPin, LOW);
  }
  else if (temp < suhu)
  {
    digitalWrite(relayPin, HIGH);
  }
  delay(1000);
}

void loop()
{
  Blynk.run();
  timer.run();
}

BLYNK_WRITE(V1)
{
  int R = param[0].asInt();
  int G = param[1].asInt();
  int B = param[2].asInt();
  for(int i=0;i<NUMPIXELS;i++)
  {
    pixels.setPixelColor(i, pixels.Color(R,G,B));
    pixels.show();
  }
}

BLYNK_WRITE(V4)
{
  servo.write(90);
  delay(1000);
  servo.write(00);
}
BLYNK_WRITE(V5)
{
  pixels.fill(pixels.Color(255, 255, 255));
  pixels.show();
}
BLYNK_WRITE(V6)
{
  pixels.fill(pixels.Color(0, 0, 0));
  pixels.show();
}
