# Create a ROS Launch File



### [roslaunch Command](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-create.html#roslaunch-command)

* `roslaunch` is a tool for easily launching multiple ROS nodes locally and remotely via SSH.
* It includes options to automatically respawn processes that have already died. `roslaunch` takes in one or more XML configuration files \(with the .launch extension\) that specify the parameters to set and nodes to launch.
* Usage:

  ```text
  roslaunch <package> file.launch
  ```

  `<package>` is nothing but the package name which you have created using `catkin_create_pkg` command or used any other package.

### [Steps to create a launch file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-create.html#steps-to-create-a-launch-file)

1. After creating a package, create a folder in the package names as a `launch` folder to store all the launch files in that folder.

   ```text
   cd ~/catkin_ws/src/<package>
   mkdir launch
   ```

2. Here we can create launch files by running this command by going into the `launch` directory, we can keep any name for the launch file,

   ```text
   cd launch
   touch filename.launch
   ```

   Now you can edit your launch file by adding different nodes that you have to run simultaneously.

### [Steps to add a ROS node in the launch file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-create.html#steps-to-add-a-ros-node-in-the-launch-file)

1. Launch files always starts with

   ```text
    <launch>
   ```

   and end with

   ```text
   </launch>
   ```

2. Now to add any executable file which we have seen in the rosrun\_command section, we have to add this line,

   ```text
   <node pkg="name_of_package" type="name_of_executable.py" name="name_of_executable" 
   output="screen"/>
   ```

   * `pkg` is the package name which you have created
   * `type` is the name of executable file
   * `name` is the name of the node which is created in that executable
   * `output` means it will print the data given to the roslog command

### [Steps to load Config YAML file in ROS Parameter Server](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-create.html#steps-to-load-config-yaml-file-in-ros-parameter-server)

* You can use `rosparam` tag to load the YAML file.

  ```text
  <rosparam file ="$(find name_of_package)/config/config.yaml"/>
  ```

  * `name_of_package` is the name of your ROS package.
  * `config.yaml` is the name of your configuration file.

### [Steps to add a Shell Script in the launch file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-launch-create.html#steps-to-add-a-shell-script-in-the-launch-file)

* You can use `node` tag to run any shell script using launch file

  ```text
  <node pkg="name_of_package" type="shell_script.sh" name="shell_script" output="screen">
          <param name="cmd" value="$(find name_of_package)/launch/shell_script.sh"/>
  </node>
  ```

  * `name_of_package` is the name of your ROS package.
  * `shell_script.sh` is the name of your configuration file.
  * `/launch/shell_script.sh` is the location of the shell script inside your ROS Package folder.

