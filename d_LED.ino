/*******LED FUNCTIONS******************************************************************/

//Turns on Both LEDs
void ledOn()
{
 digitalWrite(rightEye, HIGH);
 digitalWrite(leftEye, HIGH);
}//end ledOn()

/********************************************/

//Turns off Both LEDS
void ledOff()
{ 
 digitalWrite(rightEye, LOW);
 digitalWrite(leftEye, LOW);
} //end ledOff

/*******************************************/

//Blinks Both LEDS at the same time
void ledBlink()
{
 ledOn();
 delay(100);
 ledOff();
 delay(100); 
}//end ledBlink

/********************************************/
//Blinks each LED one at a time
void ledSwitchBlink()
{
 digitalWrite(rightEye, HIGH);
 delay(100);
 digitalWrite(rightEye, LOW);
 delay(100);
 digitalWrite(leftEye, HIGH);
 delay(100);
 digitalWrite(leftEye, LOW);
 delay(100);  
}//end ledSwitchBlink

