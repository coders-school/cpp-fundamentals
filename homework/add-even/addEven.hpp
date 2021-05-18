#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {

    int sum = 0;

    for(auto number : numbers)
    {
        sum += number % 2 == 0 ? number : 0;
    }

    return sum;
}
