cmake_minimum_required(VERSION 3.15)

project(eigengrad)

set(CMAKE_CXX_STANDARD 11)

# option(EIGENGRAD_BUILD_EXAMPLE_CPP      "TODO"  ON)
# option(EIGENGRAD_BUILD_EXAMPLE_PYTHON   "TODO"  OFF)
# option(EIGENGRAD_BUILD_TEST             "TODO"  OFF)
set(
    INCLUDE_HEADER
    ${CMAKE_SOURCE_DIR}/src/
    ${CMAKE_SOURCE_DIR}/src/thirdparty
)
include_directories(${INCLUDE_HEADER})
add_subdirectory(src)
add_subdirectory(example)
# add_subdirectory(test)

