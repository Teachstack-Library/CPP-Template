cmake_minimum_required(VERSION 3.14)
project(TemplateCourse)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/6910c9d9165801d8827d628cb72eb7ea9dd538c5.zip
  DOWNLOAD_EXTRACT_TIMESTAMP true
)
# # For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
enable_testing()



# include(${CMAKE_CURRENT_SOURCE_DIR}/modules/HelloWorld/hello_world/CMakeLists.txt)
add_subdirectory(modules/HelloWorld/hello_world)

