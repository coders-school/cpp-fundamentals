#pragma once
#include <vector>
#include <climits>

long maxOfVector(const std::vector<long>& vec) {
	
	long max{LONG_MIN};
	for (auto n : vec)
		if (n > max)	
			max = n;
	return max;
}
