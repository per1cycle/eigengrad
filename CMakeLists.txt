cmake_minimum_required(VERSION 3.15)

project(eigengrad)

set(CMAKE_CXX_STANDARD 11)

include_directories("${CMAKE_SOURCE_DIR}/src/thirdparty")
add_subdirectory(src)
# add_subdirectory(test)

