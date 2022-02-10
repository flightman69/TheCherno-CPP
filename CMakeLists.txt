cmake_minimum_required(VERSION 3.21)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp
        dev/HelloWorld/src/Log.cpp
        dev/HelloWorld/src/Main.cpp
        dev/HelloWorld/src/Math.cpp)
