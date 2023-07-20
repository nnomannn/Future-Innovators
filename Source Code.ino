void forward() {
  analogWrite(6,100);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(11,100);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

float checkdistance_1_2() {
  digitalWrite(1, LOW);
  delayMicroseconds(2);
  digitalWrite(1, HIGH);
  delayMicroseconds(10);
  digitalWrite(1, LOW);
  float distance = pulseIn(2, HIGH) / 58.00;
  delay(10);
  return distance;
}

void up() {
  analogWrite(3,120);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  analogWrite(5,200);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}

void backward2() {
  digitalWrite(7,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
}

void forward2() {
  analogWrite(3,100);
  digitalWrite(7,LOW);
  digitalWrite(9,HIGH);
  analogWrite(5,100);
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
}

void backward() {
  digitalWrite(7,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
}

void forward3() {
  analogWrite(6,100);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(11,100);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void stop() {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void down2() {
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}

void up2() {
  analogWrite(3,120);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  analogWrite(5,200);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}

void sop23() {
  analogWrite(3,0);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  analogWrite(5,0);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}

void sop22() {
  analogWrite(3,0);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  analogWrite(5,0);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}

void stop2() {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void down() {
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}

void setup(){
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  Serial.println(checkdistance_1_2());
  if (checkdistance_1_2() < 30) {
    up();

  } else {
    forward();

  }

  up();

}

