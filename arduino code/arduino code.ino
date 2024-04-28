int btn0 = 7; //stop
int btn1 = 13; //backward
int btn2 = 10; //forward
int btn3 = 2; //left
int btn4 = 0; //right

int redLED = A0;
int blueLED = A1;

int nMotor1 = 12;
int pMotor1 = 11;

int nMotor2 = 8;
int pMotor2 = 9;

int nMotor3 = 6;
int pMotor3 = 5;

int nMotor4 = 4;
int pMotor4 = 3;

int crct0State;
int crct1State;
int crct2State;
int crct3State;
int crct4State;

int btn0State;
int btn1State;
int btn2State;
int btn3State;
int btn4State;

void setup(){
pinMode(btn0,INPUT);
pinMode(btn1,INPUT);
pinMode(btn2,INPUT);
pinMode(btn3,INPUT);
pinMode(btn4,INPUT);

Serial.begin(9600);
}

void loop(){
btn0State = digitalRead(btn0);
btn1State = digitalRead(btn1);
btn2State = digitalRead(btn2);
btn3State = digitalRead(btn3);
btn4State = digitalRead(btn4);

//stop
if(btn0State == LOW){
if(crct0State == LOW){

crct0State = HIGH;
Serial.println("Car stops.");

digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);

digitalWrite(nMotor1,LOW);
digitalWrite(pMotor1,LOW);

digitalWrite(nMotor2,LOW);
digitalWrite(pMotor2,LOW);

digitalWrite(nMotor3,LOW);
digitalWrite(pMotor3,LOW);

digitalWrite(nMotor4,LOW);
digitalWrite(pMotor4,LOW);

}else{
crct0State = LOW;
}
}

//backward
if(btn1State == LOW){
if(crct1State == LOW){

crct1State = HIGH;
Serial.println("Car moves backward.");

digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);

digitalWrite(nMotor1,HIGH);
digitalWrite(pMotor1,LOW);

digitalWrite(nMotor2,HIGH);
digitalWrite(pMotor2,LOW);

digitalWrite(nMotor3,HIGH);
digitalWrite(pMotor3,LOW);

digitalWrite(nMotor4,HIGH);
digitalWrite(pMotor4,LOW);

}else{
crct1State = LOW;
}
}

//forward
if(btn2State == LOW){
if(crct2State == LOW){

crct2State = HIGH;
Serial.println("Car moves forward.");

digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);

digitalWrite(pMotor1,HIGH);
digitalWrite(nMotor1,LOW);

digitalWrite(pMotor2,HIGH);
digitalWrite(nMotor2,LOW);

digitalWrite(pMotor3,HIGH);
digitalWrite(nMotor3,LOW);

digitalWrite(pMotor4,HIGH);
digitalWrite(nMotor4,LOW);

}else{
crct2State = LOW;
}
}

//left
if(btn3State == LOW){
if(crct3State == LOW){

crct3State = HIGH;
Serial.println("Car turns to the left.");

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,LOW);

digitalWrite(nMotor1,LOW);
digitalWrite(pMotor1,LOW);

digitalWrite(nMotor3,LOW);
digitalWrite(pMotor3,LOW);

digitalWrite(nMotor2,LOW);
digitalWrite(pMotor2,HIGH);

digitalWrite(nMotor4,LOW);
digitalWrite(pMotor4,HIGH);

}else{
crct3State = LOW;
}
}

//right
if(btn4State == LOW){
if(crct4State == LOW){
crct4State = HIGH;
Serial.println("Car turns to the right.");

digitalWrite(blueLED,HIGH);
digitalWrite(redLED,LOW);

digitalWrite(nMotor1,LOW);
digitalWrite(pMotor1,HIGH);

digitalWrite(nMotor3,LOW);
digitalWrite(pMotor3,HIGH);

digitalWrite(nMotor2,LOW);
digitalWrite(pMotor2,LOW);

digitalWrite(nMotor4,LOW);
digitalWrite(pMotor4,LOW);

}else{
crct4State = LOW;
}
}

}