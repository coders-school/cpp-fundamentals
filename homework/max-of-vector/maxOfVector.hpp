#pragma once
#include <vector>
#include <climits>

int maxOfVector(const std::vector<int>& vec){
    int min=INT_MIN;
    for(auto i:vec){
        min=i<min?min:i;
    }
    return min;
}
