#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
 
    std::vector<int> vec{};
    if (count <= 0)
    {
        return vec;
    }
    int temp = 0;
    for (size_t i = 0; i < count; i++)
    {temp +=step;
        vec.push_back(temp);
        
    }
    return vec;
  
}