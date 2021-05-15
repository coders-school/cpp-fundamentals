#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
int max = vec[0];
    for (const auto& el :vec) {
        if (max < el) 
        max = el;
    }
    return max;
}
