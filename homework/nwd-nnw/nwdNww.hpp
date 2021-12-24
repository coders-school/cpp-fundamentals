#pragma once

#include <cmath>

int NWD (int lhs, int rhs)
{
    // resolve problem of negative arguments
    lhs = abs (lhs);
    rhs = abs (rhs);

    while (rhs != 0) {
        int rest = lhs % rhs;
        lhs = rhs;
        rhs = rest;
    }

    return lhs;
}

int NWW (int lhs, int rhs)
{   
    // prevent 0 division
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    return abs (lhs * rhs) / NWD (lhs, rhs);
}
