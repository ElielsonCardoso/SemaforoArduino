int x;
void setup(){ 
  for(x=5;x<=13;x++)
  pinMode(x,OUTPUT);

}
void loop(){
  for(x=10;x<=13;x++){			
  	digitalWrite(x,HIGH);
  }
  delay(4000);
  for(x=13;x>=10;x--){			
	delay(1000);
    digitalWrite(x,LOW);
  }
  digitalWrite(9,HIGH);			
  delay(2000);
  digitalWrite(9,LOW);
  for(x=5;x<=8;x++){
  	digitalWrite(x,HIGH);
  }
  delay(4000);
  for(x=8;x>=5;x--){
  	delay(1000);
  	digitalWrite(x,LOW);
  }
}
  