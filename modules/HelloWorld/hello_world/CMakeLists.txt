cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  hello_world
  exercise/main.cc
)
add_executable(hello_world_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(
  hello_test
  GTest::gtest_main
)

gtest_add_tests(
    TARGET step1_mynumber_tests
)
