#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    int a = 0;
    for (int i = 0; i < count; i++) {
        a = a + step;
        result.push_back(a);
    }
    return result;
}
