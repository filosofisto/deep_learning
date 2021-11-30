//
// Created by eduardo on 30.11.21.
//

#ifndef MULTIPLE_IN_SINGLE_OUT_NN_MULTIPLEINSINGLEOUTNEURALNETWORK_H
#define MULTIPLE_IN_SINGLE_OUT_NN_MULTIPLEINSINGLEOUTNEURALNETWORK_H

#include <vector>

namespace deeplearn::neuralnetwork
{

    class MultipleInSingleOutNeuralNetwork {
    public:
        MultipleInSingleOutNeuralNetwork();

        ~MultipleInSingleOutNeuralNetwork();

        double multipleInputSingleOutput(const std::vector<double> &input,
                                                             const std::vector<double> &weight) const;
    private:
        double weightedSum(const std::vector<double>& input, const std::vector<double>& weight) const;
    };
}

#endif //MULTIPLE_IN_SINGLE_OUT_NN_MULTIPLEINSINGLEOUTNEURALNETWORK_H
