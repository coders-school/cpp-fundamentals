#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int maxVal = std::numeric_limits<int>::min();

    for (auto elem : vec) {
        if(elem > maxVal) maxVal = elem;
    }

    return maxVal;
}
