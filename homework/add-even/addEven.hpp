#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;
    // for (auto i = vector.begin(); i = vector.end(); i++) // alternatywna petla for
    for(int element : numbers) {
        if (element%2 == 0) {
            result += element;
        }
    }
    return result;
}