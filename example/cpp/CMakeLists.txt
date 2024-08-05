add_executable(demo demo.cc)
target_link_libraries(demo eigengrad)
target_include_directories(demo ${CMAKE_SOURCE_DIR}/src)