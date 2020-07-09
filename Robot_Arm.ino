#include <Servo.h>

Servo Servo1;
Servo Servo2;

double position1=0;
double L1=3;
double L2=8;
double X=-6;
double Y=8;
double theta1=0;
double theta2=0;
 
void setup() {

Servo1.attach(3);
Servo2.attach(6);

} 

void loop() {

theta2= acos(pow(X,2)+pow(Y,2)-pow(L1,2)-(pow(L2,2))/(2*L1*L2));
theta1= acos((pow(L1,2)+pow(X,2)+pow(Y,2)-pow(L2,2))/(2*L1*sqrt(pow(X,2)+pow(Y,2))));

Servo2.write(theta2*(180/PI)); 
Servo1.write(theta1*(180/PI));
 
}
