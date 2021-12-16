#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
	int accumulated{0};
	for (short i{0}; i < numbers.size(); ++i) {
		if (!(numbers[i] % 2))
			accumulated = accumulated + numbers[i];
	}
	return accumulated;
}
