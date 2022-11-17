#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    for (const int& elem : vec) {
        if (elem > max) {
            max = elem;
        }
    }

    return max;
}
