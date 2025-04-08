add_executable(
  hello_world
  exercise/main.cc
)

add_executable(
  hello_test
  tests/hello_test.cc
)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

# gtest_discover_tests(hello_test)
gtest_add_tests(TARGET hello_test SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/tests/hello_test.cc")
