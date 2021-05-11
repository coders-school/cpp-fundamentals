#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0) {
        return rhs;
    }
    else if (rhs == 0) {
        return lhs;
    }
    else {
        while (lhs != rhs) {
            if (rhs > lhs) {
                rhs = rhs - lhs;
            } else {
                lhs = lhs - rhs;
            }
        }
        return lhs;
    }
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 && rhs ==0){
        return 0;
    } else {
    return ((lhs * rhs) / NWD (lhs, rhs));    
    }
}