#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
		
    int max = vec.front();
    for(auto const &el : vec) { 
	max = (max >= el) ? max : el;
    }

    return max;
}
