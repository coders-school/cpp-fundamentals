#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0) lhs*=-1;
    if (rhs < 0) rhs*=-1;
    while(lhs != 0 && rhs != 0){
        if(lhs > rhs){
            lhs%=rhs;
        }else{
            rhs%=lhs;
        }
    }
    return lhs + rhs;
}

int NWW(int lhs, int rhs) {
    return -1;        
         
}
