#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = *std::max_element(vec.begin(), vec.end());
    return max;
}
