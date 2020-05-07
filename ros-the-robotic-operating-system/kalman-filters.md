# Kalman filters

**Kalman filtering**, also known as **linear quadratic estimation** \(**LQE**\), is an algorithm that uses a series of measurements observed over time, containing statistical noise and other inaccuracies, and produces estimates of unknown variables that tend to be more accurate than those based on a single measurement alone, by estimating a joint probability distribution over the variables for each time frame.

This is the role of a Kalman Filter - after a movement or a measurement update, it outputs a unimodal Gaussian distribution. This is its best guess at the true value of a parameter. 

![Kalman filter comparison with other filters](../.gitbook/assets/kalman-filter.png)

### There are exists three types of Kalman filters :

* KF :
  *  The first type is the Kalman Filter \(KF\) that was designed for linear systems. Therefore, for slip control, the KF needs linearization in operating point. 
* EKF: 
  * The second type is an Extended Kalman Filter \(EKF\) that was designed for nonlinear system estimation and filtration. The EKF requires the nonlinearity description. 
* UKF:
  *  The last type of the Kalman filter is an Unscented Kalman Filter \(UKF\). The UKF was designed for nonlinear function estimation and filtration. 
  * ref: [https://en.wikipedia.org/wiki/Kalman\_filter\#Unscented\_Kalman\_filter](https://en.wikipedia.org/wiki/Kalman_filter#Unscented_Kalman_filter)



A Gaussian distribution is a probability distribution, which is a continuous function. The probability that a random variable, x, will take a value between $$x_1$$ ​ and $$x_2$$ ​ is given by the integral of the function from $$x_1$$ ​ to ​ $$x_2$$ .

$$
p(x_1 < x < x_2) = \int_{x_1}^{x_2}f_x(x)dx
$$

### Mean and Variance <a id="mean-and-variance"></a>

A Gaussian is characterized by two parameters - its mean \(μ\) and its variance \(σ²\). The mean is the most probable occurrence and lies at the center of the function, and the variance relates to the width of the curve. The term uni-modal implies a single peak present in the distribution.

Gaussian distributions are frequently abbreviated as N\(x: μ, σ²\), and will be referred to in this way throughout the coming lessons.

**Variable Naming Conventions**

 $$\large x_t$$ : state

$$\large z_t$$: measurement

$$u_t$$ : control action 









