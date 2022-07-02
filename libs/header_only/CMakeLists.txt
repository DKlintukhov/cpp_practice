message(STATUS "Found Header-only lib")
add_library(HeaderOnlyLib INTERFACE)
target_link_directories(HeaderOnlyLib INTERFACE ./)
