# Installations

## [ROS Installation](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#ros-installation)

### [Installation Instruction](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#installation-instruction)

* This Document assumes that the reader has installed [_Ubuntu 18.04_](https://releases.ubuntu.com/18.04.5/). However, if you haven't installed _Ubuntu 18.04_ yet make sure to install it before proceeding. There are tons of resources available on the Internet to get this done.
* You can download Ubuntu 18.04 ISO file from [here](https://releases.ubuntu.com/18.04.5/).

> **Please practice and execute all the content related to this eYRC theme in** _**Ubuntu 18.04**_ **only. Developer of this theme have tested all the provided material/**[**packages**](http://wiki.ros.org/Packages) **only on the mentioned Operating system.**
>
> **e-Yantra won't be able to help solve queries related to any other Operating System.**

### [ROS Melodic Installation](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#ros-melodic-installation)

_ROS \(Robot Operating System\) provides libraries and tools to help software developers create robot applications. It provides hardware abstraction, device drivers, libraries, visualizers, message-passing, package management, and more. ROS is licensed under an open source, BSD license._

Here the [distribution](http://wiki.ros.org/Distributions) compatible with _Ubuntu 18.04_ is the [_ROS Melodic Morenia_](http://wiki.ros.org/melodic). Follow the steps below to install _ROS Melodic_

#### [Installation Steps](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#installation-steps)

1. Setup your computer to accept software from packages.ros.org.

```text
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```

1. Set up your keys.

```text
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
```

1. Make sure your Debian package index is up-to-date.

```text
sudo apt update
```

1. Installing the ROS recommended configuration.

```text
sudo apt install ros-melodic-desktop-full
```

#### [Configuration Steps](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#configuration-steps)

1. Adding environment variables: To Automatically add ROS environment variables to your bash session every time a new shell \([terminal](https://www.gnu.org/software/bash/manual/html_node/What-is-Bash_003f.html)\) is launched, enter the following commands \(this step is similar as adding environmental variable in windows\):

```text
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

1. Initialize rosdep: Before you can use many ROS tools, you will need to initialize rosdep. rosdep enables you to easily install system dependencies for source you want to compile and is required to run some core components in ROS.

```text
sudo apt install python-rosdep
sudo rosdep init
rosdep update
```

#### [More packages to install](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-installation.html#more-packages-to-install)

* Catkin Tools

  ```text
  sudo apt-get install ros-melodic-catkin python-catkin-tools
  ```

* std\_msg package

  ```text
  sudo apt install ros-melodic-std-msgs
  ```

* turtlesim

  ```text
  sudo apt-get install ros-melodic-ros-tutorials
  ```

**References**

* [Official ROS Documentation](http://wiki.ros.org/)
* [ROS Melodic Installation Instruction](http://wiki.ros.org/melodic/Installation)

