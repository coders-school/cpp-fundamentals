#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    
    if(count <= 0)
    {
        return result;
    }

    result.reserve(count);
    for(size_t i {0}; i < count; ++i)
    {
        result.emplace_back(step * (i + 1));
    }
    return result;
}
