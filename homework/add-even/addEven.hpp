#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers)
{

    int sum_numbers{0};

    for (int number : numbers)
    {
        sum_numbers += number % 2 == 0 ? number : 0;
    }
    return sum_numbers;
}
