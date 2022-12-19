#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {

    int temp;

    while (rhs != 0) {
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }

    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    auto nwd = NWD(lhs, rhs);
    if(nwd == 0)
        return 0;

    return std::abs((lhs / nwd) * rhs);
}
