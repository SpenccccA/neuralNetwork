#pragma once
#include <vector>
#include <random>

class Layer_Dense {

private:


	std::vector<std::vector<float>> weights{ };
	std::vector<float> biases{ };


	// Saves the current model's weights and biases
	inline const void saveModel();

	// Loads a given model's weights and biases
	inline const void loadModel();

public:

	// Will randomize weights and biases.
	// The size of the weights matrix will be determined by:
	// The size of the inputs * how many neurons we want
	inline Layer_Dense(size_t sample_size, unsigned int num_neurons);
	


};