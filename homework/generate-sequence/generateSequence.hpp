#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> v;
    int value = step;
    for(int i=0;i<count;i++)
    {
    	v.push_back(value);
    	value += step;
    }
    return v;
}
