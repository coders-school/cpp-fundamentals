#pragma once
#include <vector>
#include <limits>


int maxOfVector(const std::vector<int>& vec) {
    int maxVector = vec[0];
    for (int i : vec) {
        if (i > maxVector) maxVector = i;
    }
    return maxVector;
}
