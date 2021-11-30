#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    std::vector<int> numbers{};
    if (count<=0) return numbers;
    for (int i=0;i<count;++i)
    {
        numbers.push_back(step*(i+1));
    }
    return numbers;
}
