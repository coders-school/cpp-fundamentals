#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.size() > 0) {
        auto result = std::max_element(vec.begin(), vec.end());
        return *result;
    }

    return 0;
}
