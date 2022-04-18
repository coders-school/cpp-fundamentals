#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;
    for (int i : numbers) {
        if (i % 2 == 0) {
            result = result + i;
        }
    }
    return result;
}
