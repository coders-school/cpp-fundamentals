#pragma once

int NWD(int lhs, int rhs) {
    if(rhs != 0) return NWD(rhs, lhs%rhs);
    if (lhs < 0) lhs = -lhs;
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 && rhs ==0) return 0;
    int result = lhs/NWD(lhs, rhs)*rhs;
    if (result < 0) result = -result;
    return result;
}
