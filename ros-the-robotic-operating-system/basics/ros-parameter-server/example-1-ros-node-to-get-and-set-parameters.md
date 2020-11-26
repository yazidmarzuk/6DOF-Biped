# Example \#1: ROS Node to Get and Set Parameters



### [Aim](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-eg1.html#aim)

To write a ROS Node to read `config_my.yaml` file loaded in ROS Parameter Server \([done here](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-yaml.html)\), print it on the console and modify the phone number.

### [Code](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-eg1.html#code)

`node_param_get_set.py`

```text
#!/usr/bin/env python

import rospy


def main():    
    
    # 1. Make the script a ROS Node.
    rospy.init_node('node_param_get_set', anonymous=True)

    # 2. Read from Parameter Server
    rospy.loginfo("Reading from Parameter Server.")

    
    param_config_my = rospy.get_param('details')    # Get all the parameters inside 'details'

    # Store the parameters in variables
    first_name = param_config_my['name']['first']
    last_name = param_config_my['name']['last']
    address = param_config_my['contact']['address']
    phone = param_config_my['contact']['phone']

    # Print the parameters
    rospy.loginfo(">> First Name: {}".format(first_name))
    rospy.loginfo(">> Last Name: {}".format(last_name))
    rospy.loginfo(">> Address: {}".format(address))
    rospy.loginfo(">> Phone: {}".format(phone))

    # 3. Modify the Phone Number 

    rospy.set_param('/details/contact/phone', 55555)        # Modify only Phone Number in Parameter Server
    new_phone = rospy.get_param('/details/contact/phone')   # Get only Phone Number from Parameter Server
    rospy.loginfo(">> New Phone: {}".format(new_phone))     # Print the new Phone Number
    
    


if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
```

#### [Output](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-parameter-eg1.html#output)

```text
[INFO] [1601389248.001963]: Reading from Parameter Server.
[INFO] [1601389248.007928]: >> First Name: Hisenberg
[INFO] [1601389248.010338]: >> Last Name: White
[INFO] [1601389248.012679]: >> Address: XYZ Street, XYZ
[INFO] [1601389248.014838]: >> Phone: 77777
[INFO] [1601389248.020719]: >> New Phone: 55555

```

* The code is self-explanatory.
* If you are not able to understand the code feel free to seek help from us.

