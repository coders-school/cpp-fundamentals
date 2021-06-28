#pragma once

int NWD(int lhs, int rhs) {
    if ((rhs < 0 ) && (lhs < 0 )){
        lhs*=-1;
        rhs*=-1;
     }
    else if (lhs < 0)
        lhs*=-1;
    else if (rhs < 0)
        rhs *=-1;

    if (rhs == 0 )
        return lhs;
    else if (lhs == 0 )
        return rhs;
    
    else if ((rhs == 1) || (lhs == 1))
        return 1;

    while (lhs!=rhs){
        if (lhs > rhs)
            lhs -=rhs;
        else
            rhs-=lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if ((rhs < 0 ) && (lhs < 0 )){
        lhs*=-1;
        rhs*=-1;
    }
    else if (lhs < 0)
        lhs*=-1;
    else if (rhs < 0)
        rhs *=-1;

    if ((lhs ==0) || (rhs ==0))
        return 0;
    return lhs*rhs/NWD(lhs,rhs);
}
