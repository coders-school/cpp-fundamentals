#pragma once

int NWD(int lhs, int rhs) {
    if(lhs < 0){
        lhs = -lhs;
    }
    if(rhs < 0){
        rhs = -rhs;
    }
    if(lhs == rhs){
        return lhs;
    }
    int max = rhs;
    if(lhs > rhs){
        max = lhs;
    }
    if(lhs == 0 or rhs == 0){
        return lhs + rhs;
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
    if(lhs < 0){
        lhs = -lhs;
    }
    if(rhs < 0){
        rhs = -rhs;
    }
    int nwd = NWD(lhs, rhs);
    if(nwd == 0){
        return 0;
    }
    return (lhs * rhs) / nwd;
}
