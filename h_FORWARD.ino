////WALKING FORWARD FUNCTION ////////////////////////////////////////////////////////////////////////

//Fuction to walk forward
void forward()
{    
  if(firstTime)
 {   
   ankleOutFirst(); // left leg forward 
  leftForwardFirst();
 }

else
{
 leftForwardLoop(); //left leg forward
}

ankleInLoop();
delay(delayOne);

//Right Leg Forward
rightForwardLoop();
delay(delayOne); 

ankleOutLoop();
delay(delayOne);

firstTime = false;
}
