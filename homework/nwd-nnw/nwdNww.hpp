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
    // TODO: Implement me :)
    return -1;
}
