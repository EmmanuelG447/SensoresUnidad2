// Arduino stepper motor control code

#include <Stepper.h>

// Include the header file

// change this to the number of steps on your motor

#define STEPS 32

// create an instance of the stepper class using the steps and pins

Stepper stepper(STEPS, 8, 10, 9, 11);

int val = 0;

int LED = 7;

int LDR = A0;

void setup()

{

Serial.begin(9600);

stepper.setSpeed(200);

pinMode(LED, OUTPUT);

pinMode(LDR, INPUT);

}

void loop()

{

int LDRValue = analogRead(LDR);

Serial.print("sensor = ");

if (LDRValue <=100)

{

digitalWrite(LED, HIGH);

val = Serial.parseInt();

stepper.step(512);

Serial.println(val);

//for debugging

}

else

{

digitalWrite(LED, LOW);

}

}
