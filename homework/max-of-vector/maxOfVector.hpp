#pragma once

#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max_number = std::numeric_limits<int>::min();
    for (auto a : vec) {
        if (a > max_number) {
            max_number = a;
        }
    }
    return max_number;
}
