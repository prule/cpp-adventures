cmake_minimum_required(VERSION 3.23)
project(sample3)

set(CMAKE_CXX_STANDARD 23)

add_executable(sample3 main.cpp Sample.cpp Sample.h Controller.cpp Controller.h)
