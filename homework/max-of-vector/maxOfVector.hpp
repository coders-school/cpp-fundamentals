#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // auto result = std::max_element(vec.begin(), vec.end());
    int result = vec.front();
    for (auto element : vec) {
        if (element > result) result = element;
    }
    return result;
}
