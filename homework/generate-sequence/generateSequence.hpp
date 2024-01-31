#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int> v = {};
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += step;
        v.push_back(sum);
    }

    return v;
}
