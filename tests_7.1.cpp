#include "testing.hpp"
#include "impl_7.1.hpp"

class Problem7_1 {
public:
    static void run_tests()
    {
        test_positive_number_int_to_string();
        test_negative_number_int_to_string();
        test_positive_number_string_to_int();
        test_negative_number_string_to_int();
    }

    static void test_positive_number_int_to_string()
    {
        TEST_ASSERT_EQUAL(integer_to_string(123), "123");
    }

    static void test_negative_number_int_to_string()
    {
        TEST_ASSERT_EQUAL(integer_to_string(-11), "-11");
    }

    static void test_positive_number_string_to_int()
    {
        TEST_ASSERT_EQUAL(string_to_integer("123"), 123);
    }

    static void test_negative_number_string_to_int()
    {
        TEST_ASSERT_EQUAL(string_to_integer("-11"), -11);
    }
};

int main()
{
    Problem7_1::run_tests();
    return 0;
}
