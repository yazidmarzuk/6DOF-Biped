# Command: rosrun

`rosrun` allows you to run an executable in an arbitrary package from anywhere without having to give its full path or cd/roscd there first.

Usage:

```text
rosrun <package> <executable>
```

`<package>` is nothing but the package name which you have created using `catkin_create_pkg` command or used any other package.

`<executable>` is the python or cpp file.

### [To create an executable python file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosrun.html#to-create-an-executable-python-file)

After creating a package, create a folder in the package names as `scripts` folder to store all the python files in that folder.

```text
cd ~/catkin_ws/src/<package>
mkdir scripts
```

Here we can create python scripts by running this command by going into the `scripts` directory,

```text
cd scripts
touch filename.py
```

Now you can edit your python file and before running you have to make it executable by running this command once,

```text
cd ~/catkin_ws/src/<package>/scripts
chmod +x filename.py
```

### [To create an executable cpp file](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-nodes-cmd-rosrun.html#to-create-an-executable-cpp-file)

After creating a package, create a folder in the package names as `src` folder to store all the cpp files in that folder.

```text
cd ~/catkin_ws/src/<package>
mkdir src
```

Here we can create cpp files by running this command by going into the `src` directory,

```text
cd src
touch filename.cpp
```

Now you can edit your cpp file , but for making it executable we have to edit the `CMakeLists.txt` file which is present in the package.

Add these few lines at the bottom of `CMakeLists.txt` file,

```text
add_executable(filename src/filename.cpp)
target_link_libraries(filename ${catkin_LIBRARIES})
```

Then run this command,

```text
cd ~/catkin_ws
catkin build
```

