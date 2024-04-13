#include "Layers.h"

Layer_Dense::Layer_Dense(size_t sample_size, unsigned int num_neurons)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(-4.0f, 4.5f);

    std::vector<float> temp{};

    for (unsigned int i{ }; i < num_neurons; i++)
        weights.push_back(temp);

    for (unsigned int j{ }; j < weights.size(); j++)
    {
        for (unsigned int k{ }; k < sample_size; k++)
        {

            weights.at(j).push_back(dist(mt));

        }
    }

}


const void Layer_Dense::loadModel()
{

}


const void Layer_Dense::saveModel()
{

}