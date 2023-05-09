#include "DHT.h"
#define dhtpin 2
#define dhttype DHT11

DHT dht(dhtpin,dhttype);

void setup(){
  Serial.begin(9600);
  Serial.println("Temperature and Humidity sensor");
  dht.begin();
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Temperature:");
  Serial.println(t);
  Serial.print("Humidity:");
  Serial.println(h);
  if (t>29){
    Serial.println("Alert Temperature is high");
    delay(2000);
  } 
  else {
    Serial.println("Alert temperature is Low");
    delay(2000);
  }


}