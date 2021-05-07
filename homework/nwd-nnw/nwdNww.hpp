#pragma once

#include <cmath>

int NWD(int lhs, int rhs) {
    if(rhs < 0)
    {
        rhs = -rhs;
    }
    if(lhs < 0)
    {
        lhs = -lhs;
    }
    while(rhs != 0)
    {
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0)
    {
        return 0;
    }
    return std::abs(lhs * rhs) / NWD(lhs, rhs);
}
