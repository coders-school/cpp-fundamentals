#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    auto result = vec.front();
    for(auto n: vec)
        if (n>result) result = n;
    return result;
}
