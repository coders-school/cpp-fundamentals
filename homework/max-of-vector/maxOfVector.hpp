#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int result = vec[0];
    
    for(int i = 1; i < vec.size(); i++)
    {
        if(result < vec[i])
        {
            result = vec[i];
        }
    }
    return result;
}
