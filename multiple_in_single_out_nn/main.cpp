#include <iostream>
#include <iomanip>
#include <vector>
#include "MultipleInSingleOutNeuralNetwork.h"

using namespace std;
using namespace deeplearn::neuralnetwork;

int main() {
    cout << "Multiple Input Single Output Neural Network" << endl;

    double temperature[] = {12, 23, 50, -10, 16};
    double humidity[]    = {60, 67, 50, 65, 63};
    double airQuality[]  = {60, 47, 167, 187, 94};

    vector<double> weight{-2, 2, 1};

    MultipleInSingleOutNeuralNetwork neuralNetwork;

    vector<double> training_eg1 = {temperature[0], humidity[0], airQuality[0]};

    double firstPrediction = neuralNetwork.multipleInputSingleOutput(training_eg1, weight);

    cout.precision(10);
    cout << "Prediction from first training example is " << firstPrediction << endl;


    return EXIT_SUCCESS;
}