# Arduino based Home Barge Alert

Project by: **Bhavya Kakwani**

***

# Components Used

1) Arduino Uno R3
2) PIR Sensor
3) Piezo Buzzer
4) Push Button
5) LED
6) 220 Ω Resistor
7) 1 KΩ Resistor
8) Breadboard Small

# Working

The signal pin of the PIR sensor is connected to the digital pin number 8 of the Arduino board. When a person passes in front of the sensor, the sensor converts the change in the IR radiations into a change in output voltage, thus, making the digital pin 8 high. When the motion is detected, the detected person is given 15 seconds time-frame to input the password. If the entered password is correct, a welcome message is displayed and the program resets. If the entered password is incorrect or no password is entered within the given 15 seconds, the buzzer connected to pin 6 is turned ON, the LED connected to pin 4 starts blinking repeatedly, and INTRUDER ALERT message is displayed. Whenever the Push Button is pressed, the Buzzer is turned OFF, the LED stops blinking, and the program resets.

# Applications

The Arduino based Home Barge Alert can also be used at various other places in day-to-day life by incorporating some changes into it, like:

• Offices
• ATM’s
• Banks
• Museums
• Jewellery Shops