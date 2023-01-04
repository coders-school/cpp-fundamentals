#pragma once
#include <iostream>
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result{0};
    for (const auto& n : numbers) {
        if ((n % 2) == 0) {
            result += n;
        }
    }
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    return result;
}
