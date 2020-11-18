# The Project

**SCIENCE AND ENGINEERING RESEARCH BOARD**

**TEACHERS ASSOCIATESHIP FOR RESEARCH EXCELLENCE**

**Other Technical Details**

## **1. Summary of the project: \(Maximum 1/2 page\)   \(Scientific rationale for doing this work should be elaborated\)**  

  
          **The Electric Vehicle \(EV\) is emerging as state-of-the-art technology and is the future of automotive transportation addressing the continuous demand for energy and environment concerns. Battery technology is the bottleneck of the EV. Therefore it is important to do research on the modelling and estimating the battery parameters that are essential for optimizing energy management, extending the battery life, reducing the maintenance cost, and safeguarding the safe application of batteries in EVs. A Battery Management System consists of sensors, actuators, controllers and signal line. The main function of a BMS is to ensure safe and optimal use of the energy inside the battery and to provide accurate estimation of battery state information for the Vehicular Energy Management System.**   


**Understanding the degrading mechanism of the Batteries due to sudden acceleration and deceleration in on-road condition for real-time, accurate estimation of   State of Charge \(SOC\), State of Health \(SOH\), available power and Remaining Useful Life \(RUL\) of batteries is challenging. Hence, we need a Machine Learning \(ML\) algorithms to accurately predict the SOC, SOH of the battery pack, which will help in giving tailored charging profile for smooth charging and discharging of current in EVs.**  


**In this project, an Internet of Things \(IoT\) based Battery Management System is proposed, which consists of two parts: the hardware and software part. The Hardware part consists of current sensors, volt meter and temperature sensors to monitor the real time current, voltage and temperature of the battery according to the gating signal obtained from the control circuit. The software part consists of algorithms to estimate the SO\), SOH, available power and Remaining Useful Life \(RUL\) of batteries. Adding a predictive component to the BMS make the design more energy and emission efficient, leading to the new Predictive Battery Management System \(PBMS\).** 

##  **2. Objectives**  

* **To design and develop an IOT Enabled monitoring of current, voltage and temperature and to estimate the  SOC, SOH, RUL of the Battery pack during the driving cycle, log events, generate warnings, record usage profile and represent this information locally and remotely to the user.**
* **To develop a Predictive Battery Management System \(PBMS\) using Machine Learning \(ML\) Algorithms for improving the overall battery efficiency and the life of the battery.**
* **To develop control strategies for the proposed PBMS and Testing and Validation.**
* **To integrate GPS and Smart Phones so as to assist the EV drivers about the battery condition and the nearby Charging points.**

## **3. Importance of the proposed project in the present context of research in the proposed area of the project \(Maximum 1 page\)**   

### **Scope for Electrical Vehicles \(EVs\)**

**Indian government has set ambitious targets to accelerate the adoption of electric vehicles \(EVs\). By 2023, it wants all three-wheelers to run on batteries. By 2025, the rule will be applicable to most two-wheelers \[1\]. The International Renewable Energy Agency \(IRENA\) Innovation Outlook of 2019 indicates that, by 2050, around 14 TWh of EV batteries would be available to provide grid services, compared to 9 TWh of stationary batteries. China and the United States were the largest markets, with 2.6 million and 1.1 million EVs, respectively. It is also estimated that, if most of the passenger vehicles were electric from 2040 onwards, more than 1 billion EVs could be on the road by 2050 \[2\].**

### **Current Start of Art on type of Batteries for EV**

**Lithium Ion Batteries are the heart of EV which acts as energy storage systems. The electrical and thermal characteristics of batteries and effect of operating temperature on battery performance, and optimization methods were presented in \[3\]. The key components of Lithium Ion Batteries, approaches to improve it overall efficiency, were presented in \[4\]. In \[5\], the structure of the EV battery supply chain, current limitations in trade  
data for EV batteries were described.** 

### **Current Start of Art on SOC, SOH and RUL Estimation Methods**

