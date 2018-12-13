/*
  Copyright (c) 2017 Relativty
  Relativ.h - Library for Relativ VR Headset.
  https://github.com/relativty/Relativ
*/

#include "Arduino.h"
#include "Relativ.h"

Relativ::Relativ() {
}

void Relativ::start() {
  Serial.begin(250000);
}

void Relativ::updateOrientation(float x, float y, float z, float w, int accuracy) {
    Serial.print(x, accuracy);
    Serial.print(",");
    Serial.print(y, accuracy);
    Serial.print(",");
    Serial.print(z, accuracy);
    Serial.print(",");
    Serial.println(w, accuracy);
    Serial.flush();
}