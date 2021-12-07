#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int maxOfVector = std::numeric_limits<int>::min();
    
    for(auto& e: vec){
        if(e > maxOfVector){
            maxOfVector = e;
        }
    }
    return maxOfVector;
}
