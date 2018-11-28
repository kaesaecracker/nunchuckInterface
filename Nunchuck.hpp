#ifndef NUNCHUCK_H
#define NUNCHUCK_H 1

#include <Wire.h>
#include <inttypes.h>
#include <Arduino.h> // used for serial

namespace Nunchuck {

// data structure for holding nunchuck result
struct Data {
    uint8_t joyx, joyy; //  0 - 255
    bool zbut, cbut; //  0 - 1
    int16_t accx, accy, accz; //  0 - 1023
};

// send the initilization handshake
void handshake();
Data getNewData();
}

#endif // NUNCHUCK_H