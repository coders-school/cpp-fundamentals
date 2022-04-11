#pragma once
int NWD(int lhs, int rhs) {
    int iLhs = lhs;
    int iRhs = rhs;

    if(iRhs != 0){
        while(iLhs!=iRhs){
            if(iLhs>iRhs)
                iLhs-=iRhs;
            else
                iRhs-=iLhs;
        }
        if(iLhs < 0)
            iLhs *= -1;
        return iLhs;
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
