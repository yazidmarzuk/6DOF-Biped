# Catkin Workspaces

### Catkin packages <a id="catkin-packages"></a>

ROS software is organized and distributed into packages, which are directories that might contain source code for ROS nodes, libraries, datasets, and more. Each package also contains a file with build instructions - the CMakeLists.txt file - and a package.xml file with information about the package. Packages enable ROS users to organize useful functionality in a convenient and reusable format.



### Catkin workspaces <a id="catkin-workspaces"></a>

A catkin workspace is a top-level directory where you build, install, and modify catkin packages. The workspace contains all of the packages for your project, along with several other directories for the catkin system to use when building executables and other targets from your source code.

### Step 1: Create a catkin workspace and a sub directory <a id="step-1-create-a-catkin-workspace-and-a-sub-directory"></a>

```text
$ mkdir -p /home/workspace/catkin_ws/src
```

### Step 2: Navigate to the source directory <a id="step-2-navigate-to-the-source-directory"></a>

```
$ cd /home/workspace/catkin_ws/src
```

### Step 3: Initialize the catkin workspace <a id="step-3-initialize-the-catkin-workspace"></a>

```
$ catkin_init_workspace
```

### Step 4: Return to top level directory 

```text
$ cd /home/workspace/catkin_ws
```

### Step 5: Build the Workspace <a id="step-5-build-the-workspace"></a>

```text
$ catkin_make
```

ref: [https://www.ros.org/reps/rep-0128.html](https://www.ros.org/reps/rep-0128.html)



## Adding a package

Start by navigating to the `src` directory and cloning any existing package

```text
$ cd /home/workspace/catkin_ws/src/
$ git clone -b first_interaction https://github.com/udacity/RoboND-simple_arm/ simple_arm
```

### Building the package <a id="building-the-simple_arm-package"></a>

After the repo has finished cloning, you can change directory to the top-level of the ROS workspace and build the new package.

```text
$ cd /home/workspace/catkin_ws/
$ catkin_make
```

[  
](https://classroom.udacity.com/nanodegrees/nd209/parts/1f349ee0-9c40-4964-a6a8-4e0818a15fde/modules/d0fbb2f2-55d1-4217-8116-a52ac989c07f/lessons/eba928a4-27ba-4e6a-a5f9-6a409da46b25/concepts/a5368ea8-3c59-49d4-b1ba-cd0ce6d2ee17#)tip: Sometimes you might get a missing package error while building the catkin workspace. For example: "Could not find a package configuration file provided by controller\_manager". In this instance use:

```text
$ sudo apt-get install ros-kinetic-controller-manager
```

## Roslauch

`roslaunch` allows you to do the following

* Launch the ROS Master and multiple nodes with one simple command
* Set default parameters on the parameter server
* Automatically re-spawn processes that have died

To use `roslaunch`, you must first make sure that your workspace has been built and sourced:

```text
$ cd /home/workspace/catkin_ws/
$ catkin_make
```

To use `roslaunch`, you must first make sure that your workspace has been built and sourced:

```text
$ cd /home/workspace/catkin_ws/
$ catkin_make
```

Once the workspace has been built, you can source it’s setup script:

```text
$ source devel/setup.bash
```

With your workspace sourced you can now launch `<your package>`:

```text
$ roslaunch simple_arm robot_spawn.launch
```

## Rosdep <a id="rosdep"></a>

### ROS Package Dependencies <a id="ros-package-dependencies"></a>

ROS packages have two types of dependencies: build dependencies and run dependencies.

The `rosdep` tool will check for a package's missing dependencies, download them, and install them.

To check for missing dependencies in a ROS package:

```text
$ rosdep check <package name>
```

**Note**: In order for the command to work, the workspace must be first sourced with `source devel/setup.bash`.

This gives you a list of the system dependencies that are missing, and tells you where to get them.

To have `rosdep` install packages, invoke the following command from the root of the catkin workspace

```text
$ rosdep install -i <package name>
```

## Creating a Catkin package

The syntax for creating a catkin package is:

```text
$ catkin_create_pkg <your_package_name> [dependency1 dependency2 …]
```

The name of your package is arbitrary but you will run into trouble if you have multiple packages with the same name in your catkin workspace.

### Catkin package structure

* scripts \(python executables\)
* src \(C++ source files\)
* msg \(for custom message definitions\)
* srv \(for service message definitions\)
* include -&gt; headers/libraries that are needed as dependencies
* config -&gt; configuration files
* launch -&gt; provide a more automated way of starting nodes

Other folders may include

* urdf \(Universal Robot Description Files\)
* meshes \(CAD files in .dae \(Collada\) or .stl \(STereoLithography\) format\)
* worlds \(XML like files that are used for Gazebo simulation environments\)

![](https://video.udacity-data.com/topher/2018/November/5bdb8061_ros-package-format/ros-package-format.png)

There are many packages that you can install.





