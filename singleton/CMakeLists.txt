cmake_minimum_required(VERSION 3.9)
project(singleton)

set(CMAKE_CXX_STANDARD 11)

add_executable(singleton main.cpp ComputeSingleton.h ComputeSingleton.cpp CPUCompute.h GPUCompute.h CPUCompute.cpp GPUCompute.cpp)