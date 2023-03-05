#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    auto sum = 0;
    for (std::size_t i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            sum += numbers[i];
        }
    }
    return sum;
}
