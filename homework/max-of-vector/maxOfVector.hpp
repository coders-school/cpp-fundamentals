#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    std::vector<int>::const_iterator result;
    result = std::max_element(vec.begin(), vec.end());
    return *result;
}
