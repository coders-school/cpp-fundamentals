#pragma once
#include <vector>
#include <limits> 

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
        int maxValue = std::numeric_limits<int>::min();
        for(auto element : vec){
            if(element > maxValue){
                maxValue = element;
            }
        }
        return maxValue;
}
