#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0 && rhs < 0) {
        lhs = -lhs;
        rhs = -rhs;
        }
    if (lhs < 0 && rhs >= 0)
        lhs = -lhs;
    if (lhs >= 0 && rhs < 0)
        rhs = -rhs;
    if (lhs == 0 && rhs == 0)
        return 0;
    if (lhs == 0 && rhs != 0)
        return rhs;
    if (lhs != 0 && rhs == 0)
        return lhs;
    if (lhs != 0 && rhs != 0)
        while (lhs != rhs) {
            if (lhs > rhs)
                lhs = (lhs - rhs);
            else
                rhs = (rhs - lhs);
        };
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs < 0 && rhs < 0) {
        lhs = -lhs;
        rhs = -rhs;
        }
    if (lhs < 0 && rhs >= 0)
        lhs = -lhs;
    if (lhs >= 0 && rhs < 0)
        rhs = -rhs;
    if (lhs == 0 && rhs == 0)
        return 0;
    if (lhs == 0 && rhs != 0)
        return 0;
    if (lhs != 0 && rhs == 0)
        return 0;
    if (lhs != 0 && rhs != 0)
        return (lhs * rhs) / NWD(lhs, rhs);
}
