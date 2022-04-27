cmake_minimum_required(VERSION 3.20)
project(task4A)

set(CMAKE_CXX_STANDARD 14)

add_executable(task Player.hpp Duke.hpp Assassin.hpp Ambassador.hpp Captain.hpp Contessa.hpp Game.hpp Ambassador.cpp Assassin.cpp Captain.cpp Contessa.cpp Duke.cpp Game.cpp Player.cpp Test.cpp)
