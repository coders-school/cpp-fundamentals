#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
	if (count > 0){
	std::vector<int> x;
	x.push_back(step);
	
	for (int i = 0; i < count - 1; i++) {
	x.push_back(x[i] + step);
	}
	
	return x;
	}
	else
		return {};
}
