cmake_minimum_required(VERSION 3.9)
project(Cache)

set(CMAKE_CXX_STANDARD 14)
add_executable(Cache main.cpp
        Cache.cpp Cache.h
        Block.cpp Block.h
        Set.cpp Set.h
        Address.cpp Address.h
        Memory.cpp Memory.h)
target_compile_options(Cache PRIVATE -Wall -Werror)
