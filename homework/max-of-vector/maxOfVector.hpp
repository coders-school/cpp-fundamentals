#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}
