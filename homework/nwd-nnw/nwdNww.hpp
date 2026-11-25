#pragma once

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0) return rhs;
    if (rhs == 0) return lhs;
    while (rhs != 0) {
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0 || rhs == 0) return 0;
    return (lhs / NWD(lhs, rhs)) * rhs;
}
