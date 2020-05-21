# MonteCarlo Localization

**Monte Carlo localization** \(MCL\), also known as particle filter **localization**, is an algorithm for robots to **localize** using a particle filter. Given a map of the environment, the algorithm estimates the position and orientation of a robot as it moves and senses the environment.

### Bayes Filtering

The powerful Monte Carlo localization algorithm estimates the posterior distribution of a robot’s position and orientation based on sensory information. This process is known as a recursive `Bayes filter`.

 The goal of Bayes filtering is to estimate a probability density over the state space conditioned on the measurements. The probability density, or also known as **posterior** is called the **belief** and is denoted as:  




