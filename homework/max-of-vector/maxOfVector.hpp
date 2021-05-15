#pragma once

#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        return 0;
    }
    auto max_of_vec{ std::numeric_limits<int>::min() };
    for (auto el : vec) {
        if (el > max_of_vec) {
            max_of_vec = el;
        }
    }

    return max_of_vec;
}
