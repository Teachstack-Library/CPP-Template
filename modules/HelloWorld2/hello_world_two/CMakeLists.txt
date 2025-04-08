add_executable(
  hello_world_two
  exercise/main.cc
)

add_executable(
  hello_test_two
  tests/hello_test.cc
)
target_link_libraries(
  hello_test_two
  GTest::gtest_main
)

# gtest_discover_tests(hello_test_two DISCOVERY_MODE PRE_TEST)
gtest_add_tests(TARGET hello_test_two SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/tests/hello_test.cc")
