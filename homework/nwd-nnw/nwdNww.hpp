#pragma once

int NWD(int lhs, int rhs) {
    if(lhs > 0 && rhs > 0){
        int iNWD;
        for(int i = 0; i < rhs; i++){
            if(lhs % i == 0 && rhs % i == 0){
                iNWD = i;
            }
        }
        return NWD;
    }
    return -1;
}

int NWW(int lhs, int rhs) {
    if(lhs > 0 && rhs > 0){
        for(int i = 0;i < rhs * lhs;i++){
            if(i % rhs == 0 && i % lhs == 0)
                return i;
        }
    }
    return -1;
}
