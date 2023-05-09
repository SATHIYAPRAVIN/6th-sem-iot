const int sen = A0;
const int led = 13;

int threshold = 600;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(sen,INPUT);
  Serial.begin(9600);
}

void loop(){
  int val = analogRead(sen);
  if (val <= threshold){
    digitalWrite(led,HIGH);
    delay(10);
  }
  else{
    digitalWrite(led,LOW);
    delay(5);
  }
}