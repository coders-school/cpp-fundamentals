#pragma once

int NWD(int lhs, int rhs) {
    if(lhs<0){lhs=-lhs;}
    if(rhs<0){rhs=-rhs;}
    if(lhs==0){return rhs;}
    while(rhs){
        int tmp=lhs%rhs;
        lhs=rhs;
        rhs=tmp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (0==lhs&&0==rhs){return 0;}
    int nww=lhs/NWD(lhs, rhs);
    nww*=rhs;
    if(nww<0){nww=-nww;}
    return nww;
}
