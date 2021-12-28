#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum_even = 0;
    
    for (auto el : numbers) {
        if (el%2 == 0) {
            sum_even += el;
        }
    }
    return sum_even;
}
