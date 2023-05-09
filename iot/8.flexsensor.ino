const int flexsensor = A0;
int flexvalue = 0;

void setup(){
  pinMode(flexsensor,INPUT);
  Serial.begin(9600);
}

void loop(){
  flexvalue = analogRead(flexsensor);
  Serial.print("Flex value:");
  Serial.println(flexvalue);
  delay(10);
}