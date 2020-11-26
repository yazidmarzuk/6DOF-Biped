# ROS Services



* The publish/subscribe model is a very flexible communication paradigm, but its many-to-many one-way transport is not appropriate for request/reply interactions, which are often required in a distributed system.
* Request/reply is done via a Service, which is defined by a pair of messages: one for the request and one for the reply.
* A providing ROS node offers a service under a string name, and a client calls the service by sending the request message and awaiting the reply.
* Client libraries usually present this interaction to the programmer as if it were a remote procedure call.
* Services are defined using `srv` files, which are compiled into source code by a ROS client library.
* Like topics, services have an associated service type that is the package resource name of the `.srv` file.

### [Reading Assignment](https://portal.e-yantra.org/storage/FjbIfxILQH_vd/res/learn/ros-basics/learn-ros-comm-services.html#reading-assignment)

1. [ROS Wiki - Services](http://wiki.ros.org/Services)
2. [AGITR - Services](https://www.cse.sc.edu/~jokane/agitr/agitr-letter-service.pdf)

