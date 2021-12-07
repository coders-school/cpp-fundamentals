#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> v {};
    int value = step;
    if(count <= 0) return v;

    for(size_t i = 0; i < count; ++i){
        v.push_back(value);
        value += step;
    }
    return v;
}
