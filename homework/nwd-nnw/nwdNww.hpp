#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    int helpNum = 0; 
    while (rhs != 0) {
        helpNum = rhs;
        rhs = lhs % rhs;
        lhs = helpNum;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    int forReturn = 0;
    if (rhs != 0) {
        forReturn = (lhs * rhs) / NWD(lhs, rhs);
    }
    return forReturn;
}
