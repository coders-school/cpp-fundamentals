#pragma once

int NWD(int lhs, int rhs) {
    while (rhs != 0) {
        int t = rhs;
        rhs = lhs % rhs;
        lhs = t;
    }

    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    if (rhs == 0)
        return 0;
    return std::abs(lhs * rhs / NWD(lhs, rhs));
}
