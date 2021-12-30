#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
   
    int value = step;
    std::vector<int> newVector;
    for (int i = 0; i < count; i++){
        newVector.push_back(value);
        value = value + step;
    }
    return newVector;
}
