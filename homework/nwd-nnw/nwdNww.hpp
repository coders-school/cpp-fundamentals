#pragma once

int NWD(int lhs, int rhs) {
    int nwd = 1; 
    for(int i=2; i<=lhs && i <=rhs; i++){
        while(!(lhs%i) && !(rhs%i)){
            nwd*=i;
            lhs/=i;
            rhs/=i;
        }
        while(lhs/i == lhs*i){
            lhs/=i;
        }
        while(rhs/i == rhs*i){
            rhs/=i;
        }
    }
    return nwd;        
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
