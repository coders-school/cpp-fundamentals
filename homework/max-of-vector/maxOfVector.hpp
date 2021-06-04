#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    for (int i=1; i<vec.size(); i++){
        if (max < vec[i]){
            max = vec[i];
        }
    }
    return max;
}
