int moisture;
int sensorvalue;

void setup(){
  pinMode(A0,INPUT);
  Serial.begin(9600);
  Serial.println("Soil Moisture content");
}

void loop(){
  sensorvalue = analogRead(A0);
  moisture = (100-((sensorvalue/1023)*100));
  Serial.print("moisture content:");
  Serial.print(moisture);
  Serial.println("%");
  if (sensorvalue >= 1000){
    Serial.println("sensor not in soil");
    delay(1000);
  }
  if (sensorvalue <= 1000 && sensorvalue >= 600){
    Serial.println("Dry");
    delay(1000);
  }
  if (sensorvalue <= 600 && sensorvalue >= 370){
    Serial.println("Humid");
    delay(1000);
  }
  if (sensorvalue < 370){
    Serial.println("watery");
    delay(1000);
  }
}