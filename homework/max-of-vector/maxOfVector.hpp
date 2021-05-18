#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)

    	int max {std::numeric_limits<int>::min()};
	int num {};

	for(const auto& num : vec)
		if(max < num)
			max = num;
	
	return max; 
}
