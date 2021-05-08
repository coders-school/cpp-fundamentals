#pragma once

int NWD(int lhs, int rhs) {
    int temp;
    while(rhs!=0){
	    temp=rhs;
	    rhs=lhs%rhs;
	    lhs=temp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
