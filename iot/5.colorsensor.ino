const int s0 = 8;
const int s1 = 9;
const int s2 = 10;
const int s3 = 11;
const int out = 12;
int value = 0;

void setup(){
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,INPUT);
  Serial.begin(9600);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
  Serial.println("Color recongition");
}

void loop(){
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  Serial.print("Red value = ");
  value = pulseIn(out,LOW);
  Serial.print(value);
  Serial.print("\t");
  delay(10);
  digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);
  Serial.print("Blue value = ");
  value = pulseIn(out,LOW);
  Serial.print(value);
  Serial.print("\t");
  delay(10);
  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);
  Serial.print("Green value = ");
  value = pulseIn(out,LOW);
  Serial.print(value);
  Serial.print("\t");
  Serial.println();
  delay(10);
}