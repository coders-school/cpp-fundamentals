#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    if (count <= 0) {
        return result;
    }
    for (int i = 0; i < count; ++i) {
        if (i == 0) {
            result.push_back(step);
        } else {
            result.push_back(result[i - 1] + step);
        }
    }
    return result;
}
