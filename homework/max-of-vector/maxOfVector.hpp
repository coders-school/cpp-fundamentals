#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    for (int num : vec) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}
