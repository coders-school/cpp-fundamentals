#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        throw std::invalid_argument("Vector is empty");
    }
    int max = std::numeric_limits<int>::min();
    for (int val : vec) {
        if (val > max) {
            max = val;
        }
    }
    return max;
}
