#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence;
    int element_of_sequnce = step;
    for(int i = 0; i < count; ++i){
        sequence.push_back(element_of_sequnce);
        element_of_sequnce += step;
    }
    return sequence;
}
