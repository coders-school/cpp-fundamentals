#pragma once

int NWD(int lhs, int rhs) {
    
    if (!lhs && !rhs) {
        return 0;
    }

    if (!lhs) {
        return rhs;
    }
    else if (!rhs) {
        return lhs;
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

    const int bigger = (lhs > rhs) ? lhs : rhs;
    const int lesser = (lhs < rhs) ? lhs : rhs;
    int nww = bigger;

    while (nww % lesser)
    {
        nww += bigger;
    }
    
    return nww;
}
