#pragma once

int NWD(int lhs, int rhs) {

    int c;


    while(rhs!=0){
     c=lhs%rhs;
     lhs = rhs;
     rhs = c;

    }
    return abs(lhs);
}

int NWW(int lhs, int rhs) {
   if (lhs ==0 || rhs ==0){
       return 0;
   }
   lhs = abs(lhs);
   rhs = abs(rhs);

    return (lhs/ NWD(lhs, rhs))*rhs;
}
