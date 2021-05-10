#pragma once
//#include <numeric>
#include <cmath>

int NWD(int lhs, int rhs) {
    int abslhs = abs(lhs);
    int absrhs = abs(rhs);
    int temp;

    if(abslhs == 0 && absrhs == 0){
        return 0;
    }
    if(absrhs == 0){
        return lhs;
    }
    if(abslhs == 0){
        return rhs;
    }
    else {
        do {
            if(abslhs > absrhs){
                temp = abslhs;
                abslhs = absrhs;
                absrhs = temp;    
            }
            absrhs -= abslhs;  
        } while(absrhs != 0);
        return abslhs;
    }    
}

int NWW(int lhs, int rhs) {
    int abslhs = abs(lhs);
    int absrhs = abs(rhs);
    
    if(abslhs == 0 || absrhs == 0){
        return 0;
    }

    else {
        return (abslhs / NWD(abslhs, absrhs)) * absrhs;
    }
}
