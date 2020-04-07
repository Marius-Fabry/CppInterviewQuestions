#include "testing.hpp"

#include "impl_5.1.hpp"

void test_evenParityComputation() {
  TEST_ASSERT(Parity(11) == 1);
  TEST_ASSERT(Parity(136) == 0);
}

int main() {
  test_evenParityComputation();
  return 0;
}