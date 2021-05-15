#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result {};
    
    if(count <= 0)
    {
        return result;
    }
    
    for(int i = 1; i <= count; i++)
    {
        result.push_back(i*step);
    }
    
    return result;
}
