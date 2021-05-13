#pragma once

int NWD(int lhs, int rhs) {
    if(lhs == rhs){
        return lhs;
    }
    if(lhs < 0){
        lhs = -lhs;
    }
    if(rhs < 0){
        rhs = -rhs;
    }
    if(lhs == 0 or rhs == 0){
        return lhs + rhs;
    }
    int max = rhs;
    if(lhs > rhs){
        max = lhs;
    }
    int result = 1;
    for(int i = max/2; i>1; --i){
        if(lhs % i == 0 and rhs % i == 0){
            result = i;
            break;
        }
    }
    return result;
}

int NWW(int lhs, int rhs) {
    int result = (lhs*rhs)/NWD(lhs, rhs);
    return result;
}
