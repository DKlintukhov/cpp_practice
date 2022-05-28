cmake_minimum_required(VERSION 3.23)
set(PROJECT_NAME ip_filter)
set(TESTS tests)
project(${PROJECT_NAME} VERSION "0.0.1")

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

find_package(Boost 1.78.0 REQUIRED)
find_package(Threads REQUIRED)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CONFIGURATION_TYPES "Release" "Debug")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-O0")

add_executable(${PROJECT_NAME} main.cpp ./src/ip_filter.cpp)
add_executable(${TESTS} ./src/tests.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)
set_target_properties(${TESTS} PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIRS}
)

enable_testing()
add_test(${TESTS} my_test)
