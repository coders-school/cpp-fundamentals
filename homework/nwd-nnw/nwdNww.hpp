#pragma once

int NWD(int lhs, int rhs) {
    int temp;

    while(rhs != 0) {
        temp = lhs % rhs;
        lhs = rhs;
        rhs = temp;
    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
    int temp = NWD(lhs, rhs);
    if (temp != 0) {
        return abs(lhs / temp * rhs);
    } 
    return 0;
}
