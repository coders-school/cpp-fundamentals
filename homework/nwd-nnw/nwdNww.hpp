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
    return -1;
}
