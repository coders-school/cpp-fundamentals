#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max = vec.front();
    for (auto el : vec) {
        int temp = el;
        if (temp > max)
            max = temp;
    }
    return max;
}
