cmake_minimum_required(VERSION 3.2)
project(IleriCveSistemProgramlama)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES C++/main.cpp)
add_executable(IleriCveSistemProgramlama ${SOURCE_FILES} C/source_file.h C/source_file.c)