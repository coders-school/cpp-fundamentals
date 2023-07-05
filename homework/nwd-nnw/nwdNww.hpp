#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    while (rhs != 0) {
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs == 0 && rhs == 0) {
        int nww = 0;
        return nww;
    }
    int nwd_value = NWD(lhs, rhs);
    return abs((lhs * rhs) / nwd_value);
}
