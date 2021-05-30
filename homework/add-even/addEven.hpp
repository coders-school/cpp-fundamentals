#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) 
{
    int sumOfEven {0};
    for(const auto& vecElement : numbers)
    {
        //The most intresting approach
        if (!(vecElement & 1))
            sumOfEven += vecElement;

        //Other approaches 
        // if(vecElement%2 == 0)
            // sumOfEven += vecElement;
        // if(!vecElement%2)
            // sumOfEven += vecElement;
    }
    
    return sumOfEven;
}
