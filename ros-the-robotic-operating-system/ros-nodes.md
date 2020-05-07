# ROS Nodes

## ROS Publishers <a id="ros-publishers"></a>

Publishers allow a node to send messages to a topic, so that data from the node can be used in other parts of ROS. In C++, ROS publishers typically have the following definition format, although other parameters and arguments are possible:

```text
ros::Publisher pub1 = n.advertise<message_type>("/topic_name", queue_size);
```

The `pub1` object is a publisher object instantiated from the ros::Publisher class. This object allows you to publish messages by calling the `publish()` function.

To communicate with ROS master in C++, you need a **NodeHandle**. The node handle `n` will fully initialize the node.

The `advertise()` function is used to communicate with ROS and inform that you want to publish a message on a given topic name. The `"/topic_name"` indicates which topic the publisher will be publishing to.

The message\_type is the type of message being published on "/topic\_name". For example, the string message data type in ROS is `std_msgs::String`.

The `queue_size` indicates the number of messages that can be stored in a queue. A publisher can store messages in a queue until the messages can be sent. If the number of messages stored exceeds the size of the queue, the oldest messages are dropped.

Once the publisher object `pub1` has been created, as above, a `message` with the specified data type can be published as follows:

```text
pub1.publish(msg);
```

ref: [http://docs.ros.org/jade/api/roscpp/html/classros\_1\_1Publisher.html](http://docs.ros.org/jade/api/roscpp/html/classros_1_1Publisher.html)  


## ROS SERVICES

### Defining services <a id="defining-services"></a>

A ROS service allows request/response communication to exist between nodes. Within the node providing the service, request messages are handled by functions or methods. Once the requests have been handled successfully, the node providing the service sends a message back to the requester node. In C++, a ROS service server can be created using the following definition format:

```text
ros::ServiceServer service = n.advertiseService(`service_name`, handler);
```

In ROS, the service class name `ServiceServer` comes from the file name where the service definition exists. Each service provides a definition in a `.srv` file; this is a text file that provides the proper message type for both requests and responses.

The `advertiseService()` allows you to communicate with ROS through the node handle `n` and inform ROS that you want to create a service.

The `service_name` is the name given to the service. Other nodes will use this name to specify the service to which they are sending requests.

The `handler` is the name of the function or method that handles the incoming service message. This function is called each time the service is called, and the message from the service call is passed to the `handler` function as an argument. The `handler` should return an appropriate service response message.

### Using Services <a id="using-services"></a>

#### Command Line <a id="command-line"></a>

Services can be called directly from the command line, with:

```text
$ rosservice call service_name “request”
```

After calling the service, you will wait for an answer.

#### ROS Service Client <a id="ros-service-client"></a>

Another approach is to use a ROS service programmatically, from within a node. You will define a `ROS client`, which provides the interface for sending messages to the service:

```text
ros::ServiceClient client = n.serviceClient<package_name::service_file_name>("service_name");
```

One way the `ROS Client` can then be used is to send requests is as follows:

```text
client.call(srv);    // request a service 
```

For now, we’ll focus on how to create the ROS **service server**. Later, in the `look_away` node, you will practice calling the service from a **service client** node.

![](../.gitbook/assets/screen-shot-2018-10-30-at-11.33.36-am.png)

REF: [http://wiki.ros.org/roscpp/Overview/Services](http://wiki.ros.org/roscpp/Overview/Services)

