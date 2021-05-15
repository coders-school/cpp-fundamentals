#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int maxElement = vec[0];
    for (auto i : vec) {
        if(maxElement < i) {
            maxElement = i;
        }
    }
    return maxElement;
}
