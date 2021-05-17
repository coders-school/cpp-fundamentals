#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> resVec{};
    int val = 0;
    for(int i = 0; i < count; i++) {
        val+=step;
        resVec.push_back(val);
    }
    // TODO: Implement me :)
    return resVec;
}
