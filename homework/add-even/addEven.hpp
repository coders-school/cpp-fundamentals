#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int tmp = 0;
    if (numbers.size() != 0) {
        for (auto i = numbers.begin(); i != numbers.end(); ++i) {
            int element = *i;
            if (element % 2 == 0) {
                tmp += element;
            }   
        }
    }
    return tmp;
}
