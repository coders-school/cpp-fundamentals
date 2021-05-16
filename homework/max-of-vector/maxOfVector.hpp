#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)

    if(vec.size() == 0)
    {
        return {};
    }

    int returnMaxVal = std::numeric_limits<int>::min();

    for(auto it: vec)
    {
        if(it > returnMaxVal)
        {
            returnMaxVal = it;
        }
    }
    return returnMaxVal; 
}
