#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

	int z = 0;
	std::vector<int> vec;
	for (int i = 0; i < count; i++)
	{
		z += step;
		vec.push_back(z);
	}

	return vec;
}