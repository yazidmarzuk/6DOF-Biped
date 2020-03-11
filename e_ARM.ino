/********* Arm Functions **********************************************************************************************/

//Moves hands to outward position from NEUTRAL position
void handOut ()               
{
 for (int i = 0; i < 90 ; i+= 5 )
 {leftShoulder.write(leftShoulderPos + i );
 rightShoulder.write(rightShoulderPos - i);}
}//end handOut()

/********************************************************/

//Brings both arms down from OUT position
void handDown ()                
{
for (int i = 0; i < 90 ; i+= 5 )
 {leftShoulder.write(leftShoulderPos - i );
 rightShoulder.write(rightShoulderPos + i);}
}//end handDown

/********************************************************/

//Demonstration
void armDemo ()
{
  handOut();
  delay(2000);
  handDown();
}//end armDemo