**Comprehensive reviews on the Lithium-ion battery SOC, SOH and RUL estimation methods and its management system towards the sustainable EV guaranteeing a reliable and safe operation were discussed in \[6\]-\[9\]. An online SOH estimation method based on the analysis of load current during CV charging period and instantaneous discharging voltage and its unit time voltage drop, were proposed in \[10\] and \[11\] respectively. A co-estimation approach for SOC, SOH and SOF,  
estimation was proposed in \[12\], and validated by MATLAB simulation and demonstration in a real BMS.In \[13\] an advanced capacity fade model, coupled with chemical and mechanical degradation mechanisms, was developed based on a Single Particle \(SP\) model.  
Model-Based State-of-Charge Estimation Approach , Long Short-Term Memory \(LSTM\) - Recurrent Neural Network \(RNN\) and   an improved Nonlinear Autoregressive with Exogenous input \(NARX\)-based neural network \(NARXNN\) algorithm for an accurate and robust SOC estimation of lithium-ion battery were proposed in proposed in \[14\]-\[16\]. Though SOC, SOH estimations methods exists for both Lead Acid batteries and Lithium Ion batteries, real time validation of these SOC, SOH estimation methods for Indian Road Conditions is not there.** 

### **Current Start of Art on IOT based Battery Management System**

**In \[17\], the authors proposed an Internet of things \(IOT\) based optimization model enabling the smart charging for EVs. Similar IOT based Battery monitoring system had been developed in \[18\] to monitor the performance of batteries in a smart microgrid system. A novel State of Health \(SOH\) monitoring method was developed in \[19\] to provide a definite and quantitative correlation between resistance value and the remaining capacity of the lithium-ion battery.**

## **4. Work Plan:** 

### **4.1 Methodology: \(Maximum of 1-3 pages\)   \(It should contain all the details of how each of the objectives will be addressed. Must address detailed methodology, experimental setup, plans.  It should not be vague and generalized statements\).**

**Objective: 1**

**To design and develop an IOT Enabled monitoring of  current, voltage and temperature and to estimate the  SOC, SOH, RUL of the Battery pack during the driving cycle , log events, generate warnings, record usage profile and represent this information locally and remotely to the user**

