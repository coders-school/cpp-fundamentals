#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum{0};
    for(const auto& n : numbers) {
        if (n % 2 == 0)
        sum += n;
    }

    return sum;
}
