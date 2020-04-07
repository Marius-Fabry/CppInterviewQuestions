cmake_minimum_required(VERSION 3.16)

project(EPI_YT)

include(CTest)

add_executable(tests_5.1 tests_5.1.cpp)
add_test(NAME tests_5.1 COMMAND tests_5.1)

add_executable(tests_5.2 tests_5.2.cpp)
add_test(NAME tests_5.2 COMMAND tests_5.2)

add_executable(tests_6.1 tests_6.1.cpp)
add_test(NAME tests_6.1 COMMAND tests_6.1)

add_executable(tests_6.2 tests_6.2.cpp)
add_test(NAME tests_6.2 COMMAND tests_6.2)

add_executable(tests_6.21 tests_6.21.cpp)
add_test(NAME tests_6.21 COMMAND tests_6.21)

add_executable(tests_0 tests_0.cpp)
add_test(NAME tests_0 COMMAND tests_0)

add_executable(tests_7.1 tests_7.1.cpp)
add_test(NAME tests_7.1 COMMAND tests_7.1)