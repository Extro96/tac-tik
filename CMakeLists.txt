cmake_minimum_required(VERSION 3.8)
project(Tactik)
# The version number.
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/carte.cpp
    src/joueur.cpp
    src/pion.cpp
    src/pioche.cpp
    src/plateau.cpp
    src/case.cpp
    src/jeu.cpp
    src/main.cpp

)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/Config.h.in"
  "${PROJECT_BINARY_DIR}/Config.h"
  )

# Add an executable with the above sources
add_executable(Tactik ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(Tactik
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/inc
)

