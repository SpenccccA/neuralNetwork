#include <iostream>
#include <vector>
#include "Layers.cpp"
#include "matrixMath.h"

int main() {
	// Test data, will either be input data into input layer, or output data from other neurons later
	// X is the input data into the network.
	std::vector<std::vector<float>> X{
		{1.0f, 2.0f, 3.0f, 2.5f },
		{ 2.0f, 5.0f, -1.0f, 2.0f },
		{ -1.5f, 2.7f, 3.3f, -0.8f }
	};


	return 0;
}