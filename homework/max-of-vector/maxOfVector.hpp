#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}
