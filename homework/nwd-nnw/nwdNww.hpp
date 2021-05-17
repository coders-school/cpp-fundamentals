#pragma once

int NWD(int lhs, int rhs) {
    
    if (!lhs || !rhs) {
        return 0;
    }

    lhs = (lhs > 0) ? lhs : (-1) * lhs;
    rhs = (rhs > 0) ? rhs : (-1) * rhs;

    int a = (lhs > rhs) ? lhs : rhs;
    int b = (lhs < rhs) ? lhs : rhs;

    while (a != b)
    {
        a = a - b;
        if ( a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
    }
    return a;
}

int NWW(int lhs, int rhs) {
    
    if (!lhs || !rhs) {
        return 0;
    }

    lhs = (lhs > 0) ? lhs : (-1) * lhs;
    rhs = (rhs > 0) ? rhs : (-1) * rhs;

    int nww = (lhs > rhs) ? lhs : rhs;
    const int less = (lhs < rhs) ? lhs : rhs;

    while (nww % less)
    {
        nww += nww;
    }
    
    return nww;
}
