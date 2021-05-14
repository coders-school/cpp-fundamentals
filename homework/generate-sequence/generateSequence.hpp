#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> outputVector;
    if (count > 0){
        for(unsigned int i = 0; i < count; i++){
            outputVector.push_back(i*step+step);
        }
    }
    return outputVector;
}
