Arduino Based PC-Joystick

Arduino gamepad using a Funduino based Joystick shield.

Components used:
-> Arduino Uno
-> Joystick Shield

How it Works:
-> Arduino - Gathers the button states (7 button and X/Y Joystick) and then it contructs a data frame. This frame is sent via Serial over to the PC which is running an automated Python script.
-> Arduino sketch .ino - Functioning code for the joystick shield which helps it to interface with arduino and the python script.
-> Python - This script is for capturing any incoming data from arduino and whenever it detects a new frame, it will extract the values for all the button states as well as the X/Y joystick and converts the button pushed into computer input using the 'pyautogui' library.


