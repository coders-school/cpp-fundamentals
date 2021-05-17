#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vector;
    for(int i=1; i<=count; i++)
    {
        vector.push_back(step * i);
    }
    return vector;
}
