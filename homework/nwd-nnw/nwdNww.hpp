#pragma once

int NWD(int lhs, int rhs) {
    if(rhs < 0)
    {
        rhs = -rhs;
    }
    if(lhs < 0)
    {
        lhs = -lhs;
    }
    while(rhs != 0)
    {
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
