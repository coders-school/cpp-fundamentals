#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);

    if (lhs == 0 && rhs == 0) {
        return 0;
    } else if (lhs == 0 && rhs != 0) {
        return rhs;
    } else if (lhs != 0 && rhs == 0) {
        return lhs;
    } else {
        while (lhs != rhs) {
            if (lhs > rhs) {
                lhs = lhs - rhs;
            } else {
                rhs = rhs - lhs;
            }
        }
        return lhs;
    }
}

int NWW(int lhs, int rhs) {
    return (std::abs(lhs) * std::abs(rhs)) / NWD(lhs, rhs);
}
