#pragma once
#include <cmath>


int NWD(int lhs, int rhs) {   
   int temporaryVariable {0};
   while (rhs != 0) {
       temporaryVariable = rhs;
       rhs = lhs % rhs;
       lhs = temporaryVariable;
   }
   return abs(lhs);
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    return abs((lhs * rhs) / NWD(lhs,rhs));
}
