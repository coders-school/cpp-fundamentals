#pragma once

#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum_of_even{};
    for (auto el : numbers) {
        if (el % 2 == 0) {
            sum_of_even += el;
        }
    }

    return sum_of_even;
}
