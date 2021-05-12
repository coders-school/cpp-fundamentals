#pragma once

int NWD(int lhs, int rhs) {
    int remainder;
    while (rhs != 0) {
        remainder = lhs % rhs;
        lhs = rhs;
        rhs = remainder;
    }

    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
