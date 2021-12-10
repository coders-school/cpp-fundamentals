#pragma once

int NWD(int lhs, int rhs) {
    while(lhs != rhs ){
       if( lhs < rhs){
           rhs -= lhs;
       } else lhs -= rhs;
    }
    return lhs;
}


int NWW(int lhs, int rhs) {
    int ab =  lhs * rhs;
    int t {}; 
    while(rhs){
        t = rhs;
        rhs = lhs % rhs;
        lhs = t;
    } 
    return ab /= lhs;
}
