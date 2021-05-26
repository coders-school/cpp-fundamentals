#pragma once

int NWD(int lhs, int rhs) {
    
    auto result = 1;
    auto range = 0;

    if (lhs > rhs){
        range = rhs;
    }else{
        range = lhs;
    }

    for (auto i=1; i <= range; ++i){
        if(lhs%i == 0 and rhs%i == 0){
            result = i;
        }
    }


    return result;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
