# Example \#3: Load YAML



### [Aim](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg3.html#aim)

* To write a launch file to load `config_my.yaml` present in `pkg_ros_basics` package.
* Also launch the `node_param_get_set.py` ROS node after loading the YAML file.

### [Code](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg3.html#code)

`load_yaml.launch`

```text
<launch>
    
    <rosparam file ="$(find pkg_ros_basics)/config/config_my.yaml"/>
        
    <node pkg="pkg_ros_basics" type="node_param_get_set.py" name="node_param_get_set" output="screen"/>

</launch>
```

### [Run Command](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg3.html#run-command)

```text
roslaunch pkg_ros_basics load_yaml.launch
```

### [Output](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-eg3.html#output)

```text
... logging to /home/user/.ros/log/e4944c60-025e-11eb-9079-40ec993efb48/roslaunch-pc-16736.log
Checking log directory for disk usage. This may take a while.
Press Ctrl-C to interrupt
Done checking log file disk usage. Usage is <1GB.

started roslaunch server http://ey-pc:39407/

SUMMARY
========

PARAMETERS
 * /details/contact/address: XYZ Street, XYZ
 * /details/contact/phone: 77777
 * /details/name/first: Hisenberg
 * /details/name/last: White
 * /rosdistro: melodic
 * /rosversion: 1.14.7

NODES
  /
    node_param_get_set (pkg_ros_basics/node_param_get_set.py)

ROS_MASTER_URI=http://localhost:11311

process[node_param_get_set-1]: started with pid [16751]
[INFO] [1601393750.973627]: Reading from Parameter Server.
[INFO] [1601393750.977933]: >> First Name: Hisenberg
[INFO] [1601393750.980172]: >> Last Name: White
[INFO] [1601393750.982522]: >> Address: XYZ Street, XYZ
[INFO] [1601393750.985037]: >> Phone: 77777
[INFO] [1601393750.990911]: >> New Phone: 55555
[node_param_get_set-1] process has finished cleanly
log file: /home/ey-pc/.ros/log/e4944c60-025e-11eb-9079-40ec993efb48/node_param_get_set-1*.log
all processes on machine have died, roslaunch will exit
shutting down processing monitor...
... shutting down processing monitor complete
done

```



