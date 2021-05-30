#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max = *vec.begin();
    for(auto i : vec){
        if(i > max){
            max = i;
        }
    }
    return max;
}
