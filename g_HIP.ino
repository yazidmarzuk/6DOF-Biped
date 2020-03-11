/********HIP FUNCTIONs*********************************************************************/

// First Time
void leftForwardFirst()
{
  for (int i = 0; i < 15 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     rightHip.write(rightHipPos+i);  //right hip down
      delay(forDelay);}
  }

/*******LOOP************************************************/
// Loop
void leftForwardLoop()
{
for (int i = 0; i < 45 ; i++ )  
 {
  leftHip.write((leftHipPos-15)+i); //left hip up
  rightHip.write((rightHipPos-15)+i);  //right up down

  delay(forDelay);}
}


void rightForwardLoop()
{
for (int i = 0; i < 45 ; i++ )
{
  leftHip.write((leftHipPos+15)-i); // left hip up
  rightHip.write((rightHipPos+15)-i); // right hip up
  delay(forDelay);
}
}
