#pragma once

int NWD(int lhs, int rhs) {
    if (rhs != 0)
        return NWD(rhs, lhs % rhs);
    if (lhs < 0) {
        return lhs * -1;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if(lhs == rhs){
        if (lhs < 0) {
            return lhs * -1;
        }
        else return lhs;
    }
    if (lhs < rhs) {
        return NWW(rhs, lhs);
    }
    int k = lhs;
    while (k % rhs != 0) {
        k += lhs;
    }
    if(k < 0)
    {
    return k * -1;
    }
        return k;
}