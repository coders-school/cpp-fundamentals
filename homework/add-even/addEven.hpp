#pragma once
#include <vector>
#include <numeric>

int addEven(const std::vector<int> &numbers)
{
    std::vector<int> even_numbers{};

    int sum;
    bool even;

    for (auto &el : numbers)
    {
        even = (el % 2); //Checking if number is even or not.

        if (even == false)
        {
            even_numbers.push_back(el);
        }
    }

    sum = std::accumulate(even_numbers.begin(), even_numbers.end(), 0);
    return sum;
}
