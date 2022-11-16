#pragma once

int NWD(int lhs, int rhs) {
    if (rhs == 0) {
        return lhs >= 0 ? lhs : (-1) * lhs;
    }
    return NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
