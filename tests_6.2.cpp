#include "testing.hpp"

#include "impl_6.2.hpp"

void test_IncrementBigInteger1()
{
    BigInteger mynumber { 1, 2, 9 };
    mynumber = IncrementBigInteger(mynumber);
    TEST_ASSERT((mynumber == BigInteger { 1, 3, 0 }));
}

void test_IncrementBigInteger2()
{
    BigInteger mynumber { 9, 9, 9 };
    mynumber = IncrementBigInteger(mynumber);
    TEST_ASSERT((mynumber == BigInteger { 1, 0, 0, 0 }));
}

int main()
{
    test_IncrementBigInteger1();
    test_IncrementBigInteger2();
    return 0;
}