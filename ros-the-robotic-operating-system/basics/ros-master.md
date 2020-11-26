# ROS Master

* As you know ROS Nodes are building blocks of any ROS Application. A single ROS Application may have multiple ROS Nodes which communicate with each other.
* The role of the ROS Master is to enable individual ROS nodes to locate one another.
* Once these nodes have located each other they communicate with each other peer-to-peer.
* The ROS Master provides naming and registration services to the rest of the nodes in the ROS system.
* You can say, communication is established between nodes by the ROS Master. So, without ROS Master running ROS Nodes can not communicate with each other.

### [Start ROS Master](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-master.html#start-ros-master)

To start ROS Master you just have to enter the following command in the terminal.

```text
roscore
```

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/learn-ros-basics-master.png)

So roscore will start the following:

1. ROS Master
2. ROS Parameter Server
3. `rosout` Logging Node

In the preceding output, you can see information about the computer, parameter which list the name \(Melodic\) and version number of ROS distribution, and some other information.

### [Reading Assignment](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-master.html#reading-assignment)

1. [ROS Wiki - Master](http://wiki.ros.org/Master)
2. [ROS Wiki - roscore](http://wiki.ros.org/roscore)

