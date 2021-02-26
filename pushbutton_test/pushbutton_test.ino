void setup(){
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(12);
  Serial.println(val);
  digitalWrite(13,val);
  delay(500);
}
