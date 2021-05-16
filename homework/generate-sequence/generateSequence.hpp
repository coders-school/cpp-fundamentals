#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> vec;
    for (int i=1; i <= count;i++){

        vec.push_back(step*i);
    }

    return vec;
}
