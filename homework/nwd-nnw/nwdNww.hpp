#pragma once

int NWD(int lhs, int rhs) {
    int nwd;

    if(lhs > 0 && rhs > 0){
        while(lhs!=rhs){
        if(lhs > rhs)
            lhs -= rhs;
        else
            rhs -= lhs;
        }
        return lhs;
    }
    return -1;
}

int NWW(int lhs, int rhs) {
    int nww;

    if(lhs > 0 && rhs > 0){
        nww = (lhs * rhs) / NWD(lhs, rhs);
        return nww;
        }
    return -1;
}
