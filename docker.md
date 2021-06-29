---
description: Commands regularly used for docker containers. Docker CheatBook
---

# Docker

Pull the Docker Container with:  

```text
sudo docker pull <NameOfTheContainer>
```

* A great place to checkout containers are at **hub.docker.com**

Run the docker container with 

```text
sudo docker run -d -t --name <DockerAlias> <NameOfTheContainer>
```

List all the available Docker Container

```text
sudo docker ps
```

Execute the Container with: 

```text
sudo docker exec -it <DockerName> bash
```

Stop the Container with: 

```text
 docker stop CONTAINER <ContainerID>
```

Remove the Container:

```text
docker rm CONTAINER <ContainerID>
```

Creating a Docker Image

```text
$ docker ps -a
2CONTAINER ID     IMAGE      COMMAND    CREATED               STATUS              NAMES
3c3df2dd33276  example-image "date"  5 seconds ago   Exited (0) 4 seconds ago  example_app
4
5$ docker commit example_app example_image2:latest
6sha256:7b48e8355aa7a7ea32d554f26d0bd21f4d069d8526c68f1d098acac9111a9adf
```

shell  


