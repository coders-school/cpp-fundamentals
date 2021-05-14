#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max = std::numeric_limits<int>::min();
    for (const auto& i : vec) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}
