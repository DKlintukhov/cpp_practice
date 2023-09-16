cmake_minimum_required(VERSION 3.27.5)
project(cpp_practice VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(cpp_practice main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
