
// Function to write all servos to its neutral position
void centerPosition()  
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos);  
  leftHip.write(leftHipPos);  
  rightHip.write(rightHipPos); 
  leftShoulder.write(leftShoulderPos); 
  rightShoulder.write(rightShoulderPos); 
  delay(1000);
}//end centerPosition();


//Function to write only HIP and ANKLE servos to center position
void lowerCenter()                                                                                  
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos); 
  leftHip.write(leftHipPos); 
  rightHip.write(rightHipPos);  
}//end lowerCenter()

