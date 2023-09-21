cmake_minimum_required(VERSION 3.26)
project(project_c__)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_c__ main.cpp
        cmake-build-debug/mayfirst.cpp
        cmake-build-debug/mayfirst.h)
