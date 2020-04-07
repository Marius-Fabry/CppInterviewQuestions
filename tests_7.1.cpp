#include "testing.hpp"
#include "impl_7.1.hpp"

// ---- Declarations ----

int main();

class Problem7_1 {
public:
    static void run_tests();
    static void test_positive_number_int_to_string();
    static void test_negative_number_int_to_string();
    static void test_positive_number_string_to_int();
    static void test_negative_number_string_to_int();
};

// ---- Definitions ----

int main()
{
    Problem7_1::run_tests();
    return 0;
}

void Problem7_1::run_tests()
{
    test_positive_number_int_to_string();
    test_negative_number_int_to_string();
    test_positive_number_string_to_int();
    test_negative_number_string_to_int();
}

void Problem7_1::test_positive_number_int_to_string()
{
    TEST_ASSERT_EQUAL(integer_to_string(123), "123");
}

void Problem7_1::test_negative_number_int_to_string()
{
    TEST_ASSERT_EQUAL(integer_to_string(-11), "-11");
}

void Problem7_1::test_positive_number_string_to_int()
{
    TEST_ASSERT_EQUAL(string_to_integer("123"), 123);
}

void Problem7_1::test_negative_number_string_to_int()
{
    TEST_ASSERT_EQUAL(string_to_integer("-11"), -11);
}
