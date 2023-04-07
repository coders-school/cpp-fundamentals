#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int score = 0;

    for (auto& el : numbers) {
        if (el % 2 == 0) {
            score = score + el;
        }
    }

    return score;
}
