#pragma once
#include <vector>
#include <algorithm>

std::vector<int> generateSequence(int count, int step) 
{
    if(count <= 0)
    {
        return std::vector<int>{};
    }

    std::vector<int> vec(count);
    
    int temp{step};

    for(int& num : vec)
    {
        num = step;
        step += temp;
    }
    
    return vec;
}
