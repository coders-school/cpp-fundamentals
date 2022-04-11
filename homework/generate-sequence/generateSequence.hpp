#pragma once
#include <vector>

std::vector<int> generateSequence(int _count, int step) {
    std::vector<int> numbers;
    if(_count < 0) return numbers;
    for(int i = 0; i < _count; i++) {
        numbers[i] = step;
        step+=step;
    }
    return numbers;
}
