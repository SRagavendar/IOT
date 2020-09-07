#include <Servo.h>
Servo servoMotor;

const int trigPin = 3;
const int echoPin = 5;
const int servoPin = 9;

int const count = 7;
int posiciones[count] = {0,30,60,90,120,150,180};

long duration;
int distance;
int timeDelay =700;
void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  
}
 
void loop() {
  int i;
  int tmpdist;
  for (i = 0; i < count; i = i + 1) {
    servoMotor.write(posiciones[i]);
    delay(timeDelay);
    tmpdist = calcDist();
    Serial.print(posiciones[i]);
    Serial.print(";");
    Serial.println(tmpdist);
  }
}

int calcDist() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Lee el echoPin, devuelve el tiempo de recorrido de la onda sonora en microsegundos
  duration = pulseIn(echoPin, HIGH);
  // Calculad la distancia
  distance= duration*0.034/2;
  return distance;
}
