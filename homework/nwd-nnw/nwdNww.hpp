#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0) {
        lhs = lhs * -1;
    }

    if (rhs < 0) {
        rhs = rhs * -1;
    }

    while (rhs) {
        auto temp = lhs;
        lhs = rhs;
        rhs = temp  % rhs;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
