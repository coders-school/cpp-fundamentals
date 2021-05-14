#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    int biggest = vec[0];
    for(auto bigger : vec)
    {
        if (bigger > biggest){biggest=bigger;}
    }
    return biggest;
}
