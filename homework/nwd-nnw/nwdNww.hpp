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
    if(lhs == 0 || rhs == 0){
        return 0;
    } else 
    return abs (lhs / NWD(lhs, rhs) * rhs);
}
