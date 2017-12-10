cmake_minimum_required(VERSION 3.9)
project(codeadvent2017)

set(CMAKE_CXX_STANDARD 17)

add_executable(codeadvent2017 src/main.cpp src/Navigation.cpp src/Navigation.h src/InverseCaptchaSolver.cpp src/InverseCaptchaSolver.h src/CorruptionChecksumSolver.cpp src/CorruptionChecksumSolver.h)