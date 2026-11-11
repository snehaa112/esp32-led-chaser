void setup() {
  // put your setup code here, to run once:
pinMode(15, OUTPUT);
pinMode(2, OUTPUT); 
pinMode(5, OUTPUT); 
pinMode(18, OUTPUT);
pinMode(19, OUTPUT);
pinMode(21, OUTPUT);
pinMode(23, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(15,HIGH); 
delay(100); 
digitalWrite(15,LOW);
delay(100); 
digitalWrite(2,HIGH); 
delay(100); 
digitalWrite(2,LOW);
delay(100);
digitalWrite(5,HIGH); 
delay(100); 
digitalWrite(5,LOW);
delay(100);
digitalWrite(18,HIGH); 
delay(100); 
digitalWrite(18,LOW);
delay(100); 
digitalWrite(19,HIGH); 
delay(100); 
digitalWrite(19,LOW);
delay(100);
digitalWrite(21,HIGH); 
delay(100);
digitalWrite(21,LOW);
delay(100); 
digitalWrite(23,HIGH); 
delay(100); 
digitalWrite(23,LOW);
delay(100); 

}
