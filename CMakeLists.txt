cmake_minimum_required(VERSION 3.15)
project(serial_port)

set(CMAKE_CXX_STANDARD 14)

add_executable(serial_port main.cpp serial_port.cpp serial_port.h message.h)