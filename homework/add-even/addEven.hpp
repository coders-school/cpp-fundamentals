#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    int sum_of_even = 0;
    for (std::size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            sum_of_even = sum_of_even + numbers[i];
        }
    }

    return sum_of_even;
}
