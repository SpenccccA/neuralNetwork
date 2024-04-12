#include <iostream>
#include <vector>
#include <matrixMath.h>


int main() {
	// Test data, will either be input data into input layer, or output data from other neurons later
	std::vector<std::vector<float>> inputs{
		{1.0f, 2.0f, 3.0f, 2.5f },
		{ 2.0f, 5.0f, -1.0f, 2.0f },
		{ -1.5f, 2.7f, 3.3f, -0.8f }
	};

	// Will be randomized later, only chosen these values for testing purposes
	std::vector<std::vector<float>> weights
	{
		{0.2f, 0.8f, -0.5f, 1.0f },
		{ 0.5f, -0.91f, 0.26f, -0.5f },
		{ -0.26f, -0.27f, 0.17f, 0.87f }
	};

	// Will be randomizing these later, chosen for testing purposes.
	std::vector<float> biases
	{
		2.0f, 3.0f, 0.5f
	};

	// Unusued at the moment, will be used in the future.
	std::vector<float> outputs{ };

	// Code below can be deleted at any time. Code for testing if matricies are correct.
	/*
	std::vector<std::vector<float>> temp { matrixMult(inputs, weights) };
	for (unsigned int i{ }; i < temp.size(); i++)
	{
		for (unsigned int j{ }; j < temp.at(0).size(); j++)
		{

			std::cout << temp.at(i).at(j) + biases.at(j) << " ";

		}

		std::cout << std::endl;
	}
	*/



	return 0;
}