#pragma once
#include <vector>
#include <limits> 

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    if(vec.size() ==  1){
        return vec[0];
    }
    else{
        int maxValue = 0;
        for(auto element : vec){
            if(element) > maxValue){
                maxValue = element;
            }
        }
        return maxValue;
    }

    return {};
}
