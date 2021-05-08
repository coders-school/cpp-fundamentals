#pragma once

int NWD(int lhs, int rhs) {
    if(lhs==0 && rhs==0){return 0;}
    int divider;
    if (lhs>rhs){divider = lhs;}
    else {divider = rhs;}
    while(lhs%divider!=0 || rhs%divider!=0)
    {
        --divider;
    }

    return divider;
    
    return -1;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
