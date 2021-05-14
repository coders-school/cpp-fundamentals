#pragma once
#include <vector>
#include <algorithm>
#include <cstdlib>

int NWD(int lhs, int rhs) {

    std::vector<int> numbers = {lhs, rhs};
    std::sort(numbers.begin(), numbers.end());

    if( 0 == numbers[1] ) return numbers[0];

    while (numbers[0] % numbers[1]) {
        int temp = numbers[0] % numbers[1];
        numbers[0] = numbers[1];
        numbers[1] = temp;
    }

    return std::abs(numbers[1]);
}

int NWW(int lhs, int rhs) {

    if( 0 != NWD(lhs, rhs)) return std::abs( (lhs * rhs) / NWD(lhs, rhs) );
    else return 0;
}
