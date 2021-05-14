#pragma once
#include <climits>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max = -INT_MAX;
    for (const auto& el : vec) {
        if (max < el) {
            max = el;
        }
    }
    return max;
}
