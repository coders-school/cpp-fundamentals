#pragma once

int NWD(int lhs, int rhs) {
    int rest;
    if (lhs < 0){
        lhs *= -1;
    }
    if (rhs < 0){
        rhs *= -1;
    }
    if(lhs != 0 and rhs != 0){        
        while(rhs != 0 ){
            rest = lhs%rhs;
            lhs = rhs;
            rhs = rest;
        }
        return lhs;
    }
    else if(lhs != 0 and rhs == 0){
        return lhs;
    } 
    else if(lhs == 0 and rhs != 0){
        return rhs;
    } 
    else{
        return 0;
    }
    return -1;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
