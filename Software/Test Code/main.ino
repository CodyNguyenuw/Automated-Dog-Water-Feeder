
#include "HX711.h"

// HX711 connections
#define DT 22
#define SCK 23
const int pumpPin = 13;

HX711 scale;

// Calibration settings
float calibrationFactor = 420.0; // CHANGE THIS after calibration

// Weight threshold
float threshold = 100.0; // grams

void setup() {
  Serial.begin(115200);
  pinMode(pumpPin, OUTPUT);
  Serial.println("Initializing HX711...");
  
  scale.begin(DT, SCK);

  // Wait for HX711
  while (!scale.is_ready()) {
    Serial.println("Waiting for HX711...");
    delay(500);
  }

  Serial.println("HX711 connected!");

  // Apply calibration factor
  scale.set_scale(calibrationFactor);

  // Tare the scale
  Serial.println("Taring load cell");
  delay(3000);

  scale.tare();

  Serial.println("Scale zeroed!");
  Serial.println("Starting weight measurements...");
}

void loop() {

  if (scale.is_ready()) {

    // Read weight in grams
    float weight = scale.get_units(10);

    // Print weight continuously
    Serial.print("Weight: ");
    Serial.print(weight, 2);
    Serial.println(" g");

    // Check weight threshold
    if (weight >= threshold) {

      Serial.println("THRESHOLD REACHED!");
      digitalWrite(pumpPin, HIGH);
      // PUT YOUR ACTION HERE
      // Example: turn on an LED or activate another output

    }

  } else {
    Serial.println("HX711 not ready!");
  }

  delay(200);
}

