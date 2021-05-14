#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    
    int evenAdded = 0;
    for(auto value : numbers)
    {
        if(value%2 == 0)
        {
            evenAdded +=value;
        }
        else{}
    }
    return evenAdded;
}
