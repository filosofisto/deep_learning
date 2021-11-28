//
// Created by eduardo on 29.11.21.
//

#ifndef SIMPLE_NN_SIMPLENEURALNETWORK_H
#define SIMPLE_NN_SIMPLENEURALNETWORK_H

namespace deeplearning::neuralnetwork {

    class SimpleNeuralNetwork {
    public:
        SimpleNeuralNetwork();

        ~SimpleNeuralNetwork();

        double singleInSingleOut(double input, double weight) const;
    };
}

#endif //SIMPLE_NN_SIMPLENEURALNETWORK_H
