#pragma once

int NWD(int lhs, int rhs) {

    int num0, num1;
    if(lhs < 0){
        lhs *= (-1);
    }
    if(rhs < 0) {
        rhs *= (-1);
    }
    if(lhs < rhs) {
        num0 = lhs;
        lhs = rhs;
        rhs = num0;
    }
    if(rhs == 0) {
        return lhs;
    }
    if(lhs % rhs == 0) {
        return rhs;
    }
    else{
        while(lhs % rhs != 0) {
            num1 = lhs;
            lhs = rhs;
            rhs = num1 % rhs;
        }
        return rhs;
    }
}

int NWW(int lhs, int rhs) {
    int num;
    if(lhs == 0 or rhs == 0) {
        return 0;
    }
    else {
        num = ((lhs * rhs) / NWD(lhs, rhs));
    }
    if(num < 0) {
        num *= (-1);
    }
    return num;
}
