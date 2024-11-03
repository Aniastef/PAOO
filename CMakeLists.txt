cmake_minimum_required(VERSION 3.10)
project(PAOO VERSION 0.1.0 LANGUAGES C CXX)

add_executable(PAOO main.cpp Student.cpp)

include(CTest)
enable_testing()