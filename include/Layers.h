#pragma once
#include <vector>
#include <random>

// Class which represents a layer of neurons. Contains info on the weights, biases, and outputs of the layer.
class Layer_Dense 
{

private:

	std::vector<std::vector<float>> weights{ };
	std::vector<float> biases{ };
	std::vector<std::vector<float>> outputs{ };

	// Saves the current model's weights and biases
	// Will complete later
	inline const void saveModel();

	// Loads a given model's weights and biases
	// Will complete later
	inline const void loadModel();

public:

	// Prints the selected object's weights matrix
	inline const void printWeights();

	// Prints the selected object's vector of biases
	inline const void printBiases();

	// Prints the selected object's output matrix
	inline const void printOutputs();

	inline void forward(const std::vector<std::vector<float>>& matrixInput);

	// Will randomize weights and biases.
	// The size of the weights matrix will be determined by:
	// The size of the inputs * how many neurons we want
	inline Layer_Dense(size_t sample_size, unsigned int num_neurons);

};