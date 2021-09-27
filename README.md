# WaterLeakageSystemDetection
## PROBLEM DEFINITION
Water leaks from pipes, plumbing fixtures, faucets, valves and fittings are a common sight seen in the buildings and is a significant source of water wastage. On a rough estimate, only a small drip from a worn faucet washer can waste around 75 liters of water per day. Seeing the amount of wastage, there is a need to check all the water pipes and fittings regularly in order to assess their operational status so that any leak occurring should be urgently repaired. Research has shown that the typical home can lose 7.6 m3 to 76 m3 of water per year due to leaks. Leaks such as dripping faucets and leaking water heaters are easy to detect. However, many leaks go undetected because the source is not visible. Leaking faucets are a common occurrence and are usually simple to repair. A faucet dripping slowly at only one drop every two seconds will waste more than 1,000 gallons or 3.7 m3 per year.
## METHODOLOGY
The first step was to think and devise a solution that could be applied within the existing washroom systems. For the detection of a faucet leakage, we required a system that could detect the flow of water when the tap is closed. So, the water sensor was selected to detect the flow of water. A sensor was required to detect the on/off position of the tap and an ultrasonic sensor was used for this purpose. While the tap was in an on position, the water sensor was not supposed to detect the flow of water. This could be possible if a component could be used to move the water sensor away from the flow of water when the tap is in own position. A servo motor was used for this purpose.
## WORK DONE
First, all the necessary components were studied and their compatibility was checked. Then, appropriate connections were made. After that, the code was written on Arduino IDE and then it was uploaded to the Arduino Uno and the readings were taken which depicted that the system was successful in detecting water leakage from taps. All the necessary components were studied and their compatibility was checked. Then, appropriate connections were made. After that, the code was written on Arduino IDE and then it was uploaded to the Arduino Uno and the readings were taken which depicted that the system was successful in detecting water leakage from taps.
1. An ultrasonic sensor, a servo motor and water sensor are attached to an arduino board. The ultrasonic sensor will detect whether the tap is open or shut.
2. If the tap is open, the servo motor needs to move the water sensor out of the way so that it does not detect the flow of water while it is being used.
3. When the tap is closed, the water sensor is in the way of the tap and if it detects the flow of water, it clearly indicates the presence of leakage.
4. An alarm or buzzer can be used in this case to notify the maintenance personnel.
## RESULT
The images of the schematic for the water tap leakage system are attached. The motion of the servo motor is based on the detection of the movement of the tap by the ultrasonic sensor. Here, the movement of the tap is shown by the to and fro motion of the fingers. The water sensor detects the presence of water and sends a digital output to the console where 1 indicated presence of water and 0 indicated absence. After detecting the flow of water even when the tap is closed, the concerned person can be informed regarding the same so that the leakage can be repaired in time.

![image](https://user-images.githubusercontent.com/32418411/133656093-1b16848a-0f48-4309-8b03-f39648b5c162.png)

![image](https://user-images.githubusercontent.com/32418411/133656107-2b77abbc-cae6-4fa7-b15c-28f73e8b34be.png)


Fig. 11 Circuit diagram and verification of the working

The complete working is depicted in the following link: (https://youtu.be/IDTwD7ucpg4)

