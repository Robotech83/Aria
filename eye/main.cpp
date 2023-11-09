#include <Servo.h>

/*notes for stream
pin location
top left lid -10
bottom left lid -11
top right lid - 5
bottom right lid - 6
Yarm - 9
Xarm - 3
*/
Servo top_left_eye_lid;
Servo bottom_left_eye_lid;
Servo top_right_eye_lid;
Servo bottom_right_eye_lid;

Servo Yarm;

Servo Xarm;


void setup() {
  top_left_eye_lid.attach(10);
  bottom_left_eye_lid.attach(11);
  top_right_eye_lid.attach(5);
  bottom_right_eye_lid.attach(6);
  Yarm.attach(9);

  Xarm.attach(3);

  Serial.begin(9600);
  close();
  center();
  delay(2000);

}

void loop() {
  right_wink();
  delay(500);
  open();
  delay(500);
  close();
  delay(2000);
}


void blink() {
  close();
  delay(420);
  open();
  delay(222);

}

void close() {
  top_left_eye_lid.write(2);
  bottom_left_eye_lid.write(120);
  top_right_eye_lid.write(46);
  bottom_right_eye_lid.write(55);
}

void open() {
  top_left_eye_lid.write(55);
  bottom_left_eye_lid.write(36);
  top_right_eye_lid.write(2);
  bottom_right_eye_lid.write(160);
}

void center() {
  Yarm.write(90);
  Xarm.write(90);
}

void left() {
  Xarm.write(50);
}

void right() {
  Xarm.write(130);
}

void up(){
  Yarm.write(120);
}

void down(){
  Yarm.write(45);
  
}

void left_wink(){

  top_left_eye_lid.write(55);
  bottom_left_eye_lid.write(36);
  delay(200);
  top_left_eye_lid.write(2);
  bottom_left_eye_lid.write(120);
  delay(200);
}

void right_wink(){
  top_right_eye_lid.write(2);
  bottom_right_eye_lid.write(160);
  delay(200);
  top_right_eye_lid.write(46);
  bottom_right_eye_lid.write(55);
}

void creepy(){
  
}