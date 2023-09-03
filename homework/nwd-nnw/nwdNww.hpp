#pragma once
#include <iostream>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if(lhs == 0 && rhs == 0){
        return 0;
    }else if(lhs == 0){
        return rhs;
    }else if(rhs == 0){
        return lhs;
    }
    while(lhs % rhs != 0){
        int tmp = lhs % rhs;
        lhs = rhs;
        rhs = tmp;
    }
    return rhs;
}

int NWW(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);
    if(lhs == 0 && rhs == 0){
        return 0;
    }
    return lhs*rhs/NWD(lhs, rhs);
}
