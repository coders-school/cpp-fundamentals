#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int total{0};

	for (auto el : numbers)
	{
		if (el % 2 == 0)
			total += el;
	}
	return total;
}
