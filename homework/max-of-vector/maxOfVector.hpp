#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    auto max_num = vec[0];
    for (auto i : vec) {
        if (i > max_num) {
            max_num = i;
        }
    }
    return max_num;
}
