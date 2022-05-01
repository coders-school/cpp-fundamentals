#pragma once

int NWD(int lhs, int rhs) {
    int & a = lhs;
    int & b = rhs;
    int c = 0;
    while(b!=0)
    {
        a = b;
        c = a%b;
        b = c;
    }
    return a;
}

int NWW(int lhs, int rhs) {
    int wyn = lhs*rhs/NWD(lhs,rhs);
    return wyn;
}
