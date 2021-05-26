#pragma once

int NWD(int lhs, int rhs) {
    if (rhs > 0) {
        return NWD(rhs, lhs % rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
