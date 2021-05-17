#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}

int NWW(int lhs, int rhs) {
    
    if (!lhs || !rhs) {
        return -1;
    }

    int nww = (lhs > rhs) ? lhs : rhs;
    const int less = (lhs < rhs) ? lhs : rhs;

    while (nww % less)
    {
        nww += nww;
    }
    
    return nww;
}
