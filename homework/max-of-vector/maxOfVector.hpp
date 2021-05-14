#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    auto result = std::max_element(vec.begin(), vec.end());
    return *result;
}
