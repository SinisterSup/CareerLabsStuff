void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,LOW);
}
volatile int stopFlag;

void stop()
{
  stopFlag = 1;
  while(stopFlag);
}
// and have some Hardware IRQ (attachInterrupt or timerinterrupts etc) to reset the stopFlag
void IRQ()
{
  stopFlag = 0;
}
