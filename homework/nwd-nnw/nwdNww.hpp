#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    int temp;
    while(rhs!=0){
	    temp=rhs;
	    rhs=lhs%rhs;
	    lhs=temp;
    }
    return  abs(lhs);
}

int NWW(int lhs, int rhs) {
	
    int nwd = NWD(lhs, rhs);
    if(nwd == 0){
	return 0;
    }else {
	 return abs(lhs*rhs/nwd);
    }	 
}
