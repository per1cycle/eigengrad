set(
    eigengrad_src
    ${CMAKE_SOURCE_DIR}/src/Mat.cc
)

add_library( 
    eigengrad
    ${eigengrad_src}
)
