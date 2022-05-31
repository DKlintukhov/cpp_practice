cmake_minimum_required(VERSION 3.23)
set(PROJECT_NAME allocator)
# set(TESTS tests)
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

file(GLOB HEADERS include/*.h)
file(GLOB SRC src/*.cpp)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS} ${SRC})
# add_executable(${TESTS} test_config.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)
set_target_properties(${TESTS} PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIRS}
)

target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIB_INIT} ${Boost_LIBRARIES})
# target_link_libraries(${TESTS} ${CMAKE_THREAD_LIB_INIT} ${Boost_LIBRARIES})

if(WIN32)
  target_link_libraries(${PROJECT_NAME} wsock32 ws2_32)
endif()

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAGOR "${PROJECT_VERSION_MAGOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT denis.klintukhov@gmail.com)
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
include(CPack)
# enable_testing()
# add_test(${TESTS} test_config)

