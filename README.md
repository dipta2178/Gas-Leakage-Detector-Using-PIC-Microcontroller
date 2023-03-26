# Gas-Leakage-Detector-Using-PIC-Microcontroller

# CSE331

LPG gas is commonly used in our home for cooking purpose. LPG is used in school and college 
canteens; also, it is used in various industries. Accidents never happen with a prior intimation. 
There are chances of gas leakage due to some negligence. In such cases, if leakage is not detected 
at an early stage, then it can create huge damage. PIC microcontroller-based LPG gas leakage 
detector mini project can be used in such situations. This LPG leakage detector is implemented 
using a PIC16F877A microcontroller.


We have interfaced MQ-9 gas sensor with PIC16F877A microcontroller. The gas sensor output 
voltage is directly given to the PIC16F877A microcontroller.


PIC16F877A microcontroller can read the analog voltage from any sensor, so we have not used 
analog to digital converter IC in this project. PIC16F877A can read 8 analog inputs. Out of these 
8 inputs, we have used one analog input pin for LPG gas sensor.


The PIC microcontroller reads the output of the LPG sensor which is converted to digital format 
because of inbuilt analog to digital converter.


We used 16 by 2 alphanumeric LCD display. This LCD display shows the message as, “Gas 
detected”, whenever the sensor value crosses the limit. Otherwise, LCD shows, “No Gas 
Detected”. If the value is above a certain danger level then the PIC16F877A microcontroller turns 
on the buzzer. We have used an electric buzzer in this project.
