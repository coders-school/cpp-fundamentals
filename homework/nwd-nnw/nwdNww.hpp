#pragma once
int NWW(int lhs, int rhs) {
    int pom,shs;
    shs = lhs * rhs;
    while (rhs)
    {
       pom = rhs;
       rhs = lhs % rhs;
       lhs = pom;
    }
    pom /= lhs;
    
    return pom;
}


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

