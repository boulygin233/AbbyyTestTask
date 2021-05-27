cmake_minimum_required(VERSION 3.16)
project(AbbyyTestTask)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(AbbyyTestTask
main.cpp Triangle.cpp Triangle.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h abstract_shape.h)
