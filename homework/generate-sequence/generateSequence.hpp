#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence;
    int number = 0; 
     
    for(int i = 0; i < count; i++){
        number += step;
        sequence.push_back(number);
    }
    return sequence;
}
