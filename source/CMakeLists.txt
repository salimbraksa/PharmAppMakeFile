# Sets the compilation flags

set(CMAKE_C_FLAGS "-Wall -std=c99 -g")

# Search for files

file( GLOB SRCS *.c *.h )

# Add Exec
add_executable( PharmApp ${SRCS} )