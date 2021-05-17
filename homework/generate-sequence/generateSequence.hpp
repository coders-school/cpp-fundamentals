#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    if(count <= 0){
        return result;
    }
    result.reserve(count);

    int currentValue = step;
    for(int i = 0; i < count; ++i){
        result.push_back(currentValue);
        currentValue += step;
    }

    return result;
}
