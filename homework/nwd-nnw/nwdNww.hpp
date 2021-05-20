#include <cstdlib>
#pragma once

int NWD(int lhs, int rhs) {

    int tempVal;
        
    while(rhs!=0)
    {
        tempVal = rhs;
        rhs = lhs%rhs;
        lhs = tempVal;    
    }
    if(lhs<0)
        return lhs*(-1);
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 or rhs == 0) {
        return 0;
    }
    return abs(lhs*rhs/NWD(lhs, rhs));
}
