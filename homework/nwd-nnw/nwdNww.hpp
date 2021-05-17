#pragma once
#include<cmath>

int NWD(int lhs, int rhs) 
{
    int r=0;
    lhs=abs(lhs);
    rhs=abs(rhs);
    
    while(rhs>0)
    {
    	r=lhs%rhs;
    	lhs=rhs;
    	rhs=r;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
