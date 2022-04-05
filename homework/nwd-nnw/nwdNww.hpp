#pragma once
int NWD(int lhs, int rhs) {
    if(rhs != 0){
        while(lhs!=rhs){
            if(lhs>rhs)
                lhs-=rhs;
            else
                rhs-=lhs;
        }
        return lhs;
    }
    return 0;
}

int NWW(int lhs, int rhs) {
    if(lhs != 0 || rhs != 0)
        return lhs * rhs / NWD(lhs, rhs);
    return 0;
}
