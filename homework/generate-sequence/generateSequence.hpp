#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    auto result = std::vector<int>();
    for (auto i=0;i<count;i++)
        result.push_back(step*(i+1));
    return result;
}
