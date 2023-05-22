int motor1PinA  = 2 ;
int motor1PinB =3 ;
int enablelPin=  11 ; 

  void setup() {
     pinMode(motor1PinA, OUTPUT);     
     pinMode(motor1PinB, OUTPUT);
     pinMode(enablelPin, OUTPUT);
     analogWrite(enablelPin, 100);
  }
   void loop() {
     digitalWrite(motor1PinA, LOW);
     digitalWrite(motor1PinB, HIGH);
     delay(1000);
     digitalWrite(motor1PinB, LOW);
     digitalWrite(motor1PinA, HIGH);
     delay(1000);
     }
