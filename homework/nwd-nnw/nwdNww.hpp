#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int pom;
    while (rhs !=0){
        pom = lhs % rhs;
        lhs = rhs;
        rhs = pom;
    }
    if(lhs<0){
        return lhs*(-1);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    int pom, k;
    k= lhs * rhs;
    if (lhs == 0 or rhs == 0) {
        return 0;
    }
    return std::abs((lhs * rhs) / NWD(lhs, rhs));
}
