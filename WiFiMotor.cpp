#include "WiFiMotor.h"   //include the WiFiMotor header file to invocaton and working with the WiFiMotor class.

//this means that the constructor "WiFiMotor(){}" is a member of the WiFiMotor class
// "::" here symbolizes membership.
WiFiMotor::WiFiMotor(){
    Serial.println("Command received");     //simply tells a message to the serial monitor that a command has been received
                                            //Note: this function would run each time a function is called.
};

//this means that the function "begin(){}" is a member of the WiFiMotor class
void WiFiMotor::begin(){
  //Sets all pins to output mode.
    pinMode(enA,OUTPUT);
    pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
    pinMode(enB,OUTPUT);
    pinMode(in3,OUTPUT);
    pinMode(in4,OUTPUT);
    pinMode(notify,OUTPUT);
    //makes sure the led is off before receiving any command. 
    digitalWrite(notify,LOW); 
};

//this means that the function "start(){}" is a member of the WiFiMotor class
void WiFiMotor::start(){
  //motor 1 turned off
  analogWrite(enA,0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  //motor 2 turned off
  analogWrite(enB,0);
  digitalWrite(in3, LOW);
  digitalWrite(in3, LOW);

  //led turned on to notify that the car is turned on and ready to recieve commands.
  digitalWrite(notify,HIGH);
  delay(100);
  digitalWrite(notify,LOW);
  delay(50); 
  digitalWrite(notify,HIGH);
  delay(100);
  digitalWrite(notify,LOW);
  delay(50);
  digitalWrite(notify,HIGH);
  delay(100);
  digitalWrite(notify,LOW);
  delay(50);
  digitalWrite(notify,HIGH);
  Serial.println("Ready to go");
  
};

//this means that the function "brake(){}" is a member of the WiFiMotor class
void WiFiMotor::brake(){
  digitalWrite(notify,HIGH);
  delay(1200);
  //motor 1 and 2 turned off slowly
  //i.e from a speed of 100 to zero(0)
  for(int i=100;i>0;--i){
  analogWrite(enA,i);
  analogWrite(enB,i);
  }
  //led turned on to notify that the car is on brake. 
  digitalWrite(notify,LOW);

  //motors are all turned on.
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in3, LOW);
  Serial.println("Brakes applied");

};

//this means that the function "forward(){}" is a member of the WiFiMotor class
void WiFiMotor::forward(){
  digitalWrite(notify,HIGH);
  //motor 1 and 2 accelerates forward
 
  analogWrite(enA,255);     //------|
  digitalWrite(in1, HIGH);  //      }--- Motor 1
  digitalWrite(in2, LOW);   //------|

  analogWrite(enB,255);     //------|
  digitalWrite(in3, HIGH);  //      }--- Motor 2
  digitalWrite(in3, LOW);   //------|
  
  
  Serial.println("Moving Forward");
};
//this means that the function "backwards(){}" is a member of the WiFiMotor class
void WiFiMotor::backward(){
  //motor 1 and 2 move backwards
  analogWrite(enA,150);     //------|
  digitalWrite(in1, LOW);   //      }--- Motor 1
  digitalWrite(in2, HIGH);  //------|

  analogWrite(enB,150);     //------|
  digitalWrite(in3, LOW);   //      }--- Motor 2
  digitalWrite(in3, HIGH);  //------|

  Serial.println("Moving Backwards");

};
 
 //this means that the function "left(){}" is a member of the WiFiMotor class
void WiFiMotor::left(){
  //in order to turn left,motor 1 spins backwards
  //while motor 2 spins forward.
  analogWrite(enA,200);     //------|
  digitalWrite(in1, LOW);   //      }--- Motor 1 spining backward.
  digitalWrite(in2, HIGH);  //------|

  analogWrite(enB,200);     //------|
  digitalWrite(in3, HIGH);  //      }--- Motor 2 spining forward.
  digitalWrite(in3, LOW);   //------|

  Serial.println("Turning Left");
};      

//this means that the function "right(){}" is a member of the WiFiMotor class
void WiFiMotor::right(){
  //in order to turn right,motor 1 spins forwards
  //while motor 2 spins backwards.
  analogWrite(enA,200);     //------|
  digitalWrite(in1, HIGH);  //      }--- Motor 1 spining forward.
  digitalWrite(in2, LOW);   //------|

  analogWrite(enB,200);     //------|
  digitalWrite(in3, LOW);   //      }--- Motor 2 spining backward.
  digitalWrite(in3, HIGH);  //------|

  Serial.println("Turning Right");
};
