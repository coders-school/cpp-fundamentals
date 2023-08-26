#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum{};
    for (auto const x : numbers) {
        if (x % 2 == 0) {
            sum+=x;
        }
    }
    return sum;
}
