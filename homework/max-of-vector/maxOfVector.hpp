#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    auto max = std::numeric_limits<int>::min();
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}
