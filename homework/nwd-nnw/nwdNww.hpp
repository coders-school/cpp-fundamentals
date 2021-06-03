#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    if (rhs == 0) {
        return lhs;
    }
    if (rhs != 0) {
        return NWD(std::abs(rhs), std::abs(lhs) % std::abs(rhs));
    }
}

int NWW(int lhs, int rhs) {
    if (NWD(lhs, rhs) == 1) {
        return lhs * rhs;
    }
    if (NWD(lhs, rhs) != 1) {
        return lhs * rhs / NWD(lhs, rhs);
    }
}
