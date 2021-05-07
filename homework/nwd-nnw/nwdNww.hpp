#pragma once

int NWD(int lhs, int rhs) {
    if (rhs == 0) return lhs;
    if (lhs<0) lhs*=-1;
    if (rhs<0) rhs*=-1;
    while(lhs % rhs !=0) {

        lhs %= rhs;
        auto tmp = rhs;
        rhs = lhs;
        lhs = tmp;
    }
    return rhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs ==0) return 0;
    if (lhs<0) lhs*=-1;
    if (rhs<0) rhs*=-1;
    return lhs*rhs/NWD(lhs, rhs);
}
