message(STATUS "Found Shared lib")
add_library(SharedLib SHARED ./shared.cpp)
target_link_directories(SharedLib PRIVATE .)
