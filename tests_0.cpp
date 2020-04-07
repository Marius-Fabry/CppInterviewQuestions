#include <cstdlib>
#include <iostream>

constexpr int SUCCESS = 0;
constexpr int FAILURE = 1;

#define ASSERT(condition)                                             \
    if (!(condition)) {                                               \
        std::cerr << __func__ << " / line " << __LINE__ << std::endl; \
        exit(FAILURE);                                                \
    }

int main();
void test_1();
void test_2();

int main()
{
    test_1();
    test_2();
    return SUCCESS;
}

void test_1() { ASSERT(true); }

void test_2()
{
    ASSERT(true);
    // Failing removed so that the continuous integration
    // tests don't fail.
    // ASSERT(false);
}