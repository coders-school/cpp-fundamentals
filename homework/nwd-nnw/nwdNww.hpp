#pragma once

int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
    if (rhs == 0) {
        return lhs;
    }
    if (lhs == 0) {
        return rhs;
    }
    while (rhs != lhs) {
        if (rhs > lhs) {
            rhs -= lhs;
        }
        else
        {
            lhs -= rhs;
        }
    }
    return rhs;
}

int NWW(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
    if (rhs == 0) {
        return rhs;
    }
    if (lhs == 0) {
        return lhs;
    }
   return (lhs / NWD(lhs, rhs)) * rhs;
}
