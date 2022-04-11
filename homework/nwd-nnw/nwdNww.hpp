#pragma once
#include <cmath>
#include <cstdlib>
int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
    int tmp = 0;
    while(rhs != 0){
        tmp = lhs % rhs;
        lhs = rhs;
        rhs = tmp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);

    if(lhs != 0 || rhs != 0)
        return lhs * rhs / NWD(lhs, rhs);

    return 0;
}
