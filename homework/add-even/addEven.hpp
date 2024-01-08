#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    unsigned int even_sum = 0;
    for (const auto& elem : numbers) {
        if (elem % 2 == 0) {
            even_sum += elem;
        }
    }
    return even_sum;
}
