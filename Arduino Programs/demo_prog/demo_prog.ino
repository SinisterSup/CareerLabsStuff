void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);//Led on pin 13 Switches ON
delay(1000);//We are giving a delay of 1 sec
digitalWrite(13,LOW);//Led on pin 13 switches Off
delay(1000);//We are giving a delay of 1 sec
}
