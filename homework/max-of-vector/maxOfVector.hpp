#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int maxNumber = vec.at(0);
    for (const auto& elem : vec) {
        if (elem > maxNumber) {
            maxNumber = elem;
        }
    }
    return maxNumber;
}
