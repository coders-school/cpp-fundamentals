#pragma once
#include <vector>
#include <algorithm>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max_vec = {};
    
    if(vec.empty()) {
        return 0;
    }
    else {
        max_vec = *std::max_element(vec.begin(), vec.end());        
    }
    return max_vec;
    
}
