cmake_minimum_required(VERSION 3.20)
project(task4A)

set(CMAKE_CXX_STANDARD 14)

add_executable(task Test.cpp main.cpp sources/Player.cpp sources/Game.cpp)
