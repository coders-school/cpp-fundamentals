#pragma once
#include <math.h>
#include <cmath>
#include <cstdlib>

int NWD(int lhs, int rhs) {
    int nwd;
    int counter = 1;
    lhs = abs(lhs);
    rhs = abs(rhs);
    if ((lhs && rhs) == 0) {
        return 0;
    } else if (lhs == 0 && rhs != 0) {
        return rhs;
    } else if (lhs != 0 && rhs == 0) {
        return lhs;
    } else {
        while (counter <= lhs && counter <= rhs) {
            if (lhs % counter == 0 && rhs % counter == 0) {
                nwd = counter;
            }
            counter++;
        }
        return nwd;
    }
}

int NWW(int lhs, int rhs) {
    int nwd = NWD(lhs, rhs);
    return lhs * rhs / nwd;
}
