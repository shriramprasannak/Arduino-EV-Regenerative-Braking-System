\# 🚗 Arduino EV Regenerative Braking System with Real-Time Battery Monitoring



\## 📌 Project Overview



This project demonstrates an Arduino-based Electric Vehicle (EV) Regenerative Braking System using a Tinkercad simulation.



The system simulates vehicle speed control, braking, and energy recovery. A potentiometer acts as the accelerator, while a push button represents the brake pedal. During regenerative braking, the system simulates recovered energy by increasing the battery percentage.



Real-time vehicle speed, battery percentage, operating mode, and energy recovery status are displayed through the Arduino Serial Monitor.



\---



\## ✨ Features



\- Vehicle speed control using a potentiometer

\- DC motor control using PWM

\- Regenerative braking simulation

\- Real-time battery percentage monitoring

\- Energy recovery indication

\- Three vehicle operating modes

\- LED-based mode indication

\- Piezo buzzer alert during regenerative braking

\- Real-time Serial Monitor output



\---



\## 🚦 Operating Modes



\### 🔴 Vehicle Stopped Mode



When the potentiometer is at the minimum position:



\- Vehicle speed is 0 km/h

\- DC motor is stopped

\- Red LED is ON

\- Battery percentage is displayed



!\[Vehicle Stopped Output](Vehicle\_Stopped\_Output.png)



\---



\### 🟢 Driving Mode



When the potentiometer is increased:



\- Vehicle speed increases

\- DC motor rotates

\- Green LED is ON

\- Motor speed is controlled using PWM

\- Battery percentage is monitored



!\[Driving Mode Output](Driving\_Mode\_Output.png)



\---



\### 🟡 Regenerative Braking Mode



When the brake push button is pressed while the vehicle is moving:



\- Regenerative braking mode is activated

\- Motor output is stopped

\- Yellow LED is ON

\- Piezo buzzer is activated

\- Energy recovery becomes active

\- Battery percentage gradually increases



!\[Regenerative Braking Output](Regenerative\_Braking\_Output.png)



\---



\## ⚙️ Working Principle



1\. The potentiometer acts as an accelerator input.

2\. Arduino reads the potentiometer value through analog pin A0.

3\. The analog input is converted into a PWM motor control signal.

4\. The DC motor represents the electric vehicle traction motor.

5\. The PN2222 NPN transistor is used to drive the DC motor.

6\. The diode protects the circuit from motor back EMF.

7\. The push button acts as the brake pedal.

8\. When braking is activated, the system enters regenerative braking mode.

9\. Energy recovery is simulated by gradually increasing the battery percentage.

10\. Vehicle speed, battery percentage, and operating mode are displayed on the Serial Monitor.



\---



\## 🧰 Components Used



| Component | Quantity |

|---|---|

| Arduino Uno R3 | 1 |

| DC Motor | 1 |

| PN2222 NPN Transistor | 1 |

| Diode | 1 |

| 10 kΩ Potentiometer | 1 |

| Push Button | 1 |

| Piezo Buzzer | 1 |

| Green LED | 1 |

| Yellow LED | 1 |

| Red LED | 1 |

| 220 Ω Resistor | 3 |

| 1 kΩ Resistor | 1 |

| Jumper Wires | As required |



The complete component list is available in:



`Components\_List.csv`



\---



\## 📷 Circuit Design



The complete Tinkercad circuit design is shown below:



!\[Circuit Design](Circuit\_Design.png)



\---



\## 📄 Schematic Diagram



The complete schematic diagram is available here:



\[Schematic Diagram](Schematic\_Diagram.pdf)



\---



\## 💻 Arduino Code



The complete Arduino program is available in:



`EV\_Regenerative\_Braking\_System.ino`



\### Arduino Pin Configuration



| Component | Arduino Pin |

|---|---|

| Potentiometer | A0 |

| DC Motor Control | 9 |

| Brake Push Button | 7 |

| Piezo Buzzer | 10 |

| Green LED | 6 |

| Yellow LED | 5 |

| Red LED | 4 |



\---



\## 📊 Serial Monitor Output



The Serial Monitor displays real-time vehicle information.



Example driving mode output:



```text

Mode : Driving

Speed : 51 km/h

Battery : 60%

```



Example regenerative braking output:



```text

Mode : Regenerative Braking

Speed : 23 km/h

Battery : 70%

Energy Recovery : ACTIVE

```



Example vehicle stopped output:



```text

Mode : Vehicle Stopped

Speed : 0 km/h

Battery : 60%

```



\---



\## 🛠️ Software Used



\- Tinkercad Circuits

\- Arduino IDE

\- Arduino C/C++



\---



\## 🎯 Applications



\- Electric vehicle control system simulation

\- Regenerative braking concept demonstration

\- Battery monitoring system

\- Embedded systems learning

\- Arduino motor control projects

\- EV energy recovery research prototypes



\---



\## 🚀 Future Improvements



\- Add a physical battery voltage sensor

\- Implement real battery charging measurement

\- Add an LCD or OLED display

\- Use a bidirectional motor driver

\- Add current and voltage sensing

\- Calculate actual recovered energy

\- Implement the system using FPGA

\- Integrate IoT-based battery monitoring



\---



\## 👨‍💻 Author



\*\*Shriram Prasanna K\*\*



B.Tech Electronics and Communication Engineering



\---



\## 📜 Note



This project is a simulation-based prototype developed using Tinkercad. The regenerative braking and battery energy recovery processes are logically simulated for educational and demonstration purposes.

