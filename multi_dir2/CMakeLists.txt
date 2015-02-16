cmake_minimum_required (VERSION 3.0)
project(main)

# The version number.
set (Main_VERSION_MAJOR 1)
set (Main_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/conf/MainConfig.h.in"
	"${PROJECT_BINARY_DIR}/conf/MainConfig.h"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}/conf")

add_subdirectory(hello)

aux_source_directory(. dir_srcs)
add_executable(main ${dir_srcs})
target_link_libraries(main hello)
