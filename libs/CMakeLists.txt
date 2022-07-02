cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CONFIGURATION_TYPES "Release" "Debug")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(PROJECT_NAME libs)

project(${PROJECT_NAME})
add_subdirectory(./header_only)
add_subdirectory(./shared)

file(GLOB SRC ./src/*.cpp)
add_executable(${PROJECT_NAME} main.cpp ${SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE HeaderOnlyLib SharedLib)
target_include_directories(${PROJECT_NAME} PRIVATE ./header_only ./shared)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD      # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different         # which executes "cmake - E copy_if_different..."
            ${CMAKE_BINARY_DIR}/shared/libSharedLib.dll   # <--this is in-file
            ${CMAKE_BINARY_DIR}                           # <--this is out-file path
)
