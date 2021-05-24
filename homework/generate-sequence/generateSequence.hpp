#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
      std::vector<int> vec;

    if(count <= 0) {
        return vec = {};
    }

    for(int i = 1; i <= count; i++){
        vec.push_back(i * step);
    }

    return vec;
}
    

