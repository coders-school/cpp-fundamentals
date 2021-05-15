#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    auto max = vec[0];
    for(const auto& el:vec)
    {
        if(max<el)
        {
            max = el;
        }
    }
    return max;
}