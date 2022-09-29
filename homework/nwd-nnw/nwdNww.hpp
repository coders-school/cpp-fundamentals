#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0) {
        lhs *= -1;
    }
    if (rhs < 0) {
        rhs *= -1;
    }

    // Use euclidean algorithm
    while (rhs != 0) {
        auto rest = lhs % rhs;
        lhs = rhs;
        rhs = rest;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
