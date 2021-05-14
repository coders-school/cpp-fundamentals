#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int>vec;
    int el = 0;
    for(int i = 0; i < count; i++){
        el += step;
        vec.push_back(el);
    }
    return vec;
}
