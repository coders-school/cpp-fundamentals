#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    std::vector<int>tmp(0,0);
    
    if(count <= 0 ) {  //&& step < 1) {
        return tmp;
    }
    std::vector<int>vec;
    vec.reserve(count);

   // int tmp{};

    vec.push_back(step);

    for(int i = 1; i < count ; ++i) {

        // tmp = step * (i+2);
        vec.push_back({step  * (i+1)});

    }

    vec.shrink_to_fit();

    return vec;
}
