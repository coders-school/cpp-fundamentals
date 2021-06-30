#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int maxOfVector = vec[0];
    for(const auto& it : vec) {
        if(it > maxOfVector){
            maxOfVector = it;
        }
    }
    return maxOfVector;
}
