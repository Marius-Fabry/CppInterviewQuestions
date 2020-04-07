#pragma one

#include <string>
#include <algorithm>
#include <stdint.h>

std::string integer_to_string(int64_t value)
{
    std::string result;
    bool is_negative = false;
    if (value < 0) {
        is_negative = true;
        value = -value;
    }
    while (value) {
        const auto digit = value % 10;
        result.push_back(digit + '0');
        value /= 10;
    }
    if (is_negative) {
        result.push_back('-');
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int64_t string_to_integer(const std::string& string)
{
    int64_t result = 0;
    if (string.length() > 0) {
        bool is_negative = false;
        if (string[0] == '-') {
            is_negative = true;
        }
        for (auto str_idx = (is_negative ? 1 : 0); str_idx < string.length(); ++str_idx) {
            const auto digit = string[str_idx] - '0';
            if (digit < 0 || digit > 9) {
                return 0;
            }
            result = result * 10 + digit;
        }
        if (is_negative) {
            result = -result;
        }
    }
    return result;
}