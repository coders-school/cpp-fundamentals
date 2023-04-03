#pragma once

int NWD(int lhs, int rhs) {
    if (rhs < 0) {
        return rhs * (-1);
    }
    
    int variable = 0;
    while (rhs != 0) {
        variable = rhs;
        rhs = lhs % rhs;
        lhs = variable;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
