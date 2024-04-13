#pragma once
#include<iostream>


// May optimize if possible at a later date ~
// Will also add to include math file later when all math functions are finished
static float dotp(const std::vector<float> vec1, const std::vector<float> vec2) {

	if (vec1.size() != vec2.size())
	{
		std::cout << "Cannot dot product different size vectors" << std::endl;
	}

	float result{ 0 };

	for (unsigned int i{ 0 }; i < vec1.size(); i++)
	{

		result += (vec1.at(i) * vec2.at(i));

	}

	return result;
}

//Switch the columns and rows of a 2d matrix
static std::vector<std::vector<float>> transpose(const std::vector<std::vector<float>>& M)
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

// Multiplies 2 vectors together. Returns a matrix with the following dimensions: same # of rows as M1 and same # of cols as M2.
// This operation can only be performed if M1's # of cols is equal to M2's number of rows.
static std::vector<std::vector<float>> matrixMult(const std::vector<std::vector<float>>& M1, const std::vector<std::vector<float>>& M2)
{
	if (M1.at(0).size() != M2.at(0).size())
	{
		std::cout << "Coult not multiply these vectors because of inconsistent dimensions" << std::endl;
		throw std::runtime_error{ "Error" };
	}

	std::vector<std::vector<float>> resultMat{ };

	for (unsigned int i{ }; i < M1.size(); i++)
	{
		std::vector<float> temp{ };

		for (unsigned int j{ }; j < M2.size(); j++)
		{
			temp.push_back(dotp(M1.at(i), M2.at(j)));
		}

		resultMat.push_back(temp);
	}

	return resultMat;
}






static void printMatrix( const std::vector<std::vector<float>>& M )
{
	for (unsigned int i{ }; i < M.size(); i++)
	{
		for (unsigned int j{ }; j < M.at(0).size(); j++)
		{

			std::cout << M.at(i).at(j) << " ";

		}

		std::cout << std::endl;
	}

}