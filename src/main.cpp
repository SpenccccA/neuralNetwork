#include <iostream>
#include <vector>


// May optimize if possible at a later date ~
// Will also add to include math file later when all math functions are finished
float dotp(const std::vector<float>& vec1, const std::vector<float>& vec2) {

	if (vec1.size() != vec2.size()) 
	{ 
		std::cout << "Cannot dot product different size vectors" << std::endl; 
		throw std::runtime_error("Error"); 
	}

	float result{0};

	for (unsigned int i{0}; i < vec1.size(); i++)
	{

		result += (vec1.at(i) * vec2.at(i));

	}

	return result;
}


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





	std::vector<float> outputs{ };

	// For each output, dot weights with inputs,
	// then add bias and then repeat for all outputs


	for (unsigned int i{0}; i < biases.size(); i++)
	{
		outputs.push_back(dotp(weights.at(i), inputs.at(i)));


		outputs.at(i) += biases.at(i);

	}


	std::cout << outputs.at(0) << std::endl;
	std::cout << outputs.at(1) << std::endl;
	std::cout << outputs.at(2) << std::endl;

	return 0;
}