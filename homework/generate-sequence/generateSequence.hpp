#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    std::vector<int> vec;

    for(auto element=1; element <= count; element++ ){
        vec.push_back(step*element);
    }
    return vec;
}
