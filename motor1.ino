int motor1PinA =2;
int motor1PinB =3;
int enablePin =6;

void setup() {
  // put your setup code here, to run once:
pinMode(motor1PinA,OUTPUT);
pinMode(motor1PinB,OUTPUT);
pinMode(enablePin,100);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motor1PinA,LOW);
digitalWrite(motor1PinB,HIGH);
delay(1000);
}
