#pragma once

int NWD(int lhs, int rhs) {

    if(rhs == 0){
        return lhs;
    }

    if(lhs < 0){
        lhs = std::abs(lhs);
    }

    if(rhs < 0){
        rhs = std::abs(rhs);
    }

    while(rhs != 0){
        int temp = rhs;
        rhs = lhs % rhs;
        lhs = temp;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {

    if(lhs == 0 || rhs == 0){
        return 0;
    }

    if(lhs < 0){
        lhs = std::abs(lhs);
    }

    if(rhs < 0){
        rhs = std::abs(rhs);
    }

    return lhs / NWD(lhs, rhs) * rhs;

}
