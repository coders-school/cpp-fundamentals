#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int x;  
    rhs = abs(rhs);
    lhs = abs(lhs);

    while (rhs){
        x = rhs;
        rhs = lhs % rhs;
        lhs = x;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me 
    int result;
    rhs = abs(rhs);
    lhs = abs(lhs);

    if ((rhs == 0) || (lhs == 0)){
        result = 0;
    }
    else{
        result = (rhs*lhs)/NWD(lhs,rhs);
    }


    return result;
}
