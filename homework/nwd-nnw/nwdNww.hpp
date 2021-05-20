#pragma once

int NWD(int lhs, int rhs) {
    if(lhs == 0 && rhs == 0) return 0;
    if(lhs < 0) lhs *= -1;
    if(rhs < 0) rhs *= -1;
    int divider = (lhs > rhs) ? lhs : rhs;
    while(lhs % divider || rhs % divider){
        divider--;
    }
    return divider;
}

int NWW(int lhs, int rhs) {
    if(!lhs || !rhs) return 0;
    int x = (lhs < rhs) ? lhs : rhs;
    int y = (lhs < rhs) ? rhs : lhs;
    int multiple = x;
    while(multiple % y){
        multiple += x;
    }
    if(multiple < 0){
        multiple *= -1;
    }
    return multiple;
}
