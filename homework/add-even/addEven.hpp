#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    auto sum = 0;

    for (auto const& it : numbers) {
        if (it % 2 == 0)
            sum += it;
    }

    return sum;
}
