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
sudo docker exec -it <DockerName>
```

Stop the Container with: 

```text
 docker stop CONTAINER <ContainerID>
```

Remove the Container:

```text
docker rm CONTAINER <ContainerID>
```

