cmake_minimum_required(VERSION 3.27.5)
project(cpp_practice VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(cpp_practice main.cpp)

target_compile_options(cpp_practice PRIVATE -Werror -Wall -Wextra -Wpedantic)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED 20)

include(CPack)
