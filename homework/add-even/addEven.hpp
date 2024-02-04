#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now

    int even_numers_sum{0};

    for (auto& it : numbers) {
        if (it % 2 == 0) {
            even_numers_sum += it;
        }
    }

    return even_numers_sum;
}
