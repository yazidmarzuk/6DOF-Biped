# ROS Topics

* ROS Topics allow **unidirectional** communication between ROS Nodes.
* When using ROS Topics a ROS Node can be a **publisher**, **subscriber** or both.
* A ROS Node acting as a publisher can publish data on a ROS Topic and a subscriber ROS Node can subscribe to a ROS Topic.
* Publisher and Subscriber Nodes will exchange ROS Messages over a ROS Topic.
* A ROS Message is a simple data structure, comprising typed fields \(integer, floating point, boolean, etc.\). So a ROS Message can hold data of various data-types.
* Consider this analogy,
  * Let's say you are subscribed to a newspaper called _The Melodic_ published by a publishing house called _OSRF_.
  * Every morning your paperboy _Jon Doe_ will deliver this newspaper to you.
  * You like _The Melodic_ because it has dedicated section on _sports_ and _robotics_ news.
  * In this analogy you can think,
    * `OSRF <--> ROS Publisher Node`

      OSRF which is publishing the newspaper as a Publisher Node.

    * `You <--> ROS Subscriber Node`

      You along with your neighbours who are subscribed to this newspaper as Subscriber Nodes.

    * `Jon Doe <--> ROS Topic`

      Your paperboy who is taking the newspaper from the publisher and delivering it to its subscribers as a ROS Topic.

    * `The Melodic Newspaper <--> ROS Message`

      The physical newspaper is your ROS Message.

    * `Sports and Robotics Sections of The Melodic <--> Data Fields defined in ROS Message`

      The sections of the newspaper is the Data Fields defined in the ROS Message.

### [Reading Assignment](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-comm-topic.html#reading-assignment)

1. [ROS Wiki - Topic](http://wiki.ros.org/Topics)
2. [ROS Wiki - Messages](http://wiki.ros.org/Messages)

