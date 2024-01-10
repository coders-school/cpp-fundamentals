#pragma once

int NWD(int lhs, int rhs) {
    do {
        if (lhs == rhs) return lhs;
        else if (lhs > rhs) lhs=(lhs-rhs);
        else rhs=(rhs-lhs);
    } while (lhs != rhs);
}

int NWW(int lhs, int rhs) {
    return (lhs * rhs) / NWD(lhs, rhs);
}
