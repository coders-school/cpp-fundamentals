#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max{};
    if (!vec.empty()) {
        max = vec.front();
    } else {
        return 0;
    }
    for (auto& num : vec) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}
