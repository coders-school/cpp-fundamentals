#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step)
{
	// TODO: Implement me :)
	if (count < 1) {
		return {};
	}
	std::vector<int> result;
	result.reserve(count);
	for (int i = 0, value = step; i < count; i++, value += step)
	{
		result.push_back(value);
	}
	return result;
}
