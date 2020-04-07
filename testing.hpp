#pragma once

#include <cstdlib>
#include <iostream>

/** Macro that translates this to a function call with the current line and
 * function name.
 *
 * @note Use C++20's std::source_location for portability as soon as it is
 * available.
 * */
#define TEST_ASSERT(condition)                                              \
    if (!(condition)) {                                                     \
        std::cerr << "!!! TEST_ASSERT failed in " << __func__ << "() line " \
                  << __LINE__ << " !!!" << std::endl;                       \
        exit(1);                                                            \
    }

#define TEST_ASSERT_EQUAL(condition1, condition2)                                 \
    if ((condition1) != (condition2)) {                                           \
        std::cerr << "!!! TEST_ASSERT_EQUAL failed in " << __func__ << "() line " \
                  << __LINE__ << " !!!" << std::endl                              \
                  << (condition1) << " != " << (condition2) << std::endl;         \
        exit(1);                                                                  \
    }
