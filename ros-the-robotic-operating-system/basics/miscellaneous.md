# Miscellaneous

## [Overview of rospy](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-rospy.html#overview-of-rospy)

> Prerequisite: [ROS Topics](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-comm-topic.html)

In your theme, you will be required to do many of these things programatically, that is via programs or scripts. Advantages of using Python and rospy to do so are that the Python scripts do not need to be compiled by ROS build system and can be placed anywhere in the filesystem. Go through the [ROS wiki](http://wiki.ros.org/rospy) and [tutorials](http://wiki.ros.org/rospy/Tutorials) pages of rospy.

As an example we will be looking at how you can make the turtle in turtlesim travel in a circle and stop after one revolution, using rospy. For doing this we will be using the topic `/turtle1/cmd_vel` to give it appropriate angular and linear velocity, and we will be monitoring the `/turtle1/pose` topic to stop when one revolution is complete. To do so we will write simple publishers and subscribers in Python, to get started check out [this tutorial](http://wiki.ros.org/rospy_tutorials/Tutorials/WritingPublisherSubscriber) on the ROS wiki.

We will first import the required Python libraries, that is rospy as well as sections of certain message libraries that we require.

```text
#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
```

The very first line, called a shebang, is required to let rospy know where the version of python we want ot use is located. ROS uses the system Python by default.

We can initialize the ROS node as follows:

```text
rospy.init_node('turtle_revolve', anonymous=True)
```

The topic `/turtle1/cmd_vel` publishes the message of type [geometry\_msgs/Twist](http://wiki.ros.org/geometry_msgs). turtlesim interprets this in the units of m/s and rad/s for linear and angular velocities respectively. These velocities are in the turtle's own frame of reference, thus only the linear.x , linear.y and angular.z velocities are applicable in turtlesim as the turtle can only move in these directions. We initialize the publisher and the message it will publish as follows:

```text
velocity_publisher = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
vel_msg = Twist()
```

After assigning the relevant velocities to `vel_msg`, we can publish it by doing the following at our desired rate.

```text
velocity_publisher.publish(vel_msg)
```

Meanwhile we need to subscribe to the turtle's pose messages.

```text
    rospy.Subscriber("/turtle1/pose", Pose, pose_callback)
```

This will execute the pose\_callback function whenever a message is received. An example pose\_callback function:

```text
def pose_callback(msg):
    print(msg.theta)
```

The final output should look like this, although you may play around with the velocities.

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/gifs/turtle_circle.gif)



## [rqt\_graph](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-rqt-graph.html#rqt_graph)

### [ROS GUI Development Tool \(rqt\)](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-rqt-graph.html#ros-gui-development-tool-rqt)

* ROS provides various GUI tools for robot development.
* These tools helps to visualize and analyze your ROS Application.
* Following are some rqt tools provided by ROS.
  * rqt plugins
  * rqt\_image\_view
  * rqt\_graph
  * rqt\_plot
  * rqt\_bag
* `rqt_graph` is a tool used to your entire ROS Network as a diagram.
* This is a very handy tool if you want to visualize how ROS Nodes are communicating with each other and how they are connected to each other.

### [Usage](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-rqt-graph.html#usage)

In this secion, we will see few inspection commands that are used to find information about ROS Nodes and ROS Topics running as a part of a ROS application.

First and foremost, open a new terminal and type roscore command to start your ROS Master node.

```text
$ roscore
```

Now the result of this command will resemble he output discussed in previous module. For this module we will be using turtlesim simulator that is part of ROS installation.

Run following command in a new terminal window.

```text
$ rosrun turtlesim turtlesim_node
```

You will see output similar to this:

```text
[ INFO] [1601303390.799401514]: Starting turtlesim with node name /turtlesim
[ INFO] [1601303390.804994858]: Spawning turtle [turtle1] at x=[5.544445], y=[5.544445], theta=[0.000000]
```

You will also see image of a turtle at the center in the display screen, as shown in the output below. The turtle in the window is called as turtle1 because it is the first and only turtle in our display.![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtle.png)

So there will be two terminal windows active which can be minimized or dragged off to the side or bottom but should not be closed. We will use three commands that will help us find our way around.

The first command is, "rosnode list". This command prints a list of all running nodes on the terminal.

In third terminal, run the following command:

```text
$ rosnode list
```

You will see output similar to this:

```text
/rosout
/turtlesim
```

The next command "rosnode info ". This command prints node specific information on the terminal.

```text
$ rosnode info /turtlesim
```

You will see output similar to this:

```text
Node [/turtlesim]
Publications: 
 * /rosout [rosgraph_msgs/Log]
 * /turtle1/color_sensor [turtlesim/Color]
 * /turtle1/pose [turtlesim/Pose]

Subscriptions: 
 * /turtle1/cmd_vel [unknown type]

Services: 
 * /clear
 * /kill
 * /reset
 * /spawn
 * /turtle1/set_pen
 * /turtle1/teleport_absolute
 * /turtle1/teleport_relative
 * /turtlesim/get_loggers
 * /turtlesim/set_logger_level


contacting node http://ruchi24-Vostro-15-3568:42299/ ...
Pid: 12698
Connections:
 * topic: /rosout
    * to: /rosout
    * direction: outbound (57779 - 127.0.0.1:51260) [24]
    * transport: TCPROS
```

And finally, the command "rqt\_graph". This command provides a visual representation of the different nodes and the way they interact with each other. We can see the structure of how topics are passed around the system using rqt\_graph.

rqt\_graph is part of the rqt package. Unless you already have it installed, run:

```text
$ sudo apt-get install ros-melodic-rqt
$ sudo apt-get install ros-melodic-rqt-common-plugins
```

We'll need something to drive the turtle aroud with. Open a new terminal window and run following command:

```text
$ rosrun turtlesim turtle_teleop_key
```

You will see output similar to this:

```text
Reading from keyboard
---------------------------
Use arrow keys to move the turtle. 'q' to quit.
```

You can use arrow keys from the keyboard to drive the turtle around. Now that you can drive your turtle around, let's see what's going on behind the scenes.

Basically the turtlesim\_node and turtle\_teleop\_key are communicating with each other over a ROS Topic. turtle\_teleop\_key is publishing the key strokes on a topic, while turtlesim subscribes to the same topic to receive the key strokes.

Open a new terminal window and run following command:

```text
$ rosrun rqt_graph rqt_graph
```

You will see output similar to this:![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rqt_graph1.png)

If you place your mouse over /turtle1/command\_velocity it will highlight the ROS nodes \(here blue and green\) and topics \(here red\). As you can see, the turtlesim\_node and the turtle\_teleop\_key nodes are communicating on the topic named /turtle1/command\_velocity.![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rqt_graph.png)

**References**

1. [ROS Wiki - rqt\_graph](http://wiki.ros.org/ROS/Tutorials/UnderstandingTopics#Using_rqt_graph)

