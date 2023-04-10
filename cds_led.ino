int cds = A0; // Analog input pin that the potentiometer is attached to
int cdsValue = 0; // value read from the pot
int led1=2;
int led2=3;
int led3=4;
void setup() {
Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
cdsValue  = analogRead(cds); // read the analog in value:
Serial.print("sensor = "); // print the results to the serial monitor:
Serial.println(cdsValue);
if((cdsValue)<500)
{ digitalWrite(led1,HIGH); 
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);}
else 
{ digitalWrite(led1,LOW); 
 digitalWrite(led2,LOW); 
 digitalWrite(led3,LOW); }
// for the analog-to-digital converter to settle // after the last reading:
delay(20); // wait 2 milliseconds before the next loop
}
