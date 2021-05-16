#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
	if (count <= 0)
		return vec;

	vec.reserve(count);
	int stepValue{ step };
	for (int i = 0; i < count; ++i, stepValue += step)
	{
		vec.emplace_back(stepValue);
	}
	return vec;
}
