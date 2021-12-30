#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    auto maxi = vec[0];
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] > maxi){
            maxi = vec [i];
        }
    }
    return maxi;
}

