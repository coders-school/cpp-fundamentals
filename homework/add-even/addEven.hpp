#pragma once
#include <vector>
#include <numeric>

int addEven(const std::vector<int>& numbers) {
    int sum{0};
    for(int num : numbers)
    {
        if(num % 2 == 0)
            sum += num;
    }
    return sum;
}
