---
description: Commands regularly used for docker containers. Docker CheatBook
---

# Docker

## Pull the Docker Container with:  

```text
sudo docker pull <NameOfTheContainer>
```

* A great place to checkout containers are at **hub.docker.com**

## Run the docker container with 

```text
sudo docker run -d -t --name <DockerAlias> <NameOfTheContainer>
```

## List all the available Docker Container

```text
sudo docker ps
```

## Execute the Container with: 

```text
sudo docker exec -it <DockerName> bash
```

## Stop the Container with: 

```text
 docker stop CONTAINER <ContainerID>
```

## Remove the Container:

```text
docker rm CONTAINER <ContainerID>
```

## Creating a Docker Image

```text
$ docker ps -a
2CONTAINER ID     IMAGE      COMMAND    CREATED               STATUS              NAMES
3c3df2dd33276  example-image "date"  5 seconds ago   Exited (0) 4 seconds ago  example_app
4
5$ docker commit example_app example_image2:latest
6sha256:7b48e8355aa7a7ea32d554f26d0bd21f4d069d8526c68f1d098acac9111a9adf
```

## Push Image to DockerHub

1. Log into the Docker public registry from your local machine terminal using Docker CLI:

   ```text
   1$ docker login
   ```

2. Tag the image

   * This is a crucial step that is required before we can upload our image to the repository. As we discussed earlier, Docker follows the naming convention to identify unofficial images. What we are creating is an unofficial image. Hence, it should follow that syntax. According to that naming convention, the unofficial image name should be named as follows: `<username>/<image_name>:<tag_name>`. In my case, I need to rename it as `marzukkp/example_image:latest`

   ```text
   1$ docker tag example_image:latest marzukkp/example_image:latest
   ```

3. Publish the image

   ```text
   1$ docker push marzukkp/example_image:latest
   ```



   Upload your tagged image to the repository using the `docker push` command. Once complete, you can see the image there on Docker Hub. That's it; you have successfully published your Docker image. If you want to test out your image, use the below command and launch a container from it:

   ```text
   1$ docker pull marzukkp/example_image:latest
   2$ docker run -it marzukkp/example_image:latest
   ```

### 

### 

### 

