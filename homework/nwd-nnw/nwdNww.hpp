#pragma once

int NWD(int lhs, int rhs) {
if (rhs == 0) {
        return lhs;
    }
    if (lhs == 0) {
        return rhs;
    }

    lhs = abs(lhs);
    rhs = abs(rhs);

    while (lhs != rhs) {
        if (lhs < rhs) {
            rhs -= lhs;
        } else {
            lhs -= rhs;
        }
    }

    return lhs;
}


int NWW(int lhs, int rhs) {
    
    if (lhs == 0 || rhs == 0){
        return 0;
    }
    lhs = abs(lhs);
    rhs = abs(rhs);

    if (lhs < rhs){
        return NWW(rhs, lhs);
    }
    int nww_1 = lhs;

    while (nww_1 % rhs !=0){
        nww_1 += lhs;
    }    
    return nww_1;

}
