#pragma once

int NWD(int lhs, int rhs) {
    if(lhs==0)
        return rhs;
    if(rhs==0)
        return lhs;
    if(lhs<0)
        lhs=-lhs;
    if(rhs<0)
        rhs=-rhs;
    while(lhs!=rhs)
    {
        if(lhs>rhs)
            lhs=lhs-rhs;
        else
            rhs=rhs-lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs==0 || rhs==0)
        return 0;  
    if(lhs<0)
        lhs=-lhs;
    if(rhs<0)
        rhs=-rhs; 
    return lhs*rhs/NWD(lhs,rhs);
}
