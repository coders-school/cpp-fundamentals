#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    int vec_size = vec.size();
    
    int highest = vec[0];
    
    for (int i = 1; i < vec_size; i++) {
        if (vec[i] >= highest) {
            highest = vec[i];
        }
    }
    
    return highest;
}
