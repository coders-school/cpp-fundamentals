#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> my_vec;
    
    for (int i = 0; i < count; i++) {
        my_vec.push_back((i + 1) * step);
    }
    // TODO: Implement me :)
    return my_vec;
}
