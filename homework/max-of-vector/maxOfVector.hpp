#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max{0};
	for (auto n : vec)
		if (n > max)	
			max = n;
	return max;
}
