#pragma once
#include <climits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = INT_MIN;
    for (auto element : vec) {
        if (element > max) {
            max = element;
        }
    }
    return max;
}
