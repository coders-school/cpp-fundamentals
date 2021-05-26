#pragma once
#include <vector>
#include <iostream>

std::vector<int> generateSequence(int count, int step) 
{
    if (count <= 0)
    {
        std::cout<<"Invalid count value!\n";
        return {};
    }

    std::vector<int> result;
    for(int i = 0; i < count; ++i)
    {
        result.push_back(step + step*i);
    }

    return result;
}
