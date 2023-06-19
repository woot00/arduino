     #include <Servo.h>
Servo myservo;
int motor1PinA  = 2 ;
int motor1PinB =3 ;
int enablelPin=  11 ; 

  void setup() {
     myservo.attach(9);
     pinMode(motor1PinA, OUTPUT);     
     pinMode(motor1PinB, OUTPUT);
     pinMode(enablelPin, OUTPUT);
     analogWrite(enablelPin, 100);
  }
   void loop() {
    Forward();
    delay(7000);
    Rightward();
    delay(2000);
    Forward();
    delay(2000);
    Rightward();
    delay(1000);
    myservo.write(90);
    digitalWrite(motor1PinA, LOW);
    digitalWrite(motor1PinB, HIGH);
    delay(3700);
    myservo.write(142);
    digitalWrite(motor1PinA, LOW);
    digitalWrite(motor1PinB, HIGH);
    delay(8000);
    digitalWrite(motor1PinA, LOW);
    digitalWrite(motor1PinB, LOW);
   
    }


   

void Forward(){    //  앞
           myservo.write(140);          
           digitalWrite(motor1PinA, LOW);
           digitalWrite(motor1PinB, HIGH);
 }
void Backward(){    //  뒤
           myservo.write(130); 
           digitalWrite(motor1PinA, HIGH);
           digitalWrite(motor1PinB, LOW);
 }
void Rightward(){    //  오른쪽
           myservo.write(90); 
           digitalWrite(motor1PinA, LOW);
           digitalWrite(motor1PinB, HIGH);
}
void Leftward(){    //  왼쪽
           myservo.write(180); 
           digitalWrite(motor1PinA, LOW);
           digitalWrite(motor1PinB, HIGH);           
 }
