#pragma once
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> vec;

    if (count <= 0) {
        return vec;
    }
    if (step == 0) {
        for (size_t i = 0; i < count; i++) {
            vec.push_back(0);
        }

        return vec;
    }
    int element = step;
    for (size_t i = 1; i <= count; i++) {
        //   std::cout << element << "\n";
        vec.push_back(element);
        element += step;
    }

    return vec;
}
