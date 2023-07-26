#pragma once
#include <cmath>

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    // Optimized Euclid's algorithm
    
    int temporary =  abs(rhs);
    while (rhs != 0) {
        temporary = abs(rhs);
        rhs = abs(lhs) % abs(rhs);
        lhs = abs(temporary);
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if ( NWD(lhs,rhs) ) {
        return abs( lhs*rhs/NWD(lhs,rhs) );
    }
    return 0;
}
