//
// Created by eduardo on 29.11.21.
//

#include "SingleInMultiOutNeuralNetwork.h"

using namespace std;

namespace deeplearning::neuralnetwork {

    SingleInMultiOutNeuralNetwork::SingleInMultiOutNeuralNetwork() {

    }

    SingleInMultiOutNeuralNetwork::~SingleInMultiOutNeuralNetwork() {

    }

    double SingleInMultiOutNeuralNetwork::weightedSum(const std::vector<double> &input,
                                                      const std::vector<double> &weight) const {
        auto itInput = begin(input);
        auto itWeight = begin(weight);

        double output = 0;

        for (; itInput != end(input); ++itInput, ++itWeight) {
            output += *itInput * (*itWeight);
        }

        return output;
    }

    double SingleInMultiOutNeuralNetwork::multipleInputSingleOutput(const vector<double> &input,
                                                                    const vector<double> &weight) const {
        return weightedSum(input, weight);
    }

    void SingleInMultiOutNeuralNetwork::elementWiseMultiply(double inputScalar, const vector<double> &weightVector,
                                                            vector<double> &outputVector) const {
        for (auto weight: weightVector) {
            outputVector.push_back(inputScalar * weight);
        }
    }

    void SingleInMultiOutNeuralNetwork::singleInMultipleOut(double inputScalar, const vector<double> &weightVector,
                                                            vector<double> &outputVector) const {
        elementWiseMultiply(inputScalar, weightVector, outputVector);
    }
}