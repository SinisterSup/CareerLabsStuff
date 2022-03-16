void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Set the Serial Communication by initializeing the baud rate 9600 
Serial.println("Hello, World!"); //Prints "Hello, World!" on the Serial Monitor
}

void loop() {
  // put your main code here, to run repeatedly:

int val = analogRead(0); //Read the analog vale of Pin A0 and store it in "val"
/* Print the stored Analog value on the Serial Monitor
 */
Serial.println("The random value in the Analog Pin is " + String(val));
delay(1000);//Delay of 1 sec 
}
