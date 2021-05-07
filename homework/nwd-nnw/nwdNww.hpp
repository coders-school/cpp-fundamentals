#pragma once

int NWD(int lhs, int rhs) {
    int remainder = -1, greater = 0, smaller = 0;
    
    if (rhs == 0){
        return lhs;
    } else if (lhs == 0){
        return rhs;
    }
    
    if (rhs < 0){
        rhs *= -1;
    }
    if (lhs < 0){
        lhs *= -1;
    }
    
    if (lhs >= rhs){
        greater = lhs;
        smaller = rhs;
    } else {
        greater = rhs;
        smaller = lhs;
    }

    while (remainder != 0){
        remainder = greater % smaller;
        greater = smaller;
        smaller = remainder;
    } 
     
    return greater;
}

int NWW(int lhs, int rhs) {
    int gcd = NWD(lhs, rhs);

    if (rhs < 0){
      rhs *= -1;
    }
    if (lhs < 0){
      lhs *= -1;
    }

    if (gcd != 0){
      return lhs*rhs/gcd;
    } else {
      return 0;
    }
}
