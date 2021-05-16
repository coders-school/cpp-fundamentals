#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
	int max = std::numeric_limits<int>::min();
	
	if(vec.size() == 1) return vec[0];
	else
	for(auto el : vec) if(el > max) max = el;
    return max;
}
