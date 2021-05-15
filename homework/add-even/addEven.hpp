#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;
    for(const auto & i : numbers)
    {
        if(i % 2 == 0)
        {
            result += i;
        }
    }
    return result;
}
