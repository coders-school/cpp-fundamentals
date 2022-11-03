#pragma once


int NWD(int lhs, int rhs) {
    while (rhs != 0) {
        int r = lhs % rhs;
        lhs = rhs;
        rhs = r;
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    int divider = NWD(lhs, rhs);
    if (divider == 0) {
        return 0;
    }
    return abs(lhs * rhs / NWD(lhs, rhs));
}

