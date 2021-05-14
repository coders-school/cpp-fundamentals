#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers)
{
    int result {0};
    for(const auto& element : numbers)
    {
        if(element % 2 == 0)
        {
            result += element;
        }
    }
    return result;
}
