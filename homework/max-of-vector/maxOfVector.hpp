#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    
    int new_max = vec[0];

    for (int i = 0; i < vec.size(); ++i) {
        if(new_max < vec[i]) {
            new_max = vec[i];                     
        }
    }  
    return new_max;
}
