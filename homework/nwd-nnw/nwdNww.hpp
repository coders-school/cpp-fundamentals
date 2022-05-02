#pragma once

int NWD(int lhs, int rhs) {
    if (lhs<0)lhs*=-1;
    if (rhs<0)rhs*=-1;
    while(lhs!=rhs){
        if(lhs>rhs)lhs-=rhs;
        else rhs-=lhs;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0) return 0;
    if(lhs*rhs/NWD(lhs, rhs))return lhs*rhs/NWD(lhs, rhs)*-1;
    return lhs*rhs/NWD(lhs, rhs);
}
