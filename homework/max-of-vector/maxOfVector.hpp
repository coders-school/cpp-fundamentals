#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max_elem = vec[0];
    for (const auto& elem : vec) {
        if (elem > max_elem) {
            max_elem = elem;
        }
    }
    return max_elem;
}
