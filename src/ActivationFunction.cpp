#include "ActivationFunction.h"
#include <iostream>
#include "neuralMath.h"

Activation_ReLU::Activation_ReLU()
{


}



// Forward pass of the outputs from a given layer, will put them through an activation function which looks like so:
// 
//	y = { x, x > 0
//		{ 0, x <= 0
// And stores the changed matrix inside the object.
void Activation_ReLU::forward(const std::vector<std::vector<float>>& inputs) // The inputs into this are the outputs of a layer.
{
	std::vector<float> empty{ };

	outputs.clear();
	for (unsigned int k{ }; k < inputs.size(); k++)
	{
		outputs.push_back(empty);
	}


	for (unsigned int i{ }; i < inputs.size(); i++)
	{
		for (unsigned int j{ }; j < inputs.at(0).size(); j++)
		{

			if (inputs.at(i).at(j) > 0)
			{
				outputs.at(i).push_back(inputs.at(i).at(j));
			}
			else
			{
				outputs.at(i).push_back(0.0f);
			}

		}
	}
}

// Prints outputs
const void Activation_ReLU::printOutputs()
{
	printMatrix(outputs);
}