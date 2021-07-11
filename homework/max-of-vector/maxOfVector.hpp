#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int temp=vec[0];
    for(auto i : vec)
    {
        if(i >temp)
        temp=i;
    }
    return temp;
}
