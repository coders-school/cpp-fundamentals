#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    unsigned int sum = 0;

    for (auto element : numbers) {
        sum += element;
    }

    return sum;
}
