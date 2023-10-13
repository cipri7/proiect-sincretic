# Metode Avansate de Programare
## *Proiect Sincretic*

***Tower of Hanoi Application with Dockerization***

1. **Wrote a C Program:**
- Developed a C program to solve the Tower of Hanoi problem.
- Included the Tower of Hanoi algorithm and user input prompts.

2. **Created a Dockerfile:**
- Created a Dockerfile to define the environment and build process.
- Set up a base image (Alpine Linux), copied the C program into the container, installed dependencies, and compiled the program.

3. **Built a Docker Image:**
- Used the docker build command to create a Docker image based on the Dockerfile. ```docker build -t hanoi-towers .```
- The image contained the C program and its environment.

4. **Ran the Docker Container:**
- Launched a Docker container from the image using the docker run command. ```docker run -it hanoi-towers```
- Enabled interaction with the terminal by using the ```it``` flags.

5.**Resolved Input Synchronization:**
- Encountered an issue with user input and printed messages within the program when running inside the Docker container.
- Solved the issue by adding ```fflush(stdout)``` to the main code to flush the output buffer, ensuring the prompt order was correct.

6. **Rebuilt the Docker Image:**
- Made changes to the C program by modifying the source code.
- Rebuilt the Docker image with the updated program using docker build. ```docker build -t hanoi-towers .```
- Ran a new container from the updated image to see the changes. ```docker run -it hanoi-towers```

7. **Pushed to Docker Hub:**
- Tagged the Docker image with my Docker Hub username and repository name. ```docker tag hanoi-towers:latest vciprian/hanoi-towers:latest```
- Pushed the Docker image to Docker Hub repository using the docker push command. ```docker push vciprian/hanoi-towers:latest```

8. **How to run the Docker image**
- Docker pull command ```docker pull vciprian/hanoi-towers:latest```
- Enjoy!


*Documentation and inspiration*
- [Git Basics](https://www.theodinproject.com/lessons/foundations-git-basics)
- [Docker Video Tutorial](https://www.youtube.com/watch?v=pTFZFxd4hOI&ab_channel=ProgrammingwithMosh)
- [Docker Documentation](https://docs.docker.com/engine/reference/builder/)
- [Hanoi Towers Explanation](https://www.youtube.com/watch?v=PGuRmqpr6Oo&ab_channel=Numberphile)