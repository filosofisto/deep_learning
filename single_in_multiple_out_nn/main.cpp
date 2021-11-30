#include <iostream>
#include <iomanip>
#include "SingleInMultiOutNeuralNetwork.h"

using namespace std;
using namespace deeplearning::neuralnetwork;

const double sad = 0.9;

int main() {
    cout << "Single Input Multiple Output Neural Network" << endl;

    // temperature, humidity, air quality
    vector<double> weight{-20, 95, 201};

    vector<double> predictedResult;

    SingleInMultiOutNeuralNetwork neuralNetwork;

    neuralNetwork.singleInMultipleOut(sad, weight, predictedResult);

    cout.precision(10);
    cout << "Predicted Temperature is " <<  predictedResult[0] << endl;
    cout << "Predicted Humidity is " <<  predictedResult[1] << endl;
    cout << "Predicted Air Quality is " <<  predictedResult[2] << endl;

//    cout << "Prediction from the first training example is: "
//         << setprecision(2)
//         << neuralNetwork.multipleInputSingleOutput(training_eg1, weight)
//         << endl;

    return 0;
}