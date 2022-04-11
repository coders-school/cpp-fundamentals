#pragma once
#include <cmath>
int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
   if(lhs!=0 && rhs!=0)
   {
    do {
        if(lhs>rhs)
        {
        lhs = lhs - rhs;
        } else rhs = rhs - lhs;
    }while(lhs!=rhs);
   }
    return lhs;
}

int NWW(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);
   if(lhs!=0 || rhs!=0)
   {
return (lhs*rhs)/NWD(lhs,rhs);
   }
}
