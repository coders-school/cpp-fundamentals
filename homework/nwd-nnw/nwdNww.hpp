#pragma once
#include <cstdlib>
int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int temp=0;
    
    while(rhs)
    {
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
        
        
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)    
    int returnValue = 0;
    if(lhs == 0 || rhs == 0)
    {
        return returnValue;
    }

    returnValue = (lhs * rhs) / (NWD(lhs,rhs));

    return abs(returnValue);
}
