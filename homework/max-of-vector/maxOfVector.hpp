#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    for(const auto& x : vec) {
	if (x > max) {
	 max = x;
	}
   }
	return max;
}
