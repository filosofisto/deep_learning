cmake_minimum_required(VERSION 3.12)
project(simple_nn)

set(CMAKE_CXX_STANDARD 17)

add_executable(simple_nn main.cpp SimpleNeuralNetwork.cpp SimpleNeuralNetwork.h)