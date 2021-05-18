#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
	std::vector<int> vec;
	for(int i = 0; i < count; i++){
		vec.push_back((i + 1) * step);
	}

    	return vec;
}
