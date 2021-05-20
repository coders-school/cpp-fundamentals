#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> numbers;
    int temp {0};

    for(int i = 0; i < count; i++){
        temp += step;
        numbers.push_back(temp);
    }
    return numbers;
}
