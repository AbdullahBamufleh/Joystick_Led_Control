/*
project: Joystick LED control
Author: Abdullah Bamufleh
last date update: 2024-05-01
*/
const int sw = 2; // for switch pin in the joystik
const int xAxis = A0; // Analog pin number of the x axis 
const int yAxis = A1; // Analog pin number of the y axis 
const int upLed = 5; // up LED pin number
const int downLed = 6; // down LED pin number
const int leftLed = 4; // left LED pin number
const int rightLed = 3; // right LED pin number

void setup() {
pinMode(sw,INPUT); // set the switch pin as an input
digitalWrite(sw,HIGH); // initialze the switch as high
Serial.begin(9600); // start the serial mointor
pinMode(upLed,OUTPUT);   //
pinMode(downLed,OUTPUT);  // define up down LEDs as outputs
pinMode(leftLed,OUTPUT);  // define left right LEDs as outputs
pinMode(rightLed,OUTPUT);//
}

void loop() {

     SwitchState();
     X_AxisRead();
     Y_AxisRead();
     up_down(); 
     left_right();
     turnAllOff();
     
}

  // this method print the switch states
  void SwitchState(){
    Serial.print("Switch mode: ");
    Serial.println(digitalRead(sw)); 
  }
  // this method print the analog pin of x reads
  void X_AxisRead(){
    Serial.print("X axis: ");
    Serial.println(analogRead(xAxis)); 
  }
  // this method print the analog pin of y reads
  void Y_AxisRead(){
    Serial.print("Y axis: ");
    Serial.println(analogRead(yAxis)); 
  }
  // this method controls up and down LEDs
  void up_down(){
    if(analogRead(yAxis)==1023){
    digitalWrite(downLed,HIGH);
   }else if(analogRead(yAxis)== 0){
    digitalWrite(upLed,HIGH);
   }
  }
  // this method contrls left and right LEDs
  void left_right(){
    if(analogRead(xAxis)==1023){
    digitalWrite(leftLed,HIGH);
   }else if(analogRead(xAxis)== 0){
    digitalWrite(rightLed,HIGH);
   }
  }
  // this method check if all LEDs are on
  boolean checkAllLights() {
     int leds[] = {3,4,5,6};
        for (int led : leds) {
            if (digitalRead(led) == LOW) {
                return false;
            }
        }
        return true;
    }
  }
  // this method turn off all LEDs 
    void turnAllOff(){
      int swStates = true;
      if(digitalRead(sw) == LOW) {
    swStates = !swStates;
    digitalWrite(upLed,swStates);
    digitalWrite(downLed,swStates);
    digitalWrite(leftLed,swStates);
    digitalWrite(rightLed,swStates);
   }
  }