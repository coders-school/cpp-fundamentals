#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (const auto& vec : numbers) {
        if (vec % 2 == 0) {
            sum += vec;
        }
    }
    return sum;
}
