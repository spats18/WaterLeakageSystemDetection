//Arduino based tap Leak Detection System
#include<servo.h>
//Initializing the Ultrasonic Sensor with the arduino
// Initialising Digital Pin 3 to the trigger pin of the Ultrasonic Sensor
const int Trigger_Pin = 3;
// Initialising Digital Pin 2 to the echo pin of the Ultrasonic Sensor
const int Echo_Pin = 2;
// Attachment of a LED at Digital Pin 5
int Red_LED = 5;
//Initializing the Servo Motor
// Initialisng the Servo motor to Digital Pin 4 on arduino
int Servomotor_Pin = 4;
// Creating an object of the library
Servo servo;
// Setting up the initial servo motor position in degrees to zero
int Initial_ServoAngle = 0;
// Initialising the Water Sensor
//Setting the flag to zero indicating no leakage
boolean Flag_Water=false;
// Initialisng the Water sensor to Digital Pin 8 on arduino
int Water_Sensor = 8;
// Attachment of a LED at Digital Pin 6 to detect leakage
int White_LED = 6;
void setup()
{
//Setting up the Ultrasonic Sensor
pinMode(Red_LED, OUTPUT);
pinMode(Trigger_Pin, OUTPUT);
pinMode(Echo_Pin, INPUT);
//Set the data rate in bits per second (baud) for serial data transmission
Serial.begin(9600);
// Setting up the Servo Motor
servo.attach(Servomotor_Pin);
24 | P a g e
//Setting up the Water Sensor
pinMode(Water_Sensor, INPUT);
pinMode(White_LED, OUTPUT);
}
void loop()
{
long Duration, Distance;
// Triggering the ultrasonic sound pulses
digitalWrite(Trigger_Pin, LOW);
delayMicroseconds(5);
digitalWrite(Trigger_Pin, HIGH);
delayMicroseconds(10);
digitalWrite(Trigger_Pin, LOW);
// Detection of movement of tap and indication through LED
Duration = pulseIn(Echo_Pin, HIGH);
Distance = (Duration/2) / 29.1;
if (Distance < 10)
{
digitalWrite(Red_LED,HIGH);
servo.write(135);
}
else
{
digitalWrite(Red_LED,LOW);
servo.write(-135);
}
// Detection and indication of water leak through LED
if(digitalRead(Water_Sensor) == LOW)
{
digitalWrite(White_LED,HIGH);
}
else
{
digitalWrite(White_LED,LOW);
}
}
