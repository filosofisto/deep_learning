#include <iostream>
#include <iomanip>
#include "SimpleNeuralNetwork.h"

using namespace std;
using namespace deeplearning::neuralnetwork;

int main() {
    cout << "Simple Neural Network" << endl;

    double temperature[] = {12, 23, 50, -10, 16};
    double weight = -2;

    SimpleNeuralNetwork neuralNetwork;

    cout << "The first predicted value is %d: " << setprecision(2) << neuralNetwork.singleInSingleOut(temperature[0], weight) << endl;
    return 0;
}