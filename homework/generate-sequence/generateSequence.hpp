#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    if(step == 0)
    {
        for(int i = 0; i < count; ++i)
        {
            result.emplace_back(0);
        }
    }
    else if(step < 0)
    {
        for(int i = step*-1; i<= count * step * -1; i+=(step*-1))
        {
            result.emplace_back(-i);
        }
    }
    else {
        for (int i = step; i <= count * step; i += step) {
            result.emplace_back(i);
        }
    }
    return result;
}
