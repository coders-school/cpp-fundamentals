#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    for (int i = 0; i < count; ++i)
    {
        result.push_back(step + i * step);
    } 
    return result;
}
