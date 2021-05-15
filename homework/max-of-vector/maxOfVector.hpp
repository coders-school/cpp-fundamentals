#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {

	int result = vec[0];
	for (int i = 0; i < vec.size(); i++)
	{
		if (result < vec[i])
		{
			result = vec[i];
		}
	}
	return result;
}
