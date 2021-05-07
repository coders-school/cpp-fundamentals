#pragma once

int NWD(int lhs, int rhs) {
    if(lhs < 0){
        lhs = -lhs;
    }
    if(rhs < 0){
        rhs = -rhs;
    }
    while (rhs){
        std::swap(lhs %= rhs, rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
