#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int response{0};
    for(auto it : numbers)
    {
        if(it % 2 == 0)
        {
            response+=it;
        }
    }
    return response;
}
