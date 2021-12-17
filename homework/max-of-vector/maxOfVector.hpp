#pragma once
#include <vector>
#include <limits>

long maxOfVector(const std::vector<long>& numbers) {
	
	long max{LONG_MIN};
	for (auto n : numbers)
		if (n > max)	
			max = n;
	return max;
}
