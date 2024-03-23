
#include "Adafruit_NeoPixel.h"

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            4  // ist PIN D2 am Wemos D1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 172

// NeoPixel define and connext
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


// void output to segment separation dots
void show_dots(byte startPos, byte CR, byte CG, byte CB)
{
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
}

// void output to seven segment display
void show_number(byte startPos, byte value, byte CR, byte CG, byte CB)
{
switch (value) {
  case 0:
    //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+21, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+22, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+23, pixels.Color(CR, CG, CB));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+25, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+26, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+27, pixels.Color(0, 0, 0));
    break;

  case 1:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+1, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+2, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+3, pixels.Color(0,0,0));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+5, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+6, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+7, pixels.Color(0,0,0));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+17, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+18, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+19, pixels.Color(0,0,0));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+21, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+22, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+23, pixels.Color(0,0,0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+25, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+26, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+27, pixels.Color(0,0,0));
    break;

  case 2:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+1, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+2, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+3, pixels.Color(0, 0, 0));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+13, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+14, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+15, pixels.Color(0, 0, 0));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+21, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+22, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+23, pixels.Color(CR, CG, CB));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

  case 3: 
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+1, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+2, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+3, pixels.Color(0, 0, 0));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+21, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+22, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+23, pixels.Color(0, 0, 0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

  case 4:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+5, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+6, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+7, pixels.Color(0, 0, 0));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+17, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+18, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+19, pixels.Color(0, 0, 0));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+21, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+22, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+23, pixels.Color(0, 0, 0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

  case 5:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+9, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+10, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+11, pixels.Color(0, 0, 0));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+21, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+22, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+23, pixels.Color(0, 0, 0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

  case 6:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+9, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+10, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+11, pixels.Color(0, 0, 0));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+21, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+22, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+23, pixels.Color(CR, CG, CB));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));  
    break;

  case 7:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+1, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+2, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+3, pixels.Color(0,0,0));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+17, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+18, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+19, pixels.Color(0,0,0));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+21, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+22, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+23, pixels.Color(0,0,0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+25, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+26, pixels.Color(0,0,0));
    pixels.setPixelColor(startPos+27, pixels.Color(0,0,0));
    break;

  case 8:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+21, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+22, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+23, pixels.Color(CR, CG, CB));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

  case 9:
   //segment 1
    pixels.setPixelColor(startPos+0, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+1, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+2, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+3, pixels.Color(CR, CG, CB));

   //segment 2
    pixels.setPixelColor(startPos+4, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+5, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+6, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+7, pixels.Color(CR, CG, CB));

   //segment 3
    pixels.setPixelColor(startPos+8, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+9, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+10, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+11, pixels.Color(CR, CG, CB));

    //segment 4
    pixels.setPixelColor(startPos+12, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+13, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+14, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+15, pixels.Color(CR, CG, CB));
   
    //segment 5
    pixels.setPixelColor(startPos+16, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+17, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+18, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+19, pixels.Color(CR, CG, CB));
       
    //segment 6
    pixels.setPixelColor(startPos+20, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+21, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+22, pixels.Color(0, 0, 0));
    pixels.setPixelColor(startPos+23, pixels.Color(0, 0, 0));
   
    //segment 7
    pixels.setPixelColor(startPos+24, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+25, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+26, pixels.Color(CR, CG, CB));
    pixels.setPixelColor(startPos+27, pixels.Color(CR, CG, CB));
    break;

}  // End Switch Case

}// End show_number
