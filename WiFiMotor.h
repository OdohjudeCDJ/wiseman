#ifndef Ml
#define Ml

#if (ARDUINO >= 100)
    #include "Arduino.h"
#else 
    #include "WProgram.h"

#endif

class WiFiMotor{
  public:
      //declare pins for motor 1
      int enA = 19;  //PWM capable on esp32
      int in1 = 18;  //pin 18 on esp32
      int in2 = 5;   //pin 5 on esp32

      //declare pins for motor 2
      int enB = 4;  //PWM capable on esp32
      int in3 = 16; //pin 16 on esp32
      int in4 = 17; //pin 17 on esp32

      int notify = 2;

      //constructor for the class
      WiFiMotor();

      void begin();     //function to initialize the pins
      void start();     //function to turn the car on
      void brake();     //function to stop the car
      void forward();   //function to move the car forward
      void backward();  //function to move the car backwards
      void left();      //function to turn the car left
      void right();     //function to turn the car right
      
private:


};
#endif