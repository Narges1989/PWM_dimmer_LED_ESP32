/**
 * @file main.cpp
 * @author Narges (n.kurkani@gmail.com)
 * @brief This code implements LED control using a PWM signal with 5 brightness steps.
 * @version 0.1
 * @date 2025-04-10
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <Arduino.h>

const int num_steps = 5;
const int fade_interval = 1000;
unsigned long previousMillis = 0;
int i = 0;

void setup()
{
  pinMode(GPIO_NUM_21, OUTPUT);
}

void loop()
{
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= fade_interval)
  {
    i = i % 5;
    int value = (255 / 5) * (i + 1);

    analogWrite(GPIO_NUM_21, value);
    previousMillis = currentMillis;
    i++;
  }
}
