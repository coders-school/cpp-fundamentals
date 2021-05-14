#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int> sequence = {};

    if( 0 >= count) return sequence;
    
    int i =0;
    while (i < count) {
        sequence.push_back(step * ++i);
    }

    return sequence;
}
