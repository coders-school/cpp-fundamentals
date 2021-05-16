#pragma once
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec.front();
    for (int element : vec) {
        if (element > max) {
            max = element;
        }
    }
    return max;
}
