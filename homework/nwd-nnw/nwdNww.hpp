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
    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    if (NWD(lhs, rhs) == 1) {
        return std::abs(lhs) * std::abs(rhs);
    }
    if (NWD(lhs, rhs) != 1 ) {
        return std::abs(lhs) * std::abs(rhs) / NWD(lhs, rhs);
    }
}
