#pragma once
#include <vector>
#include <climits>

int maxOfVector(const std::vector<int>& numbers) {
	
	int max{INT_MIN};
	for (auto n : numbers)
		if (n > max)	
			max = n;
	return max;
}
