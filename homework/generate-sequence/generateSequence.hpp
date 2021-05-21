#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    std::vector<int> ret;

    for(int i = 1; i<=count; i++)
    {
    ret.push_back(step * i);
    }

    return ret;
}
