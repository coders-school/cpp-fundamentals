#pragma once
#include <iostream>
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int sumEven = 0;
    for (const auto& el : numbers) {
        if (el % 2 == 0) {
            sumEven += el;
        }
    }
    return sumEven;
}
