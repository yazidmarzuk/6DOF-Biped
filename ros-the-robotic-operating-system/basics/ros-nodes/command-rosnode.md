# Command: rosnode

## [Command: rosnode](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosnode.html#command-rosnode)

`rosnode` contains the rosnode command-line tool for displaying debug information about [ROS Nodes](http://wiki.ros.org/Nodes).

> Note: For quick information about any command, be that outside of ROS, simply type the command along with suffix `--h` or `-help`. This is a widely used concept among other Linux commands for quick references. Here's an example for `rosnode --h` command

![rosnode functions](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rosnode_help.png)

### [list](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosnode.html#list)

`rosnode list` displays a list of all current nodes.

Let's figure out what argument the `list` sub-command needs. In a new terminal run start the rosmaster:

```text
roscore
```

And in another terminal, run:

```text
rosrun rospy_tutorials talker
```

And in another terminal, run:

```text
rosnode list
```

Now the node named `talker`\(node with word talker in it\) will be printed on the terminal. 

![rosnode functions](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rosnode_list.png)

### [info](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosnode.html#info)

`rosnode info /node_name` displays information about a node, including publications and subscriptions.

Let's figure out what argument the `info` sub-command needs. In a new terminal run start the rosmaster:

```text
roscore
```

And in another terminal, run:

```text
rosrun rospy_tutorials talker
```

And in another terminal, run:

```text
rosnode info <talker_node>
```

This should give details related to the particular node as shown below: 

![rosnode functions](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rosnode_info.png)

### [kill](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosnode.html#kill)

IMPORTANT: rosnode kill is not guaranteed to succeed. Let's figure out what argument the `kill` sub-command needs. In a new terminal run start the rosmaster:

```text
roscore
```

And in another terminal, run:

```text
rosrun rospy_tutorials talker
```

And in another terminal, run:

```text
rosnode kill rosout <talker_node>
```

 Interactive mode. This enables you to select which node to kill from a numbered list, which is useful for killing anonymous nodes.

![rosnode functions](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/media/images/rosnode_kill_name.png)

```text
rosnode kill
1. /rosout

Please enter the number of the node you wish to kill.
```

