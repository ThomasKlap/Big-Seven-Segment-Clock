#include <Arduino.h>
#include "SoftwareSerial.h"
#include "show.h"
#include <ESP8266WiFi.h>
#include <WiFiManager.h> //WIFI Manager and Accespoint
#include <time.h>                       // time() ctime()
#include <TimeLib.h> 
#include <TZ.h> // aditional for DST 


extern "C" int clock_gettime(clockid_t unused, struct timespec *tp); // this line is necessary for first TimeGet
static time_t now2; // An object which can store a time

int SW_VERSION =002;
int count = 0;
int color = 0;
int red = 100;
int green;
int blue;
int sekunden = 45 ;
int minuten = 24 ;
int stunden = 14 ;
int rx_int = 0;
char rxChar = 0;
String rx_string;
#define DEBUG //seriell debug
#define MYTZ TZ_Europe_Berlin // set timezone


void parameter_menue()
{
    // Check receive buffer.
    if (Serial.available() > 0) {
        rxChar = Serial.read(); // Save character received.
        Serial.flush(); // Clear receive buffer.

        switch (rxChar) {
            case 'R':
            Serial.println("enter RED value 0-255:");
            while (Serial.available() == 0) {} 
            rx_string = Serial.readString();
            rx_int = rx_string.toInt();
            if ((rx_int >= 0) && (rx_int <= 255)) {
              Serial.print("RED value recived: ");
              Serial.println(rx_int);
              red = rx_int; }
            else { Serial.println("inacepted value recived"); }
            break;

            case 'G':
            Serial.println("enter GREEN value 0-255:");
            while (Serial.available() == 0) {} 
            rx_string = Serial.readString();
            rx_int = rx_string.toInt();
            if ((rx_int >= 0) && (rx_int <= 255)) {
              Serial.print("GREEN value recived: ");
              Serial.println(rx_int);
              green = rx_int; }
            else { Serial.println("inacepted value recived"); }
            break;

            case 'B':
            Serial.println("enter BLUE value 0-255:");
            while (Serial.available() == 0) {} 
            rx_string = Serial.readString();
            rx_int = rx_string.toInt();
            if ((rx_int >= 0) && (rx_int <= 255)) {
              Serial.print("BLUE value recived: ");
              Serial.println(rx_int);
              blue = rx_int; }
            else { Serial.println("inacepted value recived"); }           
            break;

            case '?':
              Serial.println("--- command list: ---");
              Serial.println("? -> Print this HELP");
              Serial.println("R -> Change RED value");
              Serial.println("G -> Change GREE value");
              Serial.println("B -> Change BLUE value");
            break;

            default:
                Serial.print("'");
                Serial.print((char)rxChar);
                Serial.println("' is not a valid command!");
                Serial.println("enter ? for command list");
            #ifdef DEBUG  
              Serial.print("ctime:     ");
              Serial.print(ctime(&now2));
              Serial.print(stunden);
              Serial.print(":");
              Serial.print(minuten);
              Serial.print(":");
              Serial.print(sekunden);
              Serial.println("");
            #endif
            break;
        }
     }
}

void setup()
{
  Serial.begin(9600);
  Serial.println("\nStarting...\n");
  Serial.println("BIG - 7seg Clock, by LED-Steampunk");
  Serial.print("Software Version  ");
  Serial.println(SW_VERSION);
  Serial.flush();
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.clear(); // Set all pixel colors to 'off'
  pixels.show();   // Send the updated pixel colors to the hardware.
  // start network with WiFi-Manager
  WiFiManager wifiManager; // wifi configuration wizard
  wifiManager.autoConnect("BIG7_Clock", "12345678"); // configuration for the access point, set your own secret.
  // This is where your time zone is set
 
  configTime(MYTZ, "pool.ntp.org");
  setTime(19,06,00,28,11,2023);
} // end setup

void loop()
{
  parameter_menue(); //serial parameters
  if ((red < 10) & (green < 10) & (blue < 10)) {red=50; Serial.println("set default color: RED=50");} //default anzeigen
  now2 = time(nullptr);      // Updates the 'now2' variable to the current time value
  //convert to simple values for shift-out
  stunden = (localtime(&now2)->tm_hour);
  minuten = (localtime(&now2)->tm_min);
  sekunden = (localtime(&now2)->tm_sec);

   
    delay(100); // Pause before next pass through loop
    pixels.clear(); // Set all pixel colors to 'off'

    // show the secounds
    show_number(0, sekunden%10, red, green, blue); //first digit
    //if (sekunden > 9) 
    show_number(28, sekunden/10, red, green, blue); //second digit, decade
    show_dots(56, red, green, blue);

    // show the minutes
    show_number(58, minuten%10, red, green, blue); //first digit
    //if (minuten > 9) 
    show_number(86, minuten/10, red, green, blue); //second digit, decade
    show_dots(114, red, green, blue);   

    // show the hours
    show_number(116, stunden%10, red, green, blue); //first digit
    if (stunden >9) 
    show_number(144, stunden/10, red, green, blue); //second digit, decade
    pixels.show();   // Send the updated pixel colors to the hardware.
    




} // End Loop