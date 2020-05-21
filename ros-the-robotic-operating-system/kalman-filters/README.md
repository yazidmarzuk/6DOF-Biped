---
description: >-
  This Is a section dedicated to various Localization Algorithms implemented on
  ROS packages
---

# Localization

 **Robot localization** is the process of determining where a mobile robot is located with respect to its environment. Localization is one of the most fundamental competencies required by an autonomous **robot** as the knowledge of the robot's own location is an essential precursor to making decisions about future actions.

A mobile robot equipped with sensors to monitor its own motion \(e.g., wheel encoders and inertial sensors\) can compute an estimate of its location relative to where it started if a mathematical model of the motion is available. This is known as odometry or dead reckoning. The errors present in the sensor measurements and the motion model make robot location estimates obtained from dead reckoning more and more unreliable as the robot navigates in its environment. Errors in dead reckoning estimates can be corrected when the robot can observe its environment using sensors and is able to correlate the information gathered by these sensors with the information contained in a map. How this can be achieved within a probabilistic framework will be discussed in this article.

    




