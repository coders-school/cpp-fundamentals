#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max = vec [0];
    for (auto el : vec) {
        if (el > max) {
            max = el;
        }
    }
    return max;
}
