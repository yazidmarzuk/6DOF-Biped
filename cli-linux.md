---
description: All the basic commands for LINUX Command line I came across
---

# CLI - LINUX

### Update the System:

```text
sudo apt update
```

```text
sudo apt upgrade
```

* **Enable Gnome Extensions**

```text
sudo apt install gnome-tweaks
```

## **Install Useful Apps**

```text
sudo apt install vlc
```

* **Install Typora**

```text
wget -qO - https://typora.io/linux/public-key.asc | sudo apt-key add -
```

```text
sudo add-apt-repository 'deb https://typora.io/linux ./'
```

```text
sudo apt-get update
```

```text
sudo apt-get install typora
```



* **Cleanup**

```text
sudo apt-get autoclean
```

```text
sudo apt-get clean
```

```text
sudo apt-get autoremove
```

To get free space info in human readable form run:

```text
free -h
```

To get your IP

```text
$ ip addr
```

### Activate minimize to Dock

```text
gsettings set org.gnome.shell.extensions.dash-to-dock click-action 'minimize'
```

###  <a id="8-enable-drive-cache"></a>

