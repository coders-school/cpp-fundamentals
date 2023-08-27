#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int point = vec[0];
    for (auto x : vec) {
        if (point < x) {
            point = x;
        }
    }
    return point;
}
