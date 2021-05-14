#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> arithmetic_progression;
    int tmp=step;
    for(int i=0; i<count; ++i){
        arithmetic_progression.push_back(tmp);
        tmp+=step;
    }
    return arithmetic_progression;
}
