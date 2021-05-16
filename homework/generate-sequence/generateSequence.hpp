#pragma once
#include <vector>
#include <algorithm>

std::vector<int> generateSequence(int count, int step)
{
	std::vector<int> newVec((count >= 0) ? count : 0);
	std::generate(newVec.begin(), newVec.end(), [i = 0, step]() mutable { return i += step; });
	return newVec;
}
