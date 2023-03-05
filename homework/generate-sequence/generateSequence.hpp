#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    for (int i = 0, j = step; i < count; i++, j += step) {
        result.push_back(j);
    }
    return result;
}
