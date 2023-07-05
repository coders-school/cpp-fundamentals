#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max_Value = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > max_Value) {
            max_Value = vec[i];
        }
    }
    return max_Value;
}
