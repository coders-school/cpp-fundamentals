#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    auto maxVal = vec[0];
    for(size_t i =0 ; i < vec.size() ; i++){
        if(vec[i] > maxVal){maxVal = vec[i];}
    }
    return maxVal;
}
