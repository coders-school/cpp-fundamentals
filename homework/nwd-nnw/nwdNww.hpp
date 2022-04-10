#pragma once

int NWD(int lhs, int rhs) {
    int & a = lhs;
    int & b = rhs;
    int c = 0;
    while(b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    if(a < 0) a = a*-1;
    return a;
}

int NWW(int lhs, int rhs) {
    int wyn = (lhs*rhs)/NWD(lhs,rhs);
    return wyn;
}
