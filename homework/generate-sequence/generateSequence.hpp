#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    for(int i = 0; i < count; ++i){
        int el = i * step + step;
        vec.emplace_back(el);
    }
    return vec;
}
