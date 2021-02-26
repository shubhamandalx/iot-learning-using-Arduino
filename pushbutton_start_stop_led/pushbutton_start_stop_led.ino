void setup(){
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop(){
  int val =digitalRead(12);
  if(val==0){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
