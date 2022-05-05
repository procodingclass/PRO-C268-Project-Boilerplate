//  this module interacts with the hardware on lower level
#include <MD_MAX72xx.h>

//  this module helps to display patterns and animations easily
#include <MD_Parola.h>
#include <SPI.h>

//add the pin numbers to which you have connected your Dot Matrix unit
const byte clock_pin = ;
const byte data_pin = ;
const byte chip_select_pin = ;

const byte max_devices = 4;

// the data variable will hold the string input entered in the serial monitor.
String data = "";

// creating an instance of MD_Parola class
MD_Parola matrix = MD_Parola(MD_MAX72XX::PAROLA_HW, chip_select_pin, max_devices);

void setup(){
  Serial.begin(9660);
  matrix.begin();  //  initialise the module
  matrix.displayClear();  //  clear, if there is anything
  Serial.println("Enter the text to display: ");
}

void loop(){
 
    //write code to create the effect
    

}
