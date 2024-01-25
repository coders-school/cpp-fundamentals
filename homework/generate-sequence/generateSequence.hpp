#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> returnvector = {};
    int i, number;
    for (i = 0; i < count; ++i) {
        number = (step + (i * step));
        returnvector.push_back(number);
    }
    return returnvector;
}
