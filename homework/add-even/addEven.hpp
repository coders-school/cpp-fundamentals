#pragma once
#include <vector>
int addEven(const std::vector<int>& numbers)
{
    int sum = 0;
    for(auto el: numbers)
        {
            sum += el % 2 == 0 ? el : 0;
        }
        return sum;

}
