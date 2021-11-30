//
// Created by eduardo on 29.11.21.
//

#ifndef SINGLE_IN_MULTIPLE_OUT_NN_SINGLEINMULTIOUTNEURALNETWORK_H
#define SINGLE_IN_MULTIPLE_OUT_NN_SINGLEINMULTIOUTNEURALNETWORK_H

#include <vector>

namespace deeplearning::neuralnetwork {
    class SingleInMultiOutNeuralNetwork {
    public:
        SingleInMultiOutNeuralNetwork();

        ~SingleInMultiOutNeuralNetwork();

        double weightedSum(const std::vector<double>& input, const std::vector<double>& weight) const;

        double multipleInputSingleOutput(const std::vector<double>& input, const std::vector<double>& weight) const;

        void elementWiseMultiply(double inputScalar, const std::vector<double>& weightVector, std::vector<double>& outputVector) const;

        void singleInMultipleOut(double inputScalar, const std::vector<double>& weightVector, std::vector<double>& outputVector) const;
    };
}

#endif //SINGLE_IN_MULTIPLE_OUT_NN_SINGLEINMULTIOUTNEURALNETWORK_H
