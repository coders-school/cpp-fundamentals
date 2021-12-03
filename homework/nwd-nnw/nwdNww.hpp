#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0) return rhs;
    if (rhs == 0) return lhs;
    
    lhs = lhs < 0 ? -1 * lhs : lhs;
    rhs = rhs < 0 ? -1 * rhs : rhs;
    
    while (lhs != rhs){
        lhs > rhs ? lhs -= rhs : rhs -= lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (!lhs || !rhs) return 0;
    int numerator = lhs * rhs < 0 ? -1 * lhs * rhs : lhs * rhs;
    return numerator / NWD(lhs,rhs);
}
