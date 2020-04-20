void leftAnkleOut ()
{
 for (int i = 0; i < 15 ; i++ )
    { leftAnkle.write(leftAnklePos-i);   // left ankle out   
    delay(forDelay);} 
}


void rightAnkleOut()
{for (int i = 0; i < 15 ; i++ )
    {rightAnkle.write(rightAnklePos-i);   //right ankle out 
     delay(forDelay);}
}


void ankleOutFirst()
{
  leftAnkleOut();
   delay(delayOne);
   rightAnkleOut();
   delay(delayOne);
}

/******LOOP*****************************************************/
void ankleInLoop()
{
  for (int i = 0; i <30 ; i++)
{
  leftAnkle.write((leftAnklePos -15)+i);   
  rightAnkle.write((rightAnklePos-10)+i);
  delay(forDelay); }
}

void ankleOutLoop()
{
 for (int i = 0; i <30 ; i++ )
{
  rightAnkle.write((rightAnklePos+15)-i);   //right foot 
  if (i <= 20)
   {leftAnkle.write((leftAnklePos+10)-i);}
   delay(forDelay);  } 
}
