cmake_minimum_required(VERSION 3.25.0)
project(cpp_practice VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(cpp_practice main.cpp)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    # using Clang
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(cpp_practice PRIVATE -Werror -Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
    # using Intel C++
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(cpp_practice PRIVATE /WX)
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED 20)

include(CPack)
