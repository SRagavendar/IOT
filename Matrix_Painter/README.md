# Matrix Painter

### Project Description
The "Matrix Painter" is a project where you control 8x8 LED Matrices from either your computer, a friends computer, or any other device such as a phone.

### Hardware connections
VCC -> 5v
GND -> GND
DIN -> Digital pin 11
CS -> Digital pin 10
CLK -> Digital pin 13

### Processing
An app written in Processing (read more about Processing here) connects to the Arduino via the Serial port.
The app has a UI for controlling the pixels on the matrices.
The app also opens a TCP server on port 5204 which allows for further ways of controlling the matrices by connecting clients.
