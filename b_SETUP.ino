
void setup() 
{ 
 //setting digital pins as output for LEDs 
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);

 //setting output for motors
 //The arduino UNO has only 6 pins capable of PWM therefore you will have to attach
 //the motors to one of these 6 pins
  leftAnkle.attach(3);  // attaches the servo on pin 3 to the servo object
  rightAnkle.attach(5);  // attaches the servo on pin 5 to the servo object
  leftHip.attach(6);  // attaches the servo on pin 6 to the servo object
  rightHip.attach(9);  // attaches the servo on pin 9 to the servo object
  leftShoulder.attach(11);  // attaches the servo on pin 11 to the servo object
  rightShoulder.attach(10);  // attaches the servo on pin 10 to the servo object
  
  //Put Robot in Neutral Position
  centerPosition(); //neutral position
  
  //Blink LED 5 times
  for(int i = 0; i < 5 ; i++)
  {ledBlink();}
  
  delay(500);   //delay 4 seconds
  
  //Move Forward
  for( int i = 0; i<15 ; i++ ) 
 {forward();

 }
 delay(500);
 
 // back to neutral 
  centerPosition();
}
