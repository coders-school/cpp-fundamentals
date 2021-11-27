#pragma once

   int NWD(int lhs, int rhs) {

    while (lhs!=rhs){
            if(lhs<rhs){
                rhs=rhs-lhs;}
                else {lhs=lhs-rhs;}
    return lhs;
        }
        
    return 1;
}

int NWW(int lhs, int rhs) {
   
    int num = lhs*rhs/NWD(lhs,rhs);
        return num;
    return -1;
}