**The block diagram of the existing Battery Management System \(BMS\) from the literature is shown below \[20\]:**![](https://lh5.googleusercontent.com/fBeSeBZ4L5SkB1ipSGC-YLXPRW98XbUUkHH4xbm70AU8q9-G82rxV4RMkc4cnnaSjQJaXRik_CKbBPRd_CnOLaJw_PYX0o_psx6zFZ3OnfuWhexezgKWpR1ooV2z1cZ9cVZDFRbWzxg0p6FJ9g)  
  
  
  
  
  
  
  
  
  
  
  
  
****

**Fig. 1 Existing Battery Management System**  
![](https://lh3.googleusercontent.com/cMWZEt60kIKbSZT6oGTHkE4HUvxi6azVK2E2MJRN0o9-h4i_xsSX2UdbdGQ-jkQPHhJ-_tQXNfge4XjW3_nkB3eNWxHzQMzMPwbDcY4MzIeqYbgn6bTKlYa-HG4age45HIBd_rVDCLfQlk36Lg)  
****

**Fig. 2 Proposed IOT based Predictive Battery Management System \(PBMS\)**  


**Methodology:**  


* **System consists of Battery Pack, BMS, and Embedded System as an IOT element, Cloud System and a User Interface**
* **The BMS consist of current, voltage and temperature sensors, which senses the real time current, voltage, temperature and estimates the SOC.** 
* **Using a Serial Bus Controller, BMS transfers the data to the Embedded System**
* **The embedded system is an IOT element which is Raspberry Pi Model 4 in the proposed work, whose function is to execute data acquisition algorithm, ML algorithms for predictive maintenance and act as an internet gateway to the cloud server.**
* **Cloud Server for remote access and accessed via the internet communication.**
* **User Interface \(UI\) to display the battery parameters from the cloud server.**

**Objective 2**

**To develop a Predictive Battery Management System \(PBMS\) using Machine Learning Algorithms for improving the overall battery efficiency and the life span.**

**The key for improving battery life lies in the data.  Machine Learning Algorithm to be developed which uses the power of predictive intelligence to predict battery life, identify potential breakdown and their causes and fix errors even before they arise.** 

**Methodology:**

**Step 1: Creation of Data Sets containing Normalized Battery Pack Voltage, Normalized Battery pack Temperature**

           **To create data sets, an experimental set up has been planned and the block diagram of the same is shown in Fig. 3. The setup consists of a Lithium Ion battery who’s charging and discharging characteristics to be analysed for various temperatures \(10 ºC – 50 ºC\), Battery sensing and testing equipment to charge and discharge the battery and collect test data, thermal chambers to control the temperature of the environment and a workstation to store the test data and also to provide Human-Machine interface. The data, which are generated based on the sampling frequency, measure battery functions such as volatility in the currents, voltage and temperature, resulting in a huge data points.**   
![](https://lh5.googleusercontent.com/hF3l0dDqBhWROUsoWDLtIJDMmRaZOD0uydFLH1b6Z3w6zj-i_ELJKPTOb45bukz0KQKWBQ7ZCwnX9G3BVz8kgBkbTAWFYM8JsuqFxkrMOiYF0Fx3RFGxIWi2fkLPGh0MWei2YoTWPRYgaM5FTA)  
  
  
  
  
****

**Fig 3: Experimental Setup for Data Creation**

**Step 2: An algorithm is to be designed to assess the data and to design an optimization model.** 

**The algorithm brings a layer of intelligence, after gathering and monitoring extensive data on battery life, performance, state of charge, stress from rapid acceleration and deceleration, temperature, number of charge cycles, etc. which are stored on the cloud.**

**Step 3: Requirements of the Algorithm to be developed includes High Precision and Accuracy, Possible Implementation in the BMS and In-Suit Development. In this project, we develop ML algorithms for Two-Wheelers and Four Wheelers.**

**Software Language to be used: Python**

**Objective 3**

**To develop control strategies for PBMS, Testing and Validation**  


* **Optimum operating conditions for the BMS of an EV to be fixed. Whenever the real time battery parameter value goes out of the operating range, subsequent instructions to be given to the EV drivers.** 
* **Testing and Validation of the Algorithm is done at two levels:**

**At Cell Level:** 

**Cells to be tested to be cycled for varying temperature, depth of discharge, Current rates during deceleration and during acceleration also at different temperature and State of Charge \(SOC\).** 

**At Battery pack/System Level:**

**EV’s have Battery pack which consists of several cells connected in series or parallel. All the cells in a battery pack will not have the same characteristics like temperature, voltage variations etc.** 

**So a precise methodology have to be followed while developing the algorithm for   estimation the SOC.** 

* **System Evaluation Criteria:**
* **Maximum temperature and Maximum temperature difference of batteries**
* **Energy consumption**
* **Prediction accuracy on SOC, SOH and RUL**

**Objective 4**

**To integrate GPS and Smart Phones so as to assist the EV drivers about the battery condition and the nearby Charging points**

**An Android App to be developed to display the battery conditions and the nearby Charging points to the EV drivers. The data in the cloud will also be a real time database for further development of the algorithm in terms of precision and accuracy.**

**Methodology:**

* **Select a suitable Application Program Interface \(API\) to communication with Database**
* **Select the software framework to build the application and connect to database**
* **Query the database and parse the data provided**
* **Populate the graphical elements for the parsed data using Hyper Text Markup Language \(HTML\), Cascading Style Sheets \(CSS\) and JavaScript**
* **We can also add authentication layer to prevent unauthorised access \(optional\)**

###  **4.2 Time Schedule of activities giving milestones through BAR diagram. \(Maximum 1/2 page\)**   

<table>
  <thead>
    <tr>
      <th style="text-align:left">
        <p><b>   Time Line (months)<br /></b>
        </p>
        <p><b>Task Description </b>
        </p>
      </th>
      <th style="text-align:left"><b>0 - 3</b>
      </th>
      <th style="text-align:left"><b>4 - 6</b>
      </th>
      <th style="text-align:left"><b>7 - 9</b>
      </th>
      <th style="text-align:left"><b>10 -12</b>
      </th>
      <th style="text-align:left"><b>13 - 15</b>
      </th>
      <th style="text-align:left"><b>16 - 18</b>
      </th>
      <th style="text-align:left"><b>19 - 21</b>
      </th>
      <th style="text-align:left"><b>22 - 24</b>
      </th>
      <th style="text-align:left"><b>25 - 27</b>
      </th>
      <th style="text-align:left">
        <p><b>28 -</b>
        </p>
        <p><b>30</b>
        </p>
      </th>
      <th style="text-align:left"><b>31-33</b>
      </th>
      <th style="text-align:left"><b>34-36</b>
      </th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left"><b>Literature Study</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Procurement of Equipment&#x2019;s for Battery test bench </b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Establishment of Experimental Battery Test Bench and Data Creation</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Performance analysis of various SOC estimation methods for the experimental data </b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Train the Predictive model using Machine Learning(ML) algorithms</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Test and Validation of the  ML algorithms with real time data from BMS of an EV</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Android Application development and integration</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Test Run  for the Integrated system and demonstration</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Report Preparation, Publication and Patents</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
  </tbody>
</table>

## **5. Justification for proposing the host institute / mentor** 

**CSIR-CEERI has Cyber Physical Systems \(CPS\) as one of the core theme and areas in their R&D. The Thrust areas of Research at CEERI includes Signal Analytics, Renewable Energy with Internet of Things \(IoT\) and Terahertz in Integrated Systems. CEERI have many ongoing works in the area of IOT and Automation & Control such as**

* **IOT ready Solar Tree including Solar EV Charger and Air Quality Monitoring**
* **MEMS Sensors  - Physical, Gas &  Diagnostics - IoT**
* **Smart Power windows for Building Integrated Photovoltaic**
* **5 HP Solar Inverter for deep well pump \(for irrigation purpose\)**
* **Photovoltaic and Thermal Systems \(PVT\)**
* **AI and Machine Learning**

**SRM Institute of Science and Technology and Central Electronic Engineering Research Institute \(CEERI\), Chennai are sharing a strong collaboration, since 2006. The initial years of their association was strengthened through inviting eminent scientists at CEERI for doctoral committee meeting at SRM. Few scientists served as Board of Studies members and also in conduction of academic audits. In the year 2019, a formal MOU was signed to promote cooperation in engineering education and scientific research between SRM and CEERI. The distinct features of the MOU are the Joint research projects in fields of mutual interests and exchange of academic publications and reports.** 

##  **6. Key publications \(SCI indexed journals\) published by the Investigator** 

**SCI indexed Journals:**

1. **Sangeetha, M., Bhaskar, V., Muthamizhchelvan, C. and Murali, K., "BER performance analysis of compound chaotic sequence \(CCS\)-based NR-DCSK system under multipath fading channel," Sādhanā Academic Engineering Press, Vol.43, No.120, pp.1-11, Aug. 2018.  \(SCI Impact Factor: 0.769\)**
2. **Sangeetha, M. Bhaskar, V., "NR-DCSK Based Chaotic Communications in MIMO Multipath Channels," Wireless Personal Communications-An International Journal, pp.1-16, May 2018. \(SCI Impact Factor: 1.2\)**
3. **M. Sangeetha, Vidhyacharan Bhaskar, “PN Codes versus Chaotic Codes: Performance Comparison in a Gaussian Approximated Wideband CDMA System over a Weibull Fading Channel” Journal of the Franklin Institute, vol. 351, no. 6, pp. 3378-3404, June 2014. \(SCI Impact Factor: 3.653\)**
4. **M. Sangeetha, Vidhyacharan Bhaskar, and Annrose Cyriac, “Performance analysis of Downlink W-CDMA systems in Weibull and Lognormal fading channels using chaotic codes,” International Journal on Wireless Personal Communications, vol. 74, no. 2, pp. 259-283, Jan. 2014. \(SCI Impact Factor: 0.979\)**
5. **M. Sangeetha and Vidhyacharan Bhaskar, “Performance Analysis of Subspace based Downlink Channel Estimation for W-CDMA systems using Chaotic Codes,” International Journal on Wireless Personal Communications, vol. 71, no. 1, pp. 1-21, July 2013.\(SCI Impact Factor: 0.979\)**

**Scopus Indexed Journals:**

1. **Vijayakumar Ponnusamy, Abhijit Sridhar, Arun Baalaji, and M. Sangeetha, "A Palm Vein Recognition System based on a Support Vector Machine," IEIE Transactions on Smart Processing and Computing, vol. 8, no. 1, pp. 1-7, Feb. 2019 \(SNIP:0.44\)**
2. **P. Vijaya Kumar, Kshema Maria George, Akhil Krishnan Nair and M. Sangeetha, "Palm Vein Image Classification using Neural Network," International Journal of Recent Technology and Engineering \(IJRTE\), Vol.7, No.4S2, pp. 122-124, Dec. 2018 \(SNIP: 0.44\)**
3. **Abhinav Gandhi and M. Sangeetha, "Development of an Image Processing Algorithm for Smart CNC Machines, "IEIE Transactions on Smart Processing and Computing, vol. 7, no. 3, pp: 232-235, June 2018. \(SNIP: 044\)**
4. **M. Sangeetha, Toshiba Chamoli and P. Vijayakumar, "BER Performance Analysis of Short Reference Differential Chaos Shift Keying Scheme Using Various Maps Over Different Channel Conditions," Wireless Communication Networks and Internet of Things, Part of the  Lecture Notes in Electrical Engineering, Springer Publications, vol.493, pp.197-206,  May.2018 \(SNIP:0.118\)**
5. **Sangeetha Manoharan, Niharika Saraff, Akanksha Kedia  and Kasturi Laxmi Saroja, "NR-DCSK-Based MIMO Chaotic Communication System," Wireless Communication Networks and Internet of Things, Part of the  Lecture Notes in Electrical Engineering, Springer Publications, vol.493, pp. 207-215, May.2018. \(SNIP: 0. 118\)**
6. **Sangeetha Manoharan, “Smart Supply Chain Management using Internet of Things \(IOT\),” International Journal of Systems Control and Communications, vol. 9, no.2, 99. pp. 172-184. Jan 2018. \(SNIP: 0.235\)**
7. **S. Thananjaya Chakravarthy and M. Sangeetha, "Generation of Galileo ‘E1 Signals’ at Ground Station for Acquisition and Tracking," International Journal of Control Theory and Applications, vol.10, no.16, 2017. \(SNIP: 1. 269\)**
8. **M.Sangeetha, P. Vijayakumar, B. Madhukar Krishna and U. Sai Krishna,” Real-Time Ambience Sensing and Image Authentication Using Internet Of Things \(IOT\) In a Fleet Tracking System, Indian Journal of Science and Technology” 9\(33\), pp-1-8, Sep.2016 \(SNIP:1.289\)**
9. **S. Kalaivanan, Sangeetha Manoharan,"Monitoring and Controlling of Smart Homes using IoT and Low Power Wireless Technology," Indian Journal of Science and Technology, vol.9, no. 31, pp.1-9, Aug. 2016. \(SNIP: 1. 289\)**
10. **Manoharan Sangeetha, Goutham Raj Vijayaragavan, R.L.Ragahv, K.P, Phani, "Design and Development of Cost Effective Wearable Glove for Automotive Industry," Advances in Inteliigent Systems and Computing,Springer Publications, vol.435, pp. 123-131, Feb.2016. \(SNIP: 0. 14\)**
11. **Vignesh Ganesan and Sangeetha Manoharan,"Surround Noise Cancellation and Speech Enhancement using Sub Band Filtering and Spectral Subtraction", Indian Journal of Science and Technology, Vol.8, no.33, Dec 2015. \(SNIP: 0. 829\)**
12. **Vignesh Ganesan and Sangeetha M., “Stereo Channel Decorrelation Using a Combined Psychoacoustic Approach,” International Journal of Applied Engineering Research, vol. 10, no. 6, pp. 5011-5014,March 2015. \(SNIP: 0. 166\)**
13. **M. Sangeetha and Vidhyacharan Bhaskar, “Performance Comparison of various Chaotic Maps in CDMA-DCSK Multiuser SISO Systems,” International Review on Computers  and Software \(IRECOS\), vol. 7, no. 7, pp. 3402-3408, Dec. 2012. \(SNIP: 0.722\)**

## **7. Bibliography**   

1. [**https://qz.com/india/1703720/how-to-take-india-towards-an-electric-vehicles-future/**](https://qz.com/india/1703720/how-to-take-india-towards-an-electric-vehicles-future/)**, accessed on Feb 14, 2020.**
2. **The International Renewable Energy Agency \(IRENA\) Innovation Outlook of 2019.**
3. **Yang S., Ling C., Fan Y and et.al, “A Review of Lithium-Ion Battery Thermal Management System Strategies and the Evaluate Criteria,” International Journal of Electrochemical Science,” vol.14, pp. 6077-6107, June 2019.**
4. **Yu Miao, Patrick Hynan, Annette von Jouanne and Alexandre Yokochi, “Current Li-Ion Battery Technologies in Electric Vehicles and Opportunities for Advancements,” Energies, vol.12, no.6, pp. 1-20, March 2019.**
5. **David Coffin and Jeff Horowitz, “The Supply Chain for Electric Vehicle Batteries,” Journal of International Commerce and Economics, pp. 1-20, Dec. 2018**
6. **M.S. Hossain Lipu, M.A. Hannan, Aini Hussain and et.al, “A review of state of health and remaining useful life estimation methods for lithium-ion battery in electric vehicles: Challenges and recommendations,” Journal of Cleaner Production, vol. 205, pp.115-133, Dec. 2018.**
7. **Hannan, Mahammad A. et al. “State-of-the-Art and Energy Management System of Lithium-Ion Batteries in Electric Vehicle Applications: Issues and Recommendations.” IEEE Access, vol. 6, pp.19362-19378, April 2018.**
8. **Xiong, Rui & Cao, Jiayi & Yu and et.al. “Critical Review on the Battery State of Charge Estimation Methods for Electric Vehicles,” IEEE Access, vol. 6, no.1, pp.1832-1843, Feb. 2018.**
9. **M.A. Hannan, M.S.H. Lipu, A. Hussain, A. Mohamed, “A review of lithium-ion battery state of charge estimation and management system in electric vehicle applications: Challenges and recommendations,” Renewable and Sustainable Energy Reviews, vol.78, pp. 834-854, Oct. 2017.**
10. **Jufeng Yang, Bing Xia, Wenxin Huang and et.al, “Online state-of-health estimation for lithium-ion batteries using constant-voltage charging current analysis,” Applied Energy, vol. 212, no. 1, pp. 1589-1600, Feb. 2018.**
11. **Shyh-Chin Huang, Kuo-Hsin Tseng, Jin-Wei Liang and et.al., “An Online SOC and SOH Estimation Model for Lithium-Ion Batteries,” Applied Energy, vol. 10, no.7, pp. 1-18, April 2017.**
12. **P. Shen, M. Ouyang, L. Lu, J. Li and X. Feng, "The Co-estimation of State of Charge, State of Health, and State of Function for Lithium-Ion Batteries in Electric Vehicles," IEEE Transactions on Vehicular Technology, vol. 67, no. 1, pp. 92-103, Jan. 2018.**
13. **J. Li, K. Adewuyi, N. Lotfi, R.G. Landers, J. Park, A single particle model with chemical/mechanical degradation physics for lithium ion battery State of Health \(SOH\) estimation, Applied Energy, vol.212, pp. 1178-1190 Feb. 2018.**
14. **J. Meng, D. Stroe, M. Ricco, G. Luo and R. Teodorescu, "A Simplified Model-Based State-of-Charge Estimation Approach for Lithium-Ion Battery With Dynamic Linear Model," IEEE Transactions on Industrial Electronics, vol. 66, no. 10, pp. 7717-7727, Oct. 2019.**
15. **E. Chemali, P. J. Kollmeyer, M. Preindl, R. Ahmed, and A. Emadi, “Long short-term memory networks for accurate state-of-charge estimation of Li-ion batteries,” IEEE Transaction on Industrial Electronics, vol. 65, no. 8, pp. 6730–6739, Aug. 2018.**
16. **Hossain Lipu, M S & Hannan, M. A. & Hussain and et.al, “State of Charge Estimation for Lithium-ion Battery Using Recurrent NARX Neural Network Model Based Lighting Search Algorithm,” IEEE Access, vol. 6, pp. 28150-28161, May 2018.**
17. **Asaad, M., Ahmad, F., Alam, M.S. et al., “IoT Enabled Monitoring of an Optimized Electric Vehicle’s Battery System,” Mobile Networks and Applications, vol. 23, pp. 994–1005, Aug. 2018.**
18. **Friansa, Koko & Nashirul Haq, Irsyad & Santi and et.al. “Development of Battery Monitoring System in Smart Microgrid Based on Internet of Things \(IoT\),” Proceedia Engineering, vol. 170, pp. 482-487, Dec. 2017.**
19. **Rui Xiong, Jinpeng Tian, Hao Mu, Chun Wang, “ A systematic model-based degradation behavior recognition and health monitoring method for lithium-ion batteries,” Applied Energy, vol. 207, no. 1, pp. 372-383, Dec.2017.**
20. **Buccolini, Luca et al. “Battery Management System \(BMS\) simulation environment for electric vehicles,” Proceedings of 2016 IEEE 16th International Conference on Environment and Electrical Engineering \(EEEIC\), Florence, Italy, pp. 1-6, June 2016.** 

## **8. List of Projects submitted/implemented by the Investigator in last five year, if any  \(List out details of the Projects submitted, implementing and/or completed\)**

| **S. No.** | **Title**  | **Cost in lakhs**  | **Month of submission**  | **Role as PI / Co-PI** | **Agency**  | **Status**  |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **1.** | **Design and Development of Crop Quality Monitoring System Using IoT and Block Chain.** | **0.46** | **Dec 2019** | **PI** | **New GEN IEDC, SRM Innovation and Incubation Centre \(SIIC\), SRM IST.** | **Ongoing, will be completed in April 2020.** |
| **2.** | **Water Quality Measurement and Monitoring System using IIOT** | **0.48** | **Sep 2019** | **PI** | **SRM Internal Funding** | **Completed, March 2020.** |
| **3.** | **Design and Development of Chaos Radio System using SR-DCSK Scheme** | **One User License of AWR Tool Worth of Rs.38 lakhs** | **May 2016** | **PI** | **NI-AWR Sponsored Project** | **Completed, April 2017.** |
| **4.** | **Digital Score Board using RF Transceivers for Basket Ball Match,** | **0.25** | **August 2015** | **PI** | **SRM Internal Funding** | **Completed October 2015.** |

**7. List of facilities being extended by host / parent institution\(s\) for the project implementation.   
7.1 Infrastructural Facilities at host / parent institute** 

<table>
  <thead>
    <tr>
      <th style="text-align:left"><b>Sr. No.                </b>
      </th>
      <th style="text-align:left"><b>Infrastructural Facility                                                                      </b>
      </th>
      <th style="text-align:left"><b>Yes / No / Not required Full or sharing basis</b>
      </th>
      <th style="text-align:left"></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left"><b>Host institute</b>
      </td>
      <td style="text-align:left"><b>Parent institute</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Workshop Facility                                                                               </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Water &amp; Electricity                                                                             </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Laboratory Space/ Furniture                                                                     </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Power Generator                                                                                 </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>AC Room or AC                                                                                   </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Telecommunication including e-mail &amp; fax                                                        </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Transportation</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Administrative/ Secretarial support                                                             </b>
      </td>
      <td style="text-align:left"><b>Not Required</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Information facilities like Internet/Library                                                    </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Computational facilities                                                                        </b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
      <td style="text-align:left"><b>Yes</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Animal/Glass House                                                                              </b>
      </td>
      <td style="text-align:left"><b>Not Required</b>
      </td>
      <td style="text-align:left"><b>Not Required</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">
        <ol>
          <li></li>
        </ol>
      </td>
      <td style="text-align:left"><b>Any other special facility being provided                                                       </b>
      </td>
      <td style="text-align:left"><b>Nil</b>
      </td>
      <td style="text-align:left"><b>Nil</b>
      </td>
    </tr>
  </tbody>
</table>

  
**7.2 Equipment available with the mentor / Institute/ Group/ Department/Other Institutes available for the project:**  

<table>
  <thead>
    <tr>
      <th style="text-align:left"><b>Equipment available with</b>
      </th>
      <th style="text-align:left"><b>Generic name of Equipment                  </b>
      </th>
      <th style="text-align:left"><b>Model, Make &amp;    year of purchase                        </b>
      </th>
      <th style="text-align:left"><b>Remarks including accessories available and current usage of                                                                                                                             equipment  </b>
      </th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left"><b>With mentor</b>
      </td>
      <td style="text-align:left"><b>Function Generators</b>
      </td>
      <td style="text-align:left"><b>Agilent Technologies, 2018</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Mixed Signal Oscilloscopes</b>
      </td>
      <td style="text-align:left"><b>Textronix, 2018</b>
      </td>
      <td style="text-align:left"><b>Largest HD Display with RF measurements with an optional built-in spectrum analyser. </b>
      </td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Keysight, 2019</b>
      </td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>SMD Soldering Machine</b>
      </td>
      <td style="text-align:left"><b>PCB Power, 2017</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>SMD Reflow Machine</b>
      </td>
      <td style="text-align:left"><b>PCB Power, 2019</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Stencil Printer</b>
      </td>
      <td style="text-align:left"><b>PCB Power, 2019</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>Power Supplies</b>
      </td>
      <td style="text-align:left"><b>Keysight, 2019</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
      <td style="text-align:left"></td>
    </tr>
    <tr>
      <td style="text-align:left"><b>With host institute</b>
      </td>
      <td style="text-align:left"><b>IOT ready Solar Tree including Solar EV Charger and Air Quality Monitoring<br /></b>
      </td>
      <td style="text-align:left"><b>Developed  by the Mentor </b>
      </td>
      <td style="text-align:left"><b>Deployed at CEERI, Taramani, with an estimated annual yield of 19KWh. Features include Charging for Mobiles/Laptops, Wi-Fi Hubs, Smart Surveillance, Street Lighting and Remote Monitoring </b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"></td>
      <td style="text-align:left"><b>Workstations for running Artificial Intelligence(AI) and Machine Learning (ML) Algorithms</b>
      </td>
      <td style="text-align:left"><b>DELL and HP. 2019</b>
      </td>
      <td style="text-align:left"><b>Its currently at CEERI for R&amp; D purpose</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><b>With Parent Institute </b>
      </td>
      <td style="text-align:left"><b>High Performance Computation (HPC) Facility </b>
      </td>
      <td style="text-align:left">
        <p><b>Galaxy Server -43.853 TeraFlops.</b>
        </p>
        <p><b>Make: HP</b>
        </p>
        <p><b>Year of Purchase: 2017</b>
        </p>
      </td>
      <td style="text-align:left"><b>For faster AI and Deep Learning Applications. On demand access of Computational resources.</b>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"></td>
      <td style="text-align:left"><b>MATLAB Campus License </b>
      </td>
      <td style="text-align:left"><b>MATLAB 2019b</b>
      </td>
      <td style="text-align:left"><b>Campus License Supports 99.9 % of the Toolboxes offered by MATLAB that includes Machine Learning related functions and Tool boxes necessary for simulation Model.</b>
      </td>
    </tr>
  </tbody>
</table>

**Other facilities available with the Parent Institute:**

**FABLAB is an innovative idea initiated by SRMIST, to fabricate new ideas, promote innovation and entrepreneurship. The use of digital fabrication technology is the major focus of FABLAB that is considered as the driving force for product development.**   
![](https://lh4.googleusercontent.com/mbgzuKZc0if17Lxfv2NYQRgU6GkHGqjCK3qALk5D_AuZO9-2jBRWXOR4ThIQcUDFo9Fw0iNk4fNoqB90bILEUenGkO1Bz6Zca8imdL7clXj9tnyVxjJwFm6BuBfPUk5osK2zCAgVf9q60yjUrA)  
  
  
  
****

**8.  Name and address of experts/ institution interested in the subject / outcome of the project**   
  


**Dr. Vidhyacharan Baskar,**

**Professor,**

**Department of Electrical and Computer Science Engineering,**

**San Francisco State University, USA.**

[**vcharan@gmail.com**](mailto:vcharan@gmail.com)   
****

**Prof. Krishna Vasudevan,**

**Professor,**

**Department of Electrical Engineering,**

**Indian Institute of Technology, Madras.**

[**krishna.vasudevan@iitm.ac.in**](mailto:krishna.vasudevan@iitm.ac.in)  
****

**Mr. Adhithya Venkat,**

**Design Control Engineer,**

**Valeo India Pvt. Ltd,**

**CEE DEE YES IT Parks, Block-I, 2nd Floor,**

**No.63, Rajiv Gandhi Salai, Navalur**

**Chennai 600130.**

[**adithya.venkat@valeo.com**](mailto:adithya.venkat@valeo.com)  
****

**Mr. Ashish Daniel Cherian,**

**Executive,**

**Systems Engineering,**

**Ather Energy, Bangalore,**

[**ashish.cherian@atherenergy.com**](mailto:ashish.cherian@atherenergy.com)  
****

**Mr. M. P. Prasad,**

**President of Agnito Insights,**

**03, Z block, 6th Ave, Anna Nagar,** 

**Chennai, Tamil Nadu 600040.**

[**prasad@agnito.in**](mailto:prasad@agnito.in)  
****

**Mr. S. Vinoth Kumar,**

**Senior Test Engineer,**

**Jasmin Info Tech Private Limited,**

**Keelkatalai Branch, Chennai.**

[**vinothkumar.sudhakar@jasmin-infotech.com**](mailto:vinothkumar.sudhakar@jasmin-infotech.com)   
  
  
  
  
****

