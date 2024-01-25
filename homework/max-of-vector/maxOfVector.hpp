#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int i, max;
    max = vec[0];
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}
