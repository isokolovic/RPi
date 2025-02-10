cmake_minimum_required(VERSION 3.10)

project(RPi)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
)

add_executable(RPi ${SOURCES})

# Add include directories
target_include_directories(RPi PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)