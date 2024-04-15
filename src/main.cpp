#include <iostream>
#include <vector>
#include "Layers.cpp"
#include "neuralMath.h"
#include "ActivationFunction.cpp"

int main() {

	/*
	
	// Test data, will either be input data into input layer, or output data from other neurons later
	// X is the input data into the network.
	std::vector<std::vector<float>> X{
		{1.0f, 2.0f, 3.0f, 2.5f },
		{ 2.0f, 5.0f, -1.0f, 2.0f },
		{ -1.5f, 2.7f, 3.3f, -0.8f }
	};


	Layer_Dense layer1(4, 5);

	Layer_Dense layer2(5, 2);


	layer1.forward(X);
	//layer1.printOutputs();

	layer2.forward(layer1.getOutputs());
	layer2.printOutputs();

	*/

	std::vector<std::vector<float>> inputs { {0.0f, 2.0f, -1.0f, 3.3f, -2.7f, 1.1f, 2.2f, -100.0f} };

	Activation_ReLU activation1{ };

	activation1.forward(inputs);

	activation1.printOutputs();

	return 0;
}