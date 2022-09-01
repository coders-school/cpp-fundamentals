#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    if (numbers.empty())
        return 0;
    int sum = 0;
    for (const auto& number : numbers) {
        if (number % 2 == 0)
            sum += number;
    }
    return sum;
}
