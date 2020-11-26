# Echo

`rostopic echo` shows the data published on a topic.

* Usage:

```text
rostopic echo [topic]
```

* In the earlier section, at the end, we used `-r` argument to keep it rotation at an angular velocity of 0.5 units. But what if the velocity is unknown and we need this information as feedback to control the motion of turtle???
* Our desire here is to get the _pose_ information or simply one or all of the turtle's x,y, and z values w.r.t to the world.
* But let's see if there is any data being published by the turtlesim node in the first place. To do so, we'll use the following command...

```text
rostopic list -p
```

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtlesim_list_p.png)

* From the `-p` we know 2 topic is being published
  * `/turtle1/color_sensor`
  * `/turtle1/pose`
* Let's see more into the `/turtle1/pose` topic. ![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtlesim_pose_info.png)
* Luckily the pose information of turtle from the turtlesim is being published on the topic `/turtle1/pose`.
* To display the pose data, enter the following command...

```text
rostopic echo /turtle1/pose
```

![](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/turtlesim_echo.png)

