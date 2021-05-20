#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int ret = 0;
    for(int i : numbers)
    {
        if( !(i%2) ) ret+=i;
    }

    return ret;
}
