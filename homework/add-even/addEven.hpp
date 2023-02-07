#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {

	int x = 0;

	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i]%2==0)
		{
			x+=numbers[i];
		}
		else
		{
			x +=0;
		}
	}
	return x;
}
