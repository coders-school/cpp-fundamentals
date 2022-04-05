#pragma once
int NWD(int lhs, int rhs) {
    if(lhs > 0 && rhs > 0){
        while(lhs!=rhs){
            if(lhs>rhs)
                lhs-=rhs;
            else
                rhs-=lhs;
        }
        return lhs;
    }
    return -1;
}

int NWW(int lhs, int rhs) {
    if(lhs > 0 && rhs > 0){
        int tmp;
        while(rhs != 0){
            tmp = rhs;
            rhs = lhs % rhs;
            lhs = tmp;
        }
        return lhs;
    }
    return -1;
}
