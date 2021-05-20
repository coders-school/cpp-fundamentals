#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int intotal = 0;
    for(auto& el : numbers)
    {          
        if (el % 2 == 0)
        {
            intotal = intotal + el;
        }
    }  
    return intotal;
}
