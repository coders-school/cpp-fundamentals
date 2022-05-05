#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    std::vector<int> sortedVec {};

    for(auto& el : vec) {
        sortedVec.push_back(el);
    }
    std::sort(sortedVec.begin(), sortedVec.end());

    return sortedVec.back();
}
