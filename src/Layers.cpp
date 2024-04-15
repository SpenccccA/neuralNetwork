#include "Layers.h"
#include "neuralMath.h"


// Will randomize weights and biases.
// The size of the weights matrix will be determined by:
// The size of the inputs * how many neurons we want
Layer_Dense::Layer_Dense(size_t sample_size, unsigned int num_neurons)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(-0.5f, 0.5f);

    std::vector<float> temp{};

    for (unsigned int i{ }; i < num_neurons; i++)
        weights.push_back(temp);

    // Initialize the weights to be inputs by neurons instead of neurons by inputs so we do not have to do a transpose every time we want to do a matrix multiplication.

    for (unsigned int j{ }; j < weights.size(); j++)
    {
        for (unsigned int k{ }; k < sample_size; k++)
        {

            weights.at(j).push_back(dist(mt));

        }
    }

    for (unsigned int n{ }; n < num_neurons; n++)
    {
        biases.push_back(dist(mt));
    }

}

// Takes an input matrix either from inputs or from another layer's outputs.
void Layer_Dense::forward(const std::vector<std::vector<float>>& input)
{

    outputs = matrixMult(input, weights);

    for (unsigned int i{ }; i < outputs.size(); i++)
    {
        for (unsigned int j{ }; j < outputs.at(0).size(); j++)
        {
            outputs.at(i).at(j) += biases.at(j);
        }
    }

}

// Prints weights
const void Layer_Dense::printWeights()
{
    printMatrix(weights);
}

// Prints Biases
const void Layer_Dense::printBiases()
{
    for (unsigned int i{ }; i < biases.size(); i++)
    {
        std::cout << biases.at(i) << " ";
    }
    std::cout << std::endl;

}

// Prints outputs
const void Layer_Dense::printOutputs()
{
    printMatrix(outputs);
}

// Returns the outputs of the layer.
const std::vector<std::vector<float>> Layer_Dense::getOutputs()
{
    return outputs;
}


// Loads existing model weights and biases
const void Layer_Dense::loadModel()
{

}

// Saves the selected layer's weights and biases
const void Layer_Dense::saveModel()
{

}