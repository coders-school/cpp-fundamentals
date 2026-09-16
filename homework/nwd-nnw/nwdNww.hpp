#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0 && rhs != 0)
        return rhs;
    else if (lhs != 0 && rhs == 0)
        return lhs;
    while (lhs != rhs) {
        if (lhs > rhs)
            lhs -= rhs;
        else
            rhs -= lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    int nwd = NWD(lhs, rhs);
    if (nwd == 0)
        return 0;
    return std::abs((lhs * rhs) / nwd);
}
