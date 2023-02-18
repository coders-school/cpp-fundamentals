#pragma once

int NWD(int lhs, int rhs) {
    int REST = 0;
    if (rhs == 0) {
        return lhs;
    }
    else {
        while (lhs % rhs != 0) {
            REST = lhs % rhs;
            lhs = rhs;
            rhs = REST;
        }
        if (rhs < 0) {
            return rhs * -1;
        }
        else {
            return rhs;
        }
    }
}

int NWW(int lhs, int rhs) {
    
    if (lhs == 0 || rhs == 0) {
        return 0;
    } else {
        if ((lhs * rhs) / NWD(lhs, rhs) < 0) {
            return (lhs * rhs) / NWD(lhs, rhs) * -1;
        } else {
            return (lhs * rhs) / NWD(lhs, rhs);
        }
    }
 
}
