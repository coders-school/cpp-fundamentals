#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    int maximal = vec[0];

    for(auto& element : vec )
    if(element > maximal){
    maximal = element;
    }
    return maximal;
}
