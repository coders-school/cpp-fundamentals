#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int ret = vec[0];
    for(int i : vec)
    {
        if(ret < i) ret = i; 
    }

    return ret;
}
