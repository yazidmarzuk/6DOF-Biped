# pub

* `rostopic pub` publishes data on to a topic currently advertised.
* Usage:

```text
rostopic pub [topic] [msg_type] [args]
```

* Let's move the turtle inside the turtlsim window.

```text
rostopic pub /turtle1/cmd_vel geometry_msgs/Twist "linear:
  x: 0.0 
  y: 0.0
  z: 0.0
angular:
  x: 0.0
  y: 0.0
  z: 0.0"
```

> Here we recommend to double tap the TAB button after `/turtle1/cmd_vel` \(don't forget the space after the topic name\). You'll see the message **type** appearing after a few instance. Similarly, double tapping after 'geometry\_msgs/Twist' will make the corresponding message content appear automatically. Try it with other commands too.

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtlesim_pub_before.png)

* Now that we have the complete blank \(with all _constants_ as zeros\) pub command for `/turtle1/cmd_vel`, let's rotate it about its z-axis \(Yep! the Omega variable\).

```text
rostopic pub /turtle1/cmd_vel geometry_msgs/Twist "linear:
  x: 0.0 
  y: 0.0
  z: 0.0
angular:
  x: 0.0
  y: 0.0
  z: 0.5
```

* After executing the above command you will see the turtle rotating clockwise. ![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtlesim_pub_after.png)
* However, the turtle only rotated for a while and not continuously. This is because our `pub` command was only sent once. So, to keep the turtle rotating we need to keep sending our `pub` command repeatedly. And to do so, we'll use the `-r` argument with `pub` command.
* The following command is used to publish a steady stream of commands at a rate of 10Hz.

```text
rostopic pub -r 10 /turtle1/cmd_vel geometry_msgs/Twist "linear:
  x: 0.0
  y: 0.0
  z: 0.0
angular:
  x: 0.0
  y: 0.0
  z: 0.5"
```

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/gifs/turtle_rotate.gif)

* You can always know more about `pub` command by simply typing `rostopic pub --help`.

> For more details refer, [http://wiki.ros.org/rostopic\#rostopic\_pub](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-comm-topic-cmd-rostopic-pub.html)

