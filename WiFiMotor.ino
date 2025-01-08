#include <WiFi.h>   //include wifi library
#include <NetworkClient.h>    //include network library
#include <WiFiAP.h>    //include wifiAp to use the esp in accesspoint mode

#include "WiFiMotor.h"    //include the WiFiMotor header file to control the car via the web

// name and password of this esp32 accesspoint.
const char *ssid = "ESP_IN_TEST";
const char *password = "33006644";

NetworkServer server(80);  // create instance of NetworkServer
WiFiMotor robot;      // create instance(object) of wifimotor library 


//VOID SETUP
void setup() {
    robot.begin();
    Serial.begin(115200);
    Serial.println();
    Serial.println("Configuring access point...");

    // You can remove the password parameter if you want the AP to be open.
    // a valid password must have more than 7 characters
    if (!WiFi.softAP(ssid, password)) {
          log_e("Soft AP creation failed.");
          while (1);
    }
    IPAddress myIP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(myIP);
    server.begin();

    Serial.println("Server started");
}

//VOID LOOP
void loop() {
  NetworkClient client = server.accept();  // listen for incoming clients

  if (client) {                     // if you get a client,
    Serial.println("New Client.");  // print a message out the serial port
    String currentLine = "";        // make a String to hold incoming data from the client
    while (client.connected()) {    // loop while the client's connected
      if (client.available()) {     // if there's bytes to read from the client,
            char c = client.read();     // read a byte, then
            Serial.write(c);            // print it out the serial monitor
            if (c == '\n') {            // if the byte is a newline character

            // if the current line is blank, you got two newline characters in a row.
            // that's the end of the client HTTP request, so send a response:
            if (currentLine.length() == 0) {
                // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
                // and a content-type so the client knows what's coming, then a blank line:
                client.println("HTTP/1.1 200 OK");
                client.println("Content-type:text/html");
                client.println();

                // design the webpage to your chioce.
                client.println("<!DOCTYPE html>");
                client.println("<title>WiFiMotor Control Page</title>");
                client.println("<h1><><><> | CAR_CONTROL_PANEL | <><><></h1><h1><hr></h1>");
                client.println("<br>");
                client.println("<h3>.........<a href=\"/S\" title=\"To start the car\">START</a>.......|__________________|........<a href=\"/X\" title=\"To stop the car\">BRAKE</a>....</h3><br><br>");
                client.println("<h3>....<a href=\"/F\" title=\"Move car forward\">FORWARD</a>.....|__________________|.....<a href=\"/B\" title=\"Move car backwards\">BACKWARD</a>....<h3><br><br>");
                client.println("<h3>.........<a href=\"/L\" title=\"Turn to the left\">LEFT</a>..........|__________________|.........<a href=\"/R\" title=\"Turn to the right\">RIGHT</a>....<h3><br><br>");
                //The HTTP response ends with another blank line:
                client.println();
                // break out of the while loop:
                break;
            }
            else {  // if you got a newline, then clear currentLine:
                currentLine = "";
              }
            }
            else if (c != '\r') {  // if you got anything else but a carriage return character,
                currentLine += c;      // add it to the end of the currentLine
            }

            // Checks to see the client request(i.e the command/option entered on the webpage).
            if (currentLine.endsWith("GET /S")) {
                //this initializes the car.
                robot.start();
            }
            if (currentLine.endsWith("GET /X")) {
                //this stops the car when moving. 
                robot.brake();
            }
            if (currentLine.endsWith("GET /F")) {
                //this moves the car forward at a speed of 255 PWM.
                robot.forward();
            }
            if (currentLine.endsWith("GET /B")) {
                //this reverses the car at a speed of 150 PWM.
                robot.backward();
            }
            if (currentLine.endsWith("GET /R")) {
                //this function turns the car to the right.
                robot.right();
            }
            if (currentLine.endsWith("GET /L")) {
                //this function turns the car to the left.
                robot.left();
            }
      }
    }
    // close the connection:
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
