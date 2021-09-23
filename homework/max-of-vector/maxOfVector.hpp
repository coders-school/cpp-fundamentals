#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    if(vec.empty())
        return 0;
    if(vec.size()==1)
        return vec[0];
    int max=vec[1];
    for(auto& it:vec)
    {
        if(it>max)
            max=it;
    }
    return max;
}
