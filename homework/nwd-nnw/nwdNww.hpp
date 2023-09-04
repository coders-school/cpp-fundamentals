#pragma once
#include <cmath>

int NWD(int lhs, int rhs) { //224 1270
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
    // TODO: Implement me :)
    return -1;
}
