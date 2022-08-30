#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    // euclides
    if (rhs == 0)
        return abs(lhs);
    return NWD(rhs, lhs - (rhs * abs(lhs / rhs)));
}

int NWW(int lhs, int rhs) {
    if (lhs == 0)
        return 0;
    if (rhs == 0)
        return 0;
    if (lhs == -1 && rhs == 1)
        return 1;
    if (lhs == 1 && rhs == -1)
        return 1;
    return lhs * rhs / NWD(lhs, rhs);
}
