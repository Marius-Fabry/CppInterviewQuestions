#pragma once

#include <stdint.h>
#include <vector>

using BigInteger = std::vector<uint8_t>;

BigInteger IncrementBigInteger(const BigInteger& number_to_increment)
{
    BigInteger result = number_to_increment;
    BigInteger::value_type carry = 1;
    for (auto it = result.rbegin(); it != result.rend() && carry == 1; it++) {
        auto& digit = *it;
        if (digit == 9) {
            digit = 0;
        } else {
            ++digit;
            carry = 0;
        }
    }
    if (carry == 1) {
        result.insert(result.begin(), 1);
    }
    return result;
}
