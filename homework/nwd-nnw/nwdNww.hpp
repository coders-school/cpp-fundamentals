#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    lhs = abs(lhs);
    rhs = abs(rhs);
    if (rhs == 0) {
        return lhs;
    } else {
        if (lhs % rhs == 0) {
            return rhs;
        } else {
            return NWD(rhs, lhs % rhs);
        }
    }
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    lhs = abs(lhs);
    rhs = abs(rhs);
    if (rhs == 0) {
        return 0;
    } else {
        return lhs * rhs / NWD(lhs, rhs);
    }
}
