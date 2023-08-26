#pragma once
#include <iostream>
int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs == 0) {
        return rhs;
    }
    if (rhs == 0) {
        return lhs;
    } else if (lhs == rhs)
        return lhs;
    else if (lhs > rhs)
        return NWD(lhs - rhs, rhs);
    else
        return NWD(lhs, rhs - lhs);
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if (lhs==0||rhs==0){
        return 0;
    }
    int l1=lhs;
    int l2=rhs;
    while(l1!=l2) {
        if (l1>l2){
            l1-=l2;
        }
        else{
            l2-=l1;
        }
    }
    return (lhs*rhs)/l1;
}
