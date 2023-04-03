#pragma once
#include <math.h>
#include <cmath>
#include <cstdlib>

int NWD(int lhs, int rhs) {
    int nwd;
    int counter = 1;
    lhs = abs(lhs);
    rhs = abs(rhs);
    while (counter <= lhs && counter <= rhs) {
        if (lhs % counter == 0 && rhs % counter == 0) {
            nwd = counter;
        }
        counter++;
    }
    return nwd;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
