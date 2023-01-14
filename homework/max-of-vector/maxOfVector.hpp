#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = 0;
    if (~vec.empty()) {
        max = vec.front();
        for (int it : vec) {
            if (it > max) {
                max = it;
            }
        }
    }
    return max;
}
