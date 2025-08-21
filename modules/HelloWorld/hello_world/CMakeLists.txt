cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
  hello_world
  exercise/main.cpp
)
add_executable(hello_world_tests "${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp")
target_link_libraries(
  hello_world_tests
  GTest::gtest_main
)

add_dependencies(hello_world_tests hello_world)

gtest_add_tests(
    TARGET hello_world_tests
)
