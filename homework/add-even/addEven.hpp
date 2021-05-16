#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    int sum = 0;
    for(const auto& element : numbers)
    {
	if(!(element % 2))
	{
		sum += element;
	}
    }
    return sum;
}
