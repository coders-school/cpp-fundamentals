#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if(count < 1){
        return {};
    }
    std::vector<int> vec;
    vec.reserve(count);
    for(int i=0;i<count;i++){
        vec.push_back(step * (i+1));
    }
    return vec;
}
