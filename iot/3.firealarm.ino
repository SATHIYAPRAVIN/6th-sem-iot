const int sensor = A0;
int sensorvalue = 0;
const int max = 1023;
const int min = 0;

void setup(){
  pinMode(sensor, INPUT);
  Serial.begin(9600);
  Serial.println("Fire sensor");
}

void loop(){
  sensorvalue = analogRead(sensor);
  int value = map(sensorvalue,min,max,0,3);
  switch (value){
    case 0:
    Serial.println("close fire");
    delay(10);
    break;

    case 1:
    Serial.println("Near fire");
    delay(10);
    break;

    case 2:
    Serial.println("No fire");
    delay(10);
    break;

  }
}