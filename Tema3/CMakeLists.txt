cmake_minimum_required(VERSION 3.10)
project(Tema3 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Tema3 main.cpp Student.cpp)

include(CTest)
enable_testing()