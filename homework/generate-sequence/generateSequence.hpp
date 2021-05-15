#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> vec {step};
    if(count <= 0){
        return {};
    }
    for(size_t i = 1; i< count; i++){
        vec.push_back(vec[i - 1] +  step);
    }

    return vec;
}
