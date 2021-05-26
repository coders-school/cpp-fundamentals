#pragma once

int NWD(int lhs, int rhs) {
    if (rhs > 0) {
        return NWD(rhs, lhs % rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    return lhs * rhs/ NWD(lhs, rhs);
}
