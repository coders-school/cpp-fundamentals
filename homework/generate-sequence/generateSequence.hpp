#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    if (count <= 0)
    {
        return {};
    }
    std::vector<int> generatedvector;
    generatedvector.reserve(count);
    int firstStep = step;
    while (count > 0)
    {
        generatedvector.push_back(step);
        step += firstStep;
        --count;
    }
    return generatedvector;
}
