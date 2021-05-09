#pragma once
#include <cstdlib>
#include <cmath>

int NWD(int lhs, int rhs) {
    int temp, left = lhs, right = rhs;
    if (left < right){
        right = lhs;
        left = rhs;
    }
    while (right != 0){
        temp = left % right;
        left = right;
        right = temp;
        //78:48=1, reszty 30 48:30=1, reszty 1830:18=1, reszty 1218:12=1, reszty 612:6=2, reszty 0
    }
    return abs( left );
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return 1;
}
