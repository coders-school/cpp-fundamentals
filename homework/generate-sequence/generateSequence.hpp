#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result{};
    if (count == 0)
        return result;
    if (count-- > 0)
        result.push_back(step);
    for (int i = 0; i < count; ++i) {
        result.push_back(result[i] + step);
    }
    return result;
}
