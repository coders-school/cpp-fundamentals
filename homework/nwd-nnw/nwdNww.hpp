#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)

    if(lhs < 0) lhs *= -1;
    if(rhs < 0) rhs *= -1;

    int temp = {0};
    while (rhs != 0)
    {
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
