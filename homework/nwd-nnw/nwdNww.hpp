#pragma once
#include <algorithm>
#include <cmath>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0)
        return rhs;
    else if (rhs == 0)
        return lhs;
    else {
        while (rhs)
            std::swap(lhs %= rhs, rhs);
        return lhs;
    }
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0 or rhs == 0)
        return 0;
    else
        return lhs * rhs / NWD(lhs, rhs);
}
