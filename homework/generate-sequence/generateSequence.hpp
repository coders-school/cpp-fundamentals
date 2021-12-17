#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
	std::vector<int> vec;
	int number{0};
	for (short i{0}; i < count; ++i){
		number += step;
		vec.push_back(number);
	}
	return vec;
}
