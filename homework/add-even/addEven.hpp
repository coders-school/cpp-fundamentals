#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    auto result = 0;
    for(auto n: numbers)
        if (n%2 == 0)
            result+=n;
    return result;
}
