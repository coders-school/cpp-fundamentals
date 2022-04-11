#pragma once

int NWD(int lhs, int rhs) {
    if(lhs
    do {
        if(lhs>rhs)
        {
        lhs = lhs - rhs;
        } else rhs = rhs - lhs;
    }while(lhs!=rhs);

    return lhs;
}

int NWW(int lhs, int rhs) {
    
return (lhs*rhs)/NWD(lhs,rhs);
}
