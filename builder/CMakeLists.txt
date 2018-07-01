cmake_minimum_required(VERSION 3.9)
project(builder)

set(CMAKE_CXX_STANDARD 11)

add_executable(builder main.cpp Converter.h Graph.h Converter.cpp CaffeConverter.h CaffeConverter.cpp Graph.cpp TensorflowConverter.h TensorflowConverter.cpp)