#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> result;
    if(count <= 0)
        return result;
    
    result.push_back(step);
    for(size_t i = 1; i < count; i++)
    {
        result.push_back(result[i-1] + step);
    }
    return result;
}
