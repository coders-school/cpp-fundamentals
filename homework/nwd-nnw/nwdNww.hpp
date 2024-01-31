#pragma once

int NWD(int lhs, int rhs) {
    
    int temp;

    if (lhs < 0) {
        lhs = lhs * (-1);
    }
    if (rhs < 0) {
        rhs = rhs * (-1);
    }

    while (rhs != 0) {
        temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }
    return lhs; //or rhs
}

int NWW(int lhs, int rhs) {
    
    if (lhs < 0) {
        lhs = lhs * (-1);
    }
    if (rhs < 0) {
        rhs = rhs * (-1);
    }

    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    else {    
        return ((lhs * rhs) / NWD(lhs, rhs));
    }
}
