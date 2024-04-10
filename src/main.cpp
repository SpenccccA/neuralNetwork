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

//Switch the columns and rows of a 2d matrix
std::vector<std::vector<float>> transpose(const std::vector<std::vector<float>>& M)
{
	if (M.size() == 0)
	{
		std::cout << "Invalid matrix size, cannot transpose" << std::endl;
		throw std::runtime_error{ "Transpose Error" };
	}


	std::vector<std::vector<float>> result{ };

	for (unsigned int i{ }; i < M.at(0).size(); i++)
	{
		std::vector<float> tempVector{ };

		for (unsigned int j{ }; j < M.size(); j++)
		{
			tempVector.push_back(M.at(j).at(i));
		}
		result.push_back(tempVector);
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


	return 0;
}