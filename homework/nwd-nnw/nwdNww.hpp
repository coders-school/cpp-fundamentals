#pragma once

int NWD(int lhs, int rhs) {
    while(lhs!= rhs)
    {
    	if(lhs>rhs)
    		lhs=lhs-rhs;
    	else
    		rhs=rhs-lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    int tmp;
    while(rhs!= 0)
    {
    	tmp = rhs;
    	rhs = lhs % rhs;
    	lhs = tmp;

    }
    return lhs;
}
