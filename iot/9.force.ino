const int sensor = A0;
int pressure= 0;

void setup(){
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  Serial.println("Force pressure sensor");
}

void loop(){
  pressure = analogRead(sensor);
  Serial.print("pressure value:");
  Serial.println(pressure);
  if (pressure < 10){
    Serial.println("No pressure");
    delay(2);
  }
  else if (pressure < 200){
    Serial.println("light touch");
    delay(2);
  }
  else if (pressure < 500){
    Serial.println("light pressure");
      delay(2);
  }
  else if (pressure < 800){
    Serial.println("Medium pressure");
    delay(2);
  }
  else {
    Serial.print("High pressure");
  }
 
}