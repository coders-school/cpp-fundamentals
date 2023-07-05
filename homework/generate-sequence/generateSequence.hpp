#pragma once
#include <vector> 

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    if (count <= 0) {
        std::vector <int> vec;
        return vec;
    }
    std::vector <int> vec(count);
    vec[0] = step;
    for(int i = 1; i < count; i++) {
        vec[i] = vec[i - 1] + step;
    } 

    return vec;
}
