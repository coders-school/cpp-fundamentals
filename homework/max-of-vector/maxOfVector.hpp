#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int result = INT_MIN;
    for(auto n : vec){
        if(n > result){
            result = n;
        }
    }
    return result;
}
