//
// Created by eduardo on 30.11.21.
//

#include "MultipleInSingleOutNeuralNetwork.h"

using namespace std;

namespace deeplearn::neuralnetwork {

    MultipleInSingleOutNeuralNetwork::MultipleInSingleOutNeuralNetwork() {

    }

    MultipleInSingleOutNeuralNetwork::~MultipleInSingleOutNeuralNetwork() {

    }

    double MultipleInSingleOutNeuralNetwork::weightedSum(const std::vector<double> &input,
                                                         const std::vector<double> &weight) const {
        double output = 0;

        auto itInput = begin(input);
        auto itWeight = begin(weight);

        for (; itInput != end(input) && itWeight != end(weight); ++itInput, ++itWeight) {
            output += *itInput * (*itWeight);
        }

        return output;
    }

    double MultipleInSingleOutNeuralNetwork::multipleInputSingleOutput(const std::vector<double> &input,
                                                                       const std::vector<double> &weight) const {
        return weightedSum(input, weight);
    }
}
