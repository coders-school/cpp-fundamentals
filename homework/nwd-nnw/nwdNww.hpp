#pragma once

int NWD(int lhs, int rhs) {
    int x;
    while (rhs)
    {
        x=rhs;
        rhs= lhs%rhs;
        lhs=x;
    }
    
    return lhs;
}

int NWW(int lhs, int rhs) {
    int pom,shs;
    shs = lhs * rhs;
    while (rhs != 0)
    {
       pom = rhs;
       rhs = lhs % rhs;
       lhs = pom;
    }
    pom /= lhs;
    
    return pom;
}
