//
// Created by eduardo on 29.11.21.
//

#include "SimpleNeuralNetwork.h"

namespace deeplearning::neuralnetwork {

    SimpleNeuralNetwork::SimpleNeuralNetwork() {

    }

    SimpleNeuralNetwork::~SimpleNeuralNetwork() {

    }

    double SimpleNeuralNetwork::singleInSingleOut(double input, double weight) const {
        return input * weight;
    }
}
