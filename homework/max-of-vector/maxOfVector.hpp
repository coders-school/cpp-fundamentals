#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec.front();
    for (auto number : vec) {
        if (number > max)
            max = number;
    }
    return max;
}
