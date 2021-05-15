#pragma once
#include <vector>
#include <algorithm>

int addEven(const std::vector<int>& numbers) {
    int sum {0};
    std::for_each(numbers.begin(), numbers.end(), [&sum](int element) {
                 if(element % 2 == 0) {
                    sum += element;
                 }
            });
    return sum;
}
