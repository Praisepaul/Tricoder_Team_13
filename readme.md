Smart Street Lights using LDR and IR sensor

Introduction :

This code is designed to control LED street lights using an LDR (Light Density Resistor) and IR (Infrared) sensors. The purpose of this code is to save energy by turning off the street lights during the day when it is not needed and also to save energy by turning off the street lights when there is no motion detected by the IR sensor.

Code Description:

Variables:

LED_n: Number of LEDs connected to the circuit.
leds[]: An array of LED pins connected to the circuit.
ir_pins[]: An array of IR sensor pins connected to the circuit.
ldr_pin: Pin connected to the LDR.

Setup:

Initialize the Serial communication at 9600 baud rate.
Set the pin modes for each LED, IR sensor, and LDR.
Constants
LDR_THRESHOLD: The LDR threshold value for turning off the street lights during the day.
IR_THRESHOLD: The IR sensor threshold value for turning off the street lights when there is no motion detected.

Loop:

Read the LDR and IR sensor values.
If the LDR value is greater than the threshold or the IR sensor value is greater than the threshold, turn off all the LEDs.
If the LDR value is less than the threshold and the IR sensor value is less than the threshold, turn on all the LEDs.
If none of the above conditions are met, turn on all the LEDs.

How to Use:

To use this code, upload it to your Arduino board and connect the LEDs, IR sensors, and LDR to the appropriate pins. Adjust the LDR and IR sensor thresholds as needed for your specific application.