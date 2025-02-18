
cmake_minimum_required (VERSION 3.1)

project ("RPi"
        VERSION 1.0.0
        LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RPI_PROJECT_NAME RPi)

add_executable(${RPI_PROJECT_NAME}
  ${PROJECT_SOURCE_DIR}/src/main.cpp
)

target_include_directories(${RPI_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)