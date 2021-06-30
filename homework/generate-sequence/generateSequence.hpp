#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> generateVector{};
    int temp = step;
    if(count > 0) {
        //generateVector.reserve(count);
        for(int i = 0; i < count; i++){
            generateVector.push_back(temp);
            temp += step;
        }
    }
    return generateVector;
}
