#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    int number=vec[0];
    for (auto element : vec)
    {
        if(element>=number) number=element;
    }
    
    return number;
}
