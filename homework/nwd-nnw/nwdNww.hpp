#pragma once

int NWD(int lhs, int rhs) {
    int x;
    while (rhs)
    {
        x=rhs;
        rhs= lhs%rhs;
        lhs=x;
    }
    
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
