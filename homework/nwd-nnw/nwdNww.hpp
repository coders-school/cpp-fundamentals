#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs == 0 || rhs == 0) {
        return std::max(lhs,rhs);
    } else if(lhs < 0 || rhs < 0) {
        return std::min(std::abs(lhs),std::abs(rhs));
    } else {
        while(lhs!=rhs)
        if(lhs>rhs)
           lhs-=rhs; 
        else
           rhs-=lhs; 
        return lhs; 
    }


}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if(lhs == 0 || rhs == 0) {
        return 0;
    } else if(lhs < 0 || rhs < 0) {
        return std::abs(lhs);
    } else if (lhs < rhs)
            return NWW(rhs, lhs);
        int k = lhs;
        while (k % rhs != 0)
            k += lhs;
        return k;
}
