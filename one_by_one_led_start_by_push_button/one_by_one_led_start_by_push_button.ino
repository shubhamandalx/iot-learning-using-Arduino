int count =0;

void setup(){
  pinMode(12,INPUT_PULLUP);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop(){
  int val=digitalRead(12);
  if(val==0){
    count=count+1;
  }
  switch(count){
    case 1:
    digitalWrite(3,HIGH);
    break;

    case 2:
    digitalWrite(4,HIGH);
    break;

    case 3:
    digitalWrite(5,HIGH);
    break;

    case 4:
    digitalWrite(13,HIGH);
    break;

    default:
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(13,LOW);

  
  }delay(200);
  
}
