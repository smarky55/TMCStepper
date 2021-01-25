#pragma once
#if defined(ESP_PLATFORM)

#include <stdint.h>

// Arduino compatability
void delay(unsigned long millis);
uint32_t millis();

// Stream interface to implement outside of this component
class Stream {
 public:
  virtual int available() = 0;
  virtual uint8_t write(const uint8_t data) = 0;
  virtual int16_t read() = 0;
};

#endif