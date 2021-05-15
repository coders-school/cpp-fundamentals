#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int result{0};

    for (auto i : numbers) {
        if(i%2 == 0) {
            result += i;
        }
    }

    return result;
}
