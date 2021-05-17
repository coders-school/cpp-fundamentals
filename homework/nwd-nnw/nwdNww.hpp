#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int temp;
    while (rhs != 0) {
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    while (lhs != 0) {
        return abs((lhs / NWD(lhs, rhs)) * rhs);
    }
    return abs(lhs);
}
