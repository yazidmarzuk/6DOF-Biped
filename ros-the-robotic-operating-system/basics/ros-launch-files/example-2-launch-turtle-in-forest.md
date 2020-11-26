# Example \#2: Launch Turtle in Forest



### [Aim](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg2.html#aim)

* To write a launch file to run `turtlesim_node` node and `turtle_teleop_key` node present in `turtlesim` package.
* While launching the `turtlesim_node` make sure to change the background colour of the simulator from blue to forest green.
* Name the launch file `turtlesim.launch` and save it in `launch` folder inside `pkg_ros_basics` package.

### [Code](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg2.html#code)

`turtlesim.launch`

```text
<launch>
    
    <node pkg="turtlesim" type="turtlesim_node" name="node_turtlesim_node">
        <param name="/turtlesim_node/background_r" value="34" />
        <param name="/turtlesim_node/background_g" value="139" />
        <param name="/turtlesim_node/background_b" value="34" />
        <param name="/background_r" value="34" />
        <param name="/background_g" value="139" />
        <param name="/background_b" value="34" />
    </node>
    
    <node pkg="turtlesim" type="turtle_teleop_key" name="node_turtle_teleop_key" />

</launch>
```

#### [Run Command](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg2.html#run-command)

```text
roslaunch pkg_ros_basics turtlesim.launch
```



