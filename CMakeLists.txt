cmake_minimum_required(VERSION 3.15)
project(Backend)

set(CMAKE_CXX_STANDARD 14)

add_executable(Backend
        main.cpp
        character.cpp
        characterList.cpp simulation.cpp simulation.h)
