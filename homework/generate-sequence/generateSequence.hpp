#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count<0)
        return vec;

    int j=1;
    for(int i=0;i<count;i++)
    {
        vec.push_back(step*j);
        j++;
    }
    return vec;
}
