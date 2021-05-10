#pragma once

int NWD(int lhs, int rhs) {
    while(lhs!=rhs){
        if(lhs>rhs){
            lhs -= rhs;
        }
        else{
            rhs-=lhs;
        }
    }
    return lhs;
}

int NWW(int lhs, int rhs) {

    return (lhs/ NWD(lhs, rhs))*rhs;
}
