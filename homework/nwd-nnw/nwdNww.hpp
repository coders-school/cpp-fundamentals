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
    // TODO: Implement me :)
    return -1;
}
