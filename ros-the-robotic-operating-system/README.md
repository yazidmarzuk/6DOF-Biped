---
description: This note is a quick-reference guide to ROS.
---

# ROS - The Robotic Operating System!

### PERCEPTION - DECISION MAKING - ACTUATION

## Slide 2:

ROS is an open-source software framework for robotics development. It is not an operating system in the typical sense. But like an OS, it provides a means of communicating with hardware. It also provides a way for different processes to communicate with one another via message passing. Lastly, ROS features a slick build and package management system called catkin, allowing you to develop and deploy software with ease. ROS also has tools for visualization, simulation, and analysis, as well as extensive community support and interfaces to numerous powerful software libraries.

![](../.gitbook/assets/capture.PNG)

## Slide 3:

* Thin: ROS is designed to be as thin as possible ,so that code written for ROS can be used with other robot software frameworks. A corollary to this is that ROS is easy to integrate with other robot software frameworks: ROS has already been integrated with OpenRAVE, Orocos, and Player.
* ROS-agnostic libraries: the preferred development model is to write ROS-agnostic libraries with clean functional interfaces.
* Language independence: the ROS framework is easy to implement in any modern programming language. We have already implemented it in [Python](http://wiki.ros.org/rospy), [C++](http://wiki.ros.org/roscpp), and [Lisp](http://wiki.ros.org/roslisp), and we have experimental libraries in Java and Lua.
* Easy testing: ROS has a builtin unit/integration test framework called [rostest](http://wiki.ros.org/rostest) that makes it easy to bring up and tear down test fixtures.
* **Operating Systems**

  ROS currently only runs on Unix-based platforms. Software for ROS is primarily tested on Ubuntu and Mac OS X systems, though the ROS community has been contributing support for Fedora, Gentoo, Arch Linux and other Linux platforms.

  While a port to Microsoft Windows for ROS is possible, it has not yet been fully explored.

## Slide 4 \([http://wiki.ros.org/ROS/Concepts](http://wiki.ros.org/ROS/Concepts)\):

ROS has three levels of concepts: the Filesystem level, the Computation Graph level, and the Community level. These levels and concepts are summarized below and later sections go into each of these in greater detail.

### Slide 5 \([http://wiki.ros.org/ROS/Concepts](http://wiki.ros.org/ROS/Concepts)\):

### 

The _Computation Graph_ is the peer-to-peer network of ROS processes that are processing data together. The basic Computation Graph concepts of ROS are _nodes_, _Master_, _Parameter Server_, _messages_, _services_, _topics_, and _bags_, all of which provide data to the Graph in different ways.

* [**Nodes**](http://wiki.ros.org/Nodes): Nodes are processes that perform computation. ROS is designed to be modular at a fine-grained scale; a robot control system usually comprises many nodes. For example, one node controls a laser range-finder, one node controls the wheel motors, one node performs localization, one node performs path planning, one Node provides a graphical view of the system, and so on. A ROS node is written with the use of a ROS [client library](http://wiki.ros.org/Client%20Libraries), such as [roscpp](http://wiki.ros.org/roscpp) or [rospy](http://wiki.ros.org/rospy).
* **So nodes are like Kindergarten Kids. they are useful only with a master to control them.** 
* \*\*\*\*[**Master**](http://wiki.ros.org/Master): Connects all the nodes as well as set communication BTW them. DNS server. 
* [**Parameter Server**](http://wiki.ros.org/Parameter%20Server): The Parameter Server allows data to be stored by key in a central location. It is currently part of the Master.
* [**Messages**](http://wiki.ros.org/Messages): Nodes communicate with each other by passing [messages](http://wiki.ros.org/Messages). A message is simply a data structure, comprising typed fields. Standard primitive types \(integer, floating point, boolean, etc.\) are supported, as are arrays of primitive types. Messages can include arbitrarily nested structures and arrays \(much like C structs\).
* [**Topics**](http://wiki.ros.org/Topics): For the nodes to talk to each other we have something called as topics so node 1 publishes MSG to topic and node 2 subscribes to that topic to get that MSG. so with multi such nodes and multi topics we can create robot. so with sep topic for each functionality - easier for debugging/add new feature. for eg there u have a robot arm . a guy in USA- object det. to add obj det to robot do -&gt; find node for obj det in his project and merge it with ros master
* [**Services**](http://wiki.ros.org/Services): The publish / subscribe model is a very flexible communication paradigm, but its many-to-many, one-way transport is not appropriate for request / reply interactions, which are often required in a distributed system. Request / reply is done via [services](http://wiki.ros.org/Services), which are defined by a pair of message structures: one for the request and one for the reply. A providing node offers a service under a [name](http://wiki.ros.org/Names) and a client uses the service by sending the request message and awaiting the reply. ROS client libraries generally present this interaction to the programmer as if it were a remote procedure call.
* [**Bags**](http://wiki.ros.org/Bags): Bags are a format for saving and playing back ROS message data. Bags are an important mechanism for storing data, such as sensor data, that can be difficult to collect but is necessary for developing and testing algorithms.

**ROS messages**

ROS uses a simplified messages description language for describing the data values \(aka [messages](http://wiki.ros.org/Messages)\) that ROS [nodes](http://wiki.ros.org/Nodes) publish. This description makes it easy for ROS tools to automatically generate source code for the message type in several target languages. Message descriptions are stored in .msg files in the msg/ subdirectory of a ROS [package](http://wiki.ros.org/Packages).

Each ROS distribution comes with a variety of predefined messages. 

**ROS services** 

Services allow the passing of messages between nodes

Doesn't have any publishers or subscribers

## Practical 

{% embed url="http://gazebosim.org/tutorials?cat=guided\_b&tut=guided\_b3" %}







### Installing ROS on a VM ware

```text
$ sudo apt-get install ros-kinetic-navigation
$ sudo apt-get install ros-kinetic-map-server
$ sudo apt-get install ros-kinetic-move-base
$ sudo apt-get install ros-kinetic-amcl
```

### 

### Setting Up ROS ENV

Before we begin using ROS in a terminal, we must first ensure that all of the environment variables are present. To do this, we must source the setup script provided by ROS

```text
$ source /opt/ros/kinetic/setup.bash
```

### Starting the Master process <a id="starting-the-master-process"></a>

Before you can run any ROS nodes, you must start the Master process.

The Master process is responsible for the following \(and more\):

* Providing naming and registration services to other running nodes
* Tracking all publishers and subscribers
* Aggregating log messages generated by the nodes
* Facilitating connections between nodes

To run the master process, execute the command

```text
$ roscore
```



![](https://video.udacity-data.com/topher/2018/November/5bdb79d8_roscore/roscore.png)

### Listing all Active Nodes <a id="listing-all-active-nodes"></a>

To get a list of all nodes that are active and have been registered with the ROS Master, we can use the command `rosnode list`. Let’s do so now:



![](https://video.udacity-data.com/topher/2018/November/5bdb7a42_rosnode-list/rosnode-list.png)

 `/rosout`: This node is launched by roscore. It subscribes to the standard /rosout topic, the topic to which all nodes send log messages.

### Listing All Topics <a id="listing-all-topics"></a>

In a similar fashion, we are able to query the ROS Master for a list of all topics. To do so, we use the command `rostopic list`.

![](https://video.udacity-data.com/topher/2018/November/5bdb7a76_rostopic-list/rostopic-list.png)

 `/rosout_agg`: Aggregated feed of messages published to /rosout.

### Get Information About a Specific Topic <a id="get-information-about-a-specific-topic"></a>

If we wish to get information about a specific topic, who is publishing to it, subscribed to it, or the type of message associated with it, we can use the command `rostopic info` 

![](https://video.udacity-data.com/topher/2018/November/5bdb7aa6_rostopic-info/rostopic-info.png)

### Show Message Information <a id="turtlesim-comms-show-message-information"></a>

Let’s get some more information about the `geometry_msgs/Twist` message on the `/turtle1/cmd_vel` topic, to do so, we will use the `rosmsg` info command.

![](https://video.udacity-data.com/topher/2018/November/5bdb7ac7_rosmsg-info/rosmsg-info.png)

Sometimes the message definition doesn’t provide an ample amount of detail about a message type. So we use `rosed`

```text
$ rosed [package_name] [filename]
```

### Echo Messages on a Topic <a id="turtlesim-comms-echo-messages-on-a-topic"></a>

Sometimes it may be useful to look at a topic’s published messages in real time. To do so, we can use the command `rostopic echo`.

![](https://video.udacity-data.com/topher/2018/November/5bdb7b25_echo-topic/echo-topic.png)

 

