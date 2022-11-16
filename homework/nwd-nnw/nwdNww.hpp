#pragma once

#include <cstdlib>

int NWD(int lhs, int rhs) {
    if (rhs == 0) {
        return lhs >= 0 ? lhs : (-1) * lhs;
    }
    return NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    return std::abs(lhs * rhs) / NWD(lhs, rhs);
}
