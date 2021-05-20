---
description: Run these commands immediately after new installation of ubuntu.
---

# After Ubuntu Installation

#### Updating & Upgrading Ubuntu

```text
sudo apt-get update && sudo apt-get upgrade
```

#### Solving Time Issue After Dual Boot

```text
timedatectl set-local-rtc 1 --adjust-system-clock
```

#### Install Terminator

```text
sudo add-apt-repository ppa:gnome-terminator
```

```text
sudo apt-get install terminator
```

#### Install Sublime Text

```text
wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
```

```text
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
```

```text
sudo apt-get update
```

```text
sudo apt-get install sublime-text
```

```text
subl
```

#### Important Linux Packages

```text
sudo apt-get install libavcodec-dev libsdl1.2-dev xsltproc libbullet-dev libsdl1.2-dev libgoogle-glog-dev protobuf-compiler python-wstool
```

#### Install Gazebo

If you are using Ubuntu 16.04, download Gazebo 7

```text
sudo apt-get install gazebo7 libgazebo7-*
```

Or else if you are using Ubuntu 18.04, download Gazebo 9

```text
sudo apt-get install gazebo9 libgazebo9-*
```

#### Install Arduino IDE

Open up a terminal in arduino folder and then type this command

```text
sudo ./install.sh
```

#### Install GIT

```text
sudo apt-get install git
```

