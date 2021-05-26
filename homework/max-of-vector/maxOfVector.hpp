#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max = vec[0];
    for(auto i: vec)
    {
        if(i > max)
        {
            max = i;
        }
    }
    return max;
}
