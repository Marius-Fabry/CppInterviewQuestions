#pragma once

#include <stdint.h>

uint64_t SwapBits(uint64_t number, uint8_t bit_index_1, uint8_t bit_index_2)
{
    const uint8_t bit1 = (number >> bit_index_1) & 1;
    const uint8_t bit2 = (number >> bit_index_2) & 1;
    if (bit1 != bit2)
    {
        // Swap bits here
        number ^= 1 << bit_index_1;
        number ^= 1 << bit_index_2;
    }
    return number;
}