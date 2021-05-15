#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    int element{0};
    std::vector<int> vec;
    if(count > 0) {
        for (size_t i = 0; i < count; i++) {
            element += step;
            vec.push_back(element);
        } 
    }
    return vec;
}
