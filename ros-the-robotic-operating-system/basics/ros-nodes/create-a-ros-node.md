# Create a ROS Node

In this section we will learn how to create a ROS Node inside `pkg_ros_basics` ROS Package which we created in the previous section.

1. Navigate to `pkg_ros_basics`.

   ```text
   cd ~/catkin_ws/src/pkg_ros_basics
   ```

   OR

   ```text
   roscd pkg_ros_basics
   ```

   **NOTE:** `roscd` will work only if you have sourced `setup.bash` of your catkin workspace.  

2. Create a `scripts` folder for your Python scripts and navigate into the folder.

   ```text
   mkdir scripts
   cd scripts
   ```

3. Create a Python script called `node_hello_ros.py`.

   ```text
   touch node_hello_ros.py
   ```

4. Open the script in any text-editor and start editing.

   ```text
   gedit node_hello_ros.py
   ```

5. First line of all your Python ROS scripts should be the following [shebang](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-linux-shell.html)

   ```text
   #!/usr/bin/env python
   ```

6. Now write a ROS Node to print `Hello World!` on the console.

   ```text
   #!/usr/bin/env python

   import rospy


   def main():    
    
       # 1. Make the script a ROS Node.
       rospy.init_node('node_hello_ros', anonymous=True)

       # 2. Print info on console.
       rospy.loginfo("Hello World!")
    
       # 3. Keep the node alive till it is killed by the user.
       rospy.spin()


   if __name__ == '__main__':
       try:
           main()
       except rospy.ROSInterruptException:
           pass
   ```

7. Now you have to make this script an executable.

   ```text
   sudo chmod +x node_hello_ros.py
   ```

8. Now in order to run your ROS Node,
   1. Open up a terminal and run ROS Master.

      ```text
      roscore
      ```

   2. Once the roscore is up running, open a new termminal and run the ROS Node.

      ```text
      rosrun pkg_ros_basics node_hello_ros.py
      ```

      **NOTE:** This command will work only if you have sourced `setup.bash` of your catkin workspace either manually or using `.bashrc`.
9. You should get some output like this,

   ```text
   [INFO] [1601277063.968749]: Hello World!
   ```

