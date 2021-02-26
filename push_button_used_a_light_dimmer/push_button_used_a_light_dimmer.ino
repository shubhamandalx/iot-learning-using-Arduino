int count =0;

void setup(){
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop(){
  int val =digitalRead(12);
  if(val==0){
    count = count +1;
  }if(val==1){
    analogWrite(13,100);
  }else if(val==2){
    analogWrite(13,200);
  }delay(200);
}
