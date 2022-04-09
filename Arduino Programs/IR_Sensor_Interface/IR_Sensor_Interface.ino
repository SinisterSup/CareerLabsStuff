void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int Sensor_value = analogRead(A0);
Serial.println("The value of Sensor_value is" + String(Sensor_value));
delay(1000);
}
