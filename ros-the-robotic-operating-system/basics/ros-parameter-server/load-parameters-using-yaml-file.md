# Load Parameters using YAML file



## [Load Parameters using YAML file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-yaml.html#load-parameters-using-yaml-file)

In this section we will learn how to load your own parameters in ROS Parameter Server using a YAML File.

### [Steps](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-yaml.html#steps)

1. Navigate to `pkg_ros_basics`.

   ```text
   cd ~/catkin_ws/src/pkg_ros_basics
   ```

   OR

   ```text
   roscd pkg_ros_basics
   ```

   **NOTE:** `roscd` will work only if you have sourced `setup.bash` of your catkin workspace.  

2. Create a `config` folder for your Python scripts and navigate into the folder.

   ```text
   mkdir config
   cd config
   ```

3. Create a configuration YAML file called `config_my.yaml`.

   ```text
   touch config_my.yaml
   ```

4. Open the script in any text-editor and start editing.

   ```text
   gedit config_my.yaml
   ```

5. Now fill your config file.

   ```text
   # Comment: my_config.yaml Configuration
   details:
     name:
        first: "Hisenberg"  # First Name
        last: "White" # Last Name
  
     contact:
        address: "XYZ Street, XYZ"  # Address
        phone: 77777    # Contact
   ```

   * ROS Build system will create a Python Dictionary called `details`.
   * This dictionary will have two keys,
     1. Dictionary `name`
     2. Dictionary `contact`
   * In your ROS Node you can use `rospy` to get parameters stored in this `config_my` dictionary.

     ```text
     param_config_my = rospy.get_param('details')

     first_name = param_config_my['name']['first']
     phone = param_config_my['contact']['phone']
     ```

6. Now if you want to load the parameters defined in the YAML file you have to first start the ROS Parameter Server.

   Open up a new terminal and enter the following.

   ```text
   roscore
   ```

7. Now load your parameters.

   ```text
   rosparam load config_my.yaml
   ```

8. Now get the list of parameters loaded in your ROS Parameter Server.

   ```text
   rosparam list
   ```

   Output:

   ```text
   /details/contact/address
   /details/contact/phone
   /details/last
   /details/name/first
   /rosdistro
   /roslaunch/uris/host_pc__37763
   /rosversion
   /run_id
   ```

   Here you can see the first four parameters are loaded from our `config_my.yaml` file.  

9. Now to view the content of any parameter do the following.

   ```text
   rosparam get /details/contact/phone
   ```

   Output:

   ```text
   77777
   ```

   This is the value which we defined in the `config_my.yaml` file.

