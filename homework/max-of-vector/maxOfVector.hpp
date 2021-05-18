#pragma once
#include <algorithm>
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}
