#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    auto vecMax = vec[0];
    for(auto& it : vec)
    {
        if(it  > vecMax)
        {
            vecMax = it;
        }
    }
    return vecMax;
}
