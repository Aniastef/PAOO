cmake_minimum_required(VERSION 3.10)
project(Tema1 VERSION 0.1.0 LANGUAGES C CXX)

# trebuie sa mergi in debug sa rulezi

add_executable(Tema1 main.cpp Student.cpp)

include(CTest)
enable_testing()