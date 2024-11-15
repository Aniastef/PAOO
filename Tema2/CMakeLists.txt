cmake_minimum_required(VERSION 3.10)
project(Tema2 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Tema2 main.cpp Student.cpp)

include(CTest)
enable_testing()