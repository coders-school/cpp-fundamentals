#pragma once

int NWD(int lhs, int rhs) {
    int nwd;

    while (lhs != 0) {
        nwd = lhs;
        lhs = rhs % lhs;
        rhs = nwd;
    }
    return rhs;
}

int NWW(int lhs, int rhs) {
    int nww;

    if(lhs!=0 || rhs!=0){
        nww = (lhs * rhs) / NWD(lhs, rhs);
        return nww;
    }
    return 0;
}
