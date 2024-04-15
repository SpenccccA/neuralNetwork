#pragma once
#include <vector>

//Rectified linear unit activation function.

class Activation_ReLU
{

private:

	std::vector<std::vector<float>> outputs{ };

public:

	// Prints the selected object's outputs matrix
	inline const void printOutputs();

	inline Activation_ReLU();
	
	inline void forward(const std::vector<std::vector<float>>& inputs);




};