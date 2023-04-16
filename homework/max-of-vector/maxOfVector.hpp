#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max{vec.at(0)};
    for (int i{1}; i < vec.size(); ++i) {
        if (vec.at(i) > max)
            max = vec.at(i);
    }
    return max;
}
