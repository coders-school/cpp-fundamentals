#pragma once

int abs(int a){
    if (a >= 0) return a;
     else return a*(-1);
}


    int NWD(int lhs, int rhs) {
        int myNWD;
        lhs = abs(lhs);
        rhs=abs(rhs);

        if (lhs == 0)
            myNWD= rhs;
        if (rhs == 0)
            myNWD= lhs;

        if (lhs == rhs)
            myNWD= lhs;

        while( lhs != rhs )
            if( lhs < rhs )
                rhs = rhs -lhs;
            else
            lhs = lhs -rhs;
        myNWD= lhs;

    return myNWD;
        }

int NWW(int lhs, int rhs) {

lhs = abs(lhs);
        rhs=abs(rhs);
    int num = lhs*rhs/NWD(lhs,rhs);
        return num;
    return -1;
}
