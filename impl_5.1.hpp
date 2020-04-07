#pragma once

#include <stdint.h>

inline uint8_t Parity(uint64_t number) {
    uint8_t result = 0;
    while(number)
    {
        result ^= number & 1;
        number = number >> 1;
    }
    return result;
}