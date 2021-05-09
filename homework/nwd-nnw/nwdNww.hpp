#pragma once

int NWD(int lhs, int rhs) {
    abs(lhs);
    abs(rhs);
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
   // return (lhs / NWD(lhs, rhs)) * rhs;
    return -1;
}
