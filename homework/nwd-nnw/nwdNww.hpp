#pragma once
int NWD(int lhs, int rhs) {
    if(rhs != 0){
        while(lhs!=rhs){
            if(lhs>rhs)
                lhs-=rhs;
            else
                rhs-=lhs;
        }
        if(lhs < 0)
            lhs *= -1;
        return lhs;
    }
    return 0;
}

int NWW(int lhs, int rhs) {
    if(lhs != 0 || rhs != 0){
        int iNWW = lhs * rhs / NWD(lhs, rhs);
        if(iNWW < 0)
            iNWW *= -1;
        return iNWW;
    }
    return 0;
}
