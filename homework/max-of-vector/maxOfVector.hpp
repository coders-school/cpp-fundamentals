#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty())
		return 0;
	return *std::max_element(vec.begin(), vec.end());
}
