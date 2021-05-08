#pragma once

// Modified Euclidean algorithm:
int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
    if (rhs == 0) {
        return lhs;
    }
    return NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
