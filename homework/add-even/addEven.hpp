#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
	std::vector<int> odd;
	int result = 0;

	for (int i = 0; i < numbers.size(); i++) {
		if (numbers.at(i) % 2 == 0) {
			odd.push_back(numbers.at(i));
		}
	}
	for (int i = 0; i < odd.size(); i++) {
		result += odd.at(i);
	}

	return result;
}
