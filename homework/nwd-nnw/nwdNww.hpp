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
    }
    return abs( left );
}

int NWW(int lhs, int rhs) {
    return lhs/NWD(lhs, rhs)*rhs;
}
