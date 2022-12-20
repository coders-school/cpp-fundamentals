#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs == 0 and rhs == 0) {
        return 0;
    }
    int nwd = -1;

    if (rhs == 0) {
        nwd = std::abs(lhs);
    } else {
        nwd = NWD(rhs, lhs % rhs);
    }

    return nwd;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs == 0 and rhs == 0) {
        return 0;
    }
    int nww = -1;

    nww = std::abs(lhs * rhs / NWD(lhs, rhs));

    return nww;
}
