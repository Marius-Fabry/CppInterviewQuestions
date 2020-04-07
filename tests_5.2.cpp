#include "testing.hpp"

#include "impl_5.2.hpp"

void test_swapBits() { TEST_ASSERT(SwapBits(73, 1, 6) == 11); }

int main() {
  test_swapBits();
  return 0;
}