#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    while (lhs!=rhs){
        if(lhs<rhs){
            rhs=rhs-lhs;
        }else lhs=lhs-rhs;
    }
    return -1;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    int x = lhs*rhs/NWD(lhs,rhs);
    return x;
    
}
