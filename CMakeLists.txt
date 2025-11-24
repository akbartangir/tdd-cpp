cmake_minimum_required(VERSION 3.14)
project(tdd_cpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mylib src/sample.cpp)
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(tests tests/test_sample.cpp)
target_link_libraries(tests PRIVATE mylib gtest_main)
add_test(NAME unit_tests COMMAND tests)
