#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int returnEvenSum=0;
    if(numbers.size() == 0)
    {
        return returnEvenSum;
    }
    
    for(auto it=numbers.begin(); it != numbers.end(); ++it)
    {
        if((*it & 1) ==0)
        {
            returnEvenSum += *it;
        }
    }


    return returnEvenSum;
}
