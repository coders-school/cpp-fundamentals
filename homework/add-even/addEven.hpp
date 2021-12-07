#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int sum = 0;

    for(auto e: numbers){
        sum += e&1 ? 0 : e;
    }
    return sum;
}
