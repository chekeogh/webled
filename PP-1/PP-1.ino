#include "FastLED.h"

//Setting up leds
#define NUM_LEDS 10
#define LED_PIN  5
#define DATA_PIN 5
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];
int colornum = 0;
#define CHIPSET     WS2811


void setup() {
  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS); 
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  // initialize serial communication:
  Serial.begin(9600);  
}


void loop() {



leds[0] = CRGB::Green; // Set color
FastLED.show(); // Show the leds
delay(1000);


//leds[0] = CHSV(255, 255, 255); // Set color
//FastLED.show(); // Show the leds
//delay(1000);


//  for(int i = 0; i < NUM_LEDS; i++) {
//    leds[i] = CRGB::Blue; // Set color
//    FastLED.show(); // Show the leds
//    delay(100);
//    }

//  for(int i = 0; i < NUM_LEDS; i++) {
//    leds[i] = CRGB::Black; // Set color
//    FastLED.show(); // Show the leds
//    delay(100);
//    }


}





