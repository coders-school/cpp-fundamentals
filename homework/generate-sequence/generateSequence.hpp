#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) 
{
	int value = step;
	std::vector<int> vec;
	for (int i = 0; i < count; i++)
	{


		vec.push_back(value);
		value+=step;

	}
   
    return vec;
}
