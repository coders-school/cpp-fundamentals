#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
	int max = std::numeric_limits<int>::min();
    for(int element : vec)
    {
    	if(max<element)
    		max = element;
    }
    return max;
}
