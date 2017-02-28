cmake_minimum_required(VERSION 3.6)
project(studentDev)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.cpp Student.hpp)
add_executable(studentDev ${SOURCE_FILES})