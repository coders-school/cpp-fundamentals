#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    auto sum{0};
    for (const auto& var : numbers)
        if (!(var % 2))
            sum += var;

    return sum;
}