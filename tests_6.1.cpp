#include "testing.hpp"

#include <stdint.h>
#include <vector>
#include "impl_6.1.hpp"

void test_dutchFlagPartition()
{
    std::vector<int8_t> test_array = { 6, 1, 1, 4, 9, 8, 5, 8, 1, 7, 7, 3, 2 };
    test_array = DutchFlagPartition(test_array, 3);
    for (int8_t array_idx = 0; array_idx < test_array.size(); ++array_idx) {
        if (array_idx < 5) {
            TEST_ASSERT(test_array[array_idx] < 4);
        } else if (array_idx == 5) {
            TEST_ASSERT(test_array[array_idx] == 4);
        } else {
            TEST_ASSERT(test_array[array_idx] > 4);
        }
    }
}

int main()
{
    test_dutchFlagPartition();
    return 0;
}