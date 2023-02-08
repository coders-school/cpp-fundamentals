#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
	int x = 0;
	for (int j = 0; j < numbers.size(); j++) {
		if (numbers[j]%2==0)
		{
			x+=numbers[j];
		}
		else
		{
			x +=0;
		}
	}
return x;
}
