cmake_minimum_required(VERSION 3.12)
project(single_in_multiple_out_nn)

set(CMAKE_CXX_STANDARD 17)

add_executable(single_in_multiple_out_nn main.cpp SingleInMultiOutNeuralNetwork.cpp SingleInMultiOutNeuralNetwork.h)