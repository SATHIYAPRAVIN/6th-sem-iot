const int trigpin = 2;
const int echopin = 3;
int distance;
long duration;

void setup(){
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  Serial.println("Distance measure program");
}

void loop(){
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.034 /2;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
}